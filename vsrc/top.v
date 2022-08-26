`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module top(
	input clk,
	input rst,

	input						icache_ready_i,
	input						dcache_ready_i,
	input			 			icache_data_valid_i,	
	input			 			dcache_data_valid_i,
	input wire[`InstBus]		icache_data_i,
	input wire[`DataBus]		dcache_data_i,
	input wire[9:0]				vga_waddr_h_i, 
	input wire[8:0]				vga_waddr_v_i, 
	input wire					vga_we_i, 
	input wire[23:0]			vga_wdata_i, 
	output [`AddrBus] 			icache_addr_o,
	output [`AddrBus] 			dcache_addr_o,
	output wire					icache_req_valid_o,
	output wire 				dcache_req_valid_o,
	output wire					icache_wen_o,
	output wire 				dcache_wen_o,
	output wire	[`DataBus]		dcache_wdata_o,
	output wire [1:0]			dcache_wlen_o,
	output wire[`CTRL_Wire_Bus]	icache_ctrl_signal_o,
	output wire[`CTRL_Wire_Bus]	dcache_ctrl_signal_o,
	output wire					vga_clk_o,
	output wire					vga_hsync_o, 
	output wire					vga_vsync_o, 
	output wire					vga_blank_n_o,
	output wire[`Byte]			vga_r_o, 
	output wire[`Byte]			vga_g_o, 
	output wire[`Byte]			vga_b_o, 

	output wire [`AddrBus]		diff_if_id_to_id_pc_o,
	output wire [`AddrBus]		diff_id_to_id_ex_pc_o,
	output wire	[`AddrBus]		diff_dcache_addr_o,
	output wire					diff_dcache_req_valid_o,
	output wire					diff_dcache_wen_o,
	output wire	[`RegBus]		diff_dcache_wdata_o,
	output wire	[1:0]			diff_dcache_wlen_o,
	output wire [`AddrBus]		diff_id_ex_to_ex_pc_o,
	output wire [`AddrBus]		diff_ex_to_ex_mem_pc_o,
	output wire [`AddrBus]		diff_ex_mem_to_mem_pc_o,
	output wire [`AddrBus]		diff_mem_to_mem_wb_pc_o,
	output wire [`AddrBus]		diff_mem_wb_pc_o,
	output wire [`RegAddrBus]	diff_mem_wb_back_rd_addr_o,
	output wire 				diff_mem_wb_back_wreg_o,
	output wire	[`RegBus]		diff_mem_wb_back_wdata_o,
	output wire [`RegBus]		diff_regs_o [0:`RegNum-1]

);

	wire[`AddrBus] if_id_to_id_pc;
	wire[`AddrBus] id_to_id_ex_pc;
	wire[`AddrBus] id_ex_to_ex_pc;
	wire[`AddrBus] ex_to_ex_mem_pc;
	wire[`AddrBus] ex_mem_to_mem_pc;
	wire[`AddrBus] mem_to_mem_wb_pc;
	wire[`InstBus] if_id_to_id_inst;

/* diff-test */
	assign diff_if_id_to_id_pc_o = if_id_to_id_pc;
	assign diff_id_to_id_ex_pc_o = id_to_id_ex_pc;
	assign diff_dcache_addr_o = dcache_addr_o;
	assign diff_dcache_req_valid_o = dcache_req_valid_o;
	assign diff_dcache_wen_o = dcache_wen_o;
	assign diff_dcache_wdata_o = dcache_wdata_o;
	assign diff_dcache_wlen_o = dcache_wlen_o;
	assign diff_id_ex_to_ex_pc_o = id_ex_to_ex_pc;
	assign diff_ex_to_ex_mem_pc_o = ex_to_ex_mem_pc;
	assign diff_ex_mem_to_mem_pc_o = ex_mem_to_mem_pc;
	assign diff_mem_to_mem_wb_pc_o = mem_to_mem_wb_pc;
	assign diff_mem_wb_back_rd_addr_o = mem_wb_to_id_back_rd_addr;
	assign diff_mem_wb_back_wreg_o = mem_wb_to_id_back_wreg;
	assign diff_mem_wb_back_wdata_o = mem_wb_to_id_back_wdata;

	wire[`RegBus] regfile_to_id_rs1_data;
	wire[`RegBus] regfile_to_id_rs2_data;
	wire[`RegBus] csr_to_id_csr_data;
	wire[`RegBus] id_to_id_ex_rs1_data;
	wire[`RegBus] id_ex_to_ex_rs1_data;
	wire[`RegBus] id_to_id_ex_rs2_data;
	wire[`RegBus] id_ex_to_ex_rs2_data;
	wire[`RegAddrBus] id_to_regfile_rs1_addr;
	wire[`RegAddrBus] id_to_regfile_rs2_addr;
	wire[`CSRAddrBus] id_to_csr_raddr;
	wire[`CSRAddrBus] id_to_csr_waddr;
	wire[`RegBus]	  id_to_csr_wdata;
	wire			  id_to_csr_wreg;
	wire[`RegAddrBus] id_ex_to_ex_rs1_addr;
	wire[`RegAddrBus] id_ex_to_ex_rs2_addr;
	wire[`RegAddrBus] id_to_id_ex_rd_addr;
	wire			  id_to_csr_we_mtval;
	wire[`RegBus]	  id_to_csr_wdata_mtval;
	wire			  id_to_csr_we_mepc;
	wire[`RegBus]	  id_to_csr_wdata_mepc;
	wire			  id_to_csr_we_mcause;
	wire[`RegBus]	  id_to_csr_wdata_mcause;
	wire			  id_to_csr_exception_mie_req;


	wire[`RegAddrBus] id_ex_to_ex_rd_addr;
	wire[`RegAddrBus] ex_to_ex_mem_rd_addr;
	wire[`RegAddrBus] ex_mem_to_mem_rd_addr;
	wire[`RegAddrBus] mem_to_mem_wb_rd_addr;

	wire[`RegBus] mem_wb_to_regfile_wdata;
	wire[`RegBus] ex_to_ex_mem_wdata;
	wire[`RegBus] ex_mem_to_mem_wdata;
	wire[`RegBus] mem_to_mem_wb_wdata;

	wire[`OpcodeBus] id_to_id_ex_opcode;
	wire[`OpcodeBus] id_ex_to_ex_opcode;
	wire[`funct3Bus] id_to_id_ex_funct3;
	wire[`funct3Bus] id_ex_to_ex_funct3;
	wire[`funct7Bus] id_to_id_ex_funct7;
	wire[`funct7Bus] id_ex_to_ex_funct7;

	wire[`OpcodeBus] ex_to_ex_mem_opcode;
	wire[`funct3Bus] ex_to_ex_mem_funct3;

	wire[`OpcodeBus] ex_mem_to_mem_opcode;
	wire[`funct3Bus] ex_mem_to_mem_funct3;

	wire id_to_id_ex_wreg;
	wire id_ex_to_ex_wreg;
	wire ex_to_ex_mem_wreg;
	wire ex_mem_to_mem_wreg;
	wire mem_to_mem_wb_wreg;

	wire[`ImmBus] id_to_id_ex_imm;
	wire[`ImmBus] id_ex_to_ex_imm;
	wire id_to_id_ex_imm_sel;
	wire id_ex_to_ex_imm_sel;

	wire mem_wb_to_regfile_we;
	wire[`RegAddrBus] mem_wb_to_regfile_waddr;

	wire[`RegAddrBus] ex_to_id_back_rd_addr;
	wire ex_to_id_back_wreg;
	wire[`OpcodeBus] ex_to_id_back_opcode;
	wire[`RegBus] ex_to_id_back_wdata;
	wire[`RegAddrBus] mem_to_id_back_rd_addr;
	wire mem_to_id_back_wreg;
	wire[`RegBus] mem_to_id_back_wdata;
	wire[`RegAddrBus] mem_wb_to_id_back_rd_addr;
	wire mem_wb_to_id_back_wreg;
	wire[`RegBus] mem_wb_to_id_back_wdata;

	wire if_id_block_flag;
	wire ex_branch_flag;
	wire mem_to_ctrl_block_flag;

	wire[`AddrBus] ex_to_ctrl_pc_new;

	wire[`CTRL_Wire_Bus] ctrl_to_pc_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_if_id_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_id_ex_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_muldiv_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_ex_mem_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_mem_wb_ctrl_signal;
	wire[`AddrBus] ctrl_to_pc_pc_new;
	wire[`AddrBus] pc_to_if_id_pc;

	wire[`RegBus] ex_to_muldiv_rs1_data;
	wire[`RegBus] ex_to_muldiv_rs2_data;
	wire ex_to_muldiv_rs1_sign;
	wire ex_to_muldiv_rs2_sign;
	wire ex_to_muldiv_req_valid;
	wire ex_to_muldiv_mul_en;
	wire[`RegBus] muldiv_to_ex_data_1;
	wire[`RegBus] muldiv_to_ex_data_2;
	wire muldiv_to_ctrl_muldiv_ready;
	wire muldiv_valid;
	wire ex_to_ctrl_ex_block_flag;
	assign ex_to_ctrl_ex_block_flag = ~muldiv_valid;

	wire[23:0] vga_r_odata;
	wire[9:0]  vga_r_oaddr_h;
	wire[8:0]  vga_r_oaddr_v;
	assign vga_clk_o = clk;

	PC pc0(
		.clk(clk),
		.rst(rst),
		.ctrl_signal_i(ctrl_to_pc_ctrl_signal),
		.pc_new_i(ctrl_to_pc_pc_new),
		.pc_ram_o(icache_addr_o),
		.pc_pipeline_o(pc_to_if_id_pc),
		.icache_wen_o(icache_wen_o),
		.icache_req_valid_o(icache_req_valid_o)
	);

	IF_ID if_id0(
		.clk(clk),
		.rst(rst),
		.icache_data_valid_i(icache_data_valid_i),
		.if_inst_i(icache_data_i),
		.ctrl_signal_i(ctrl_to_if_id_ctrl_signal),
		.pc_i(pc_to_if_id_pc),
		.block_flag_o(if_id_block_flag),
		.if_inst_o(if_id_to_id_inst),
		.pc_o(if_id_to_id_pc)
	);

	ID id0(
/* 		.rst(rst), */
		.inst_i(if_id_to_id_inst),

		.rs1_data_i(regfile_to_id_rs1_data),
		.rs2_data_i(regfile_to_id_rs2_data),
		.csr_data_i(csr_to_id_csr_data),
		.ex_back_opcode_i(ex_to_id_back_opcode), 
		.ex_back_wdata_i(ex_to_id_back_wdata),
		.ex_back_rd_addr_i(ex_to_id_back_rd_addr),
		.ex_back_wreg_i(ex_to_id_back_wreg),
		.mem_back_wdata_i(mem_to_id_back_wdata),
		.mem_back_rd_addr_i(mem_to_id_back_rd_addr),
		.mem_back_wreg_i(mem_to_id_back_wreg),
		.mem_wb_back_wdata_i(mem_wb_to_id_back_wdata),
		.mem_wb_back_rd_addr_i(mem_wb_to_id_back_rd_addr),
		.mem_wb_back_wreg_i(mem_wb_to_id_back_wreg),
		.pc_i(if_id_to_id_pc),

		.dcache_req_valid_o(dcache_req_valid_o),
		.dcache_wen_o(dcache_wen_o),
		.dcache_wdata_o(dcache_wdata_o),
		.dcache_addr_o(dcache_addr_o),
		.dcache_wlen_o(dcache_wlen_o),
		.rs1_addr_o(id_to_regfile_rs1_addr),
		.rs2_addr_o(id_to_regfile_rs2_addr), 
		.csr_raddr_o(id_to_csr_raddr),
		.opcode_o(id_to_id_ex_opcode),
		.funct3_o(id_to_id_ex_funct3),
		.funct7_o(id_to_id_ex_funct7),
		.rs1_data_o(id_to_id_ex_rs1_data),
		.rs2_data_o(id_to_id_ex_rs2_data),
		.rd_addr_o(id_to_id_ex_rd_addr),
		.csr_waddr_o(id_to_csr_waddr),
		.csr_wdata_o(id_to_csr_wdata),
		.we_mtval_o(id_to_csr_we_mtval), 
		.wdata_mtval_o(id_to_csr_wdata_mtval), 
		.we_mepc_o(id_to_csr_we_mepc), 
		.wdata_mepc_o(id_to_csr_wdata_mepc), 
		.we_mcause_o(id_to_csr_we_mcause), 
		.wdata_mcause_o(id_to_csr_wdata_mcause), 
		.exception_mie_req_o(id_to_csr_exception_mie_req), 
		.wreg_o(id_to_id_ex_wreg),
		.csr_wreg_o(id_to_csr_wreg),
		.imm_o(id_to_id_ex_imm),
		.imm_sel_o(id_to_id_ex_imm_sel),
/* 		.offset12_o(id_to_id_ex_offset12),
		.offset20_o(id_to_id_ex_offset20), */
		.pc_o(id_to_id_ex_pc)
	);

	REGFILE regfile0(
		.clk(clk),
		.rst(rst),
		.we_i	(mem_wb_to_regfile_we),
		.waddr_i (mem_wb_to_regfile_waddr),
		.wdata_i (mem_wb_to_regfile_wdata),

		.raddr1_i (id_to_regfile_rs1_addr),
		.rdata1_o (regfile_to_id_rs1_data),
		.raddr2_i (id_to_regfile_rs2_addr),
		.rdata2_o (regfile_to_id_rs2_data),
		.diff_reg_o(diff_regs_o)
	);

	CSR csr0(
		.clk(clk),
		.rst(rst),

		.we_i	(id_to_csr_wreg),
		.waddr_i (id_to_csr_waddr),
		.wdata_i (id_to_csr_wdata),
		.we_mtval_i(id_to_csr_we_mtval), 
		.wdata_mtval_i(id_to_csr_wdata_mtval), 
		.we_mepc_i(id_to_csr_we_mepc), 
		.wdata_mepc_i(id_to_csr_wdata_mepc),
		.we_mcause_i(id_to_csr_we_mcause),
		.wdata_mcause_i(id_to_csr_wdata_mcause),
		.exception_mie_req_i(id_to_csr_exception_mie_req),

		.raddr_i (id_to_csr_raddr),
		.rdata_o (csr_to_id_csr_data)
	);

	ID_EX id_ex0(
		.clk(clk),
		.rst(rst),
		.rs1_addr_i(id_to_regfile_rs1_addr),
		.rs2_addr_i(id_to_regfile_rs2_addr),
		.opcode_i(id_to_id_ex_opcode),
		.funct3_i(id_to_id_ex_funct3),
		.funct7_i(id_to_id_ex_funct7),
		.rs1_data_i(id_to_id_ex_rs1_data),
		.rs2_data_i(id_to_id_ex_rs2_data),
		.rd_addr_i(id_to_id_ex_rd_addr),
		.wreg_i(id_to_id_ex_wreg),
		.imm_i(id_to_id_ex_imm),
		.imm_sel_i(id_to_id_ex_imm_sel),
/* 		.offset12_i(id_to_id_ex_offset12),
		.offset20_i(id_to_id_ex_offset20), */
		.pc_i(id_to_id_ex_pc),
		.ctrl_signal_i(ctrl_to_id_ex_ctrl_signal),

		.rs1_addr_o(id_ex_to_ex_rs1_addr),
		.rs2_addr_o(id_ex_to_ex_rs2_addr),
		.opcode_o(id_ex_to_ex_opcode),
		.funct3_o(id_ex_to_ex_funct3),
		.funct7_o(id_ex_to_ex_funct7),
		.rs1_data_o(id_ex_to_ex_rs1_data),
		.rs2_data_o(id_ex_to_ex_rs2_data),
		.rd_addr_o(id_ex_to_ex_rd_addr),
		.wreg_o(id_ex_to_ex_wreg),
		.imm_o(id_ex_to_ex_imm),
		.imm_sel_o(id_ex_to_ex_imm_sel),
/* 		.offset12_o(id_ex_to_ex_offset12),
		.offset20_o(id_ex_to_ex_offset20), */
		.pc_o(id_ex_to_ex_pc)
	);

	EX ex0(
/* 		.clk(clk),
		.rst(rst), */

		.rs1_addr_i(id_ex_to_ex_rs1_addr),
		.rs2_addr_i(id_ex_to_ex_rs2_addr),
		.opcode_i(id_ex_to_ex_opcode),
		.funct3_i(id_ex_to_ex_funct3),
		.funct7_i(id_ex_to_ex_funct7),
		.rs1_data_i(id_ex_to_ex_rs1_data),
		.rs2_data_i(id_ex_to_ex_rs2_data),
		.rd_addr_i(id_ex_to_ex_rd_addr),
		.wreg_i(id_ex_to_ex_wreg),
		.imm_i(id_ex_to_ex_imm),
		.imm_sel_i(id_ex_to_ex_imm_sel),
/* 		.offset12_i(id_ex_to_ex_offset12),
		.offset20_i(id_ex_to_ex_offset20), */
		.pc_i(id_ex_to_ex_pc),
		.muldiv_data_1_i(muldiv_to_ex_data_1),
		.muldiv_data_2_i(muldiv_to_ex_data_2),
		.mem_back_wdata_i(mem_to_id_back_wdata),
		.mem_back_rd_addr_i(mem_to_id_back_rd_addr),
		.mem_back_wreg_i(mem_to_id_back_wreg),


		.muldiv_rs1_data_o(ex_to_muldiv_rs1_data),
		.muldiv_rs2_data_o(ex_to_muldiv_rs2_data),
		.muldiv_rs1_sign_o(ex_to_muldiv_rs1_sign),
		.muldiv_rs2_sign_o(ex_to_muldiv_rs2_sign),
		.muldiv_req_valid_o(ex_to_muldiv_req_valid),
		.muldiv_mul_en_o(ex_to_muldiv_mul_en), 
		.rd_addr_o(ex_to_ex_mem_rd_addr),
		.wreg_o(ex_to_ex_mem_wreg),
		.wdata_o(ex_to_ex_mem_wdata),
		.opcode_o(ex_to_ex_mem_opcode),
		.funct3_o(ex_to_ex_mem_funct3),

		.ex_back_opcode_o(ex_to_id_back_opcode), 
		.ex_back_rd_addr_o(ex_to_id_back_rd_addr),
		.ex_back_wreg_o(ex_to_id_back_wreg),
		.ex_back_wdata_o(ex_to_id_back_wdata),


		.branch_flag_o(ex_branch_flag),
		.ex_to_ex_mem_pc_o(ex_to_ex_mem_pc),
		.pc_new_o(ex_to_ctrl_pc_new)
	);

	MULDIV muldiv0(
		.clk(clk), 
		.rst(rst), 

		.mul_en(ex_to_muldiv_mul_en), 
		.req_valid_i(ex_to_muldiv_req_valid),
		.op_1_i(ex_to_muldiv_rs1_data),
		.op_2_i(ex_to_muldiv_rs2_data),
		.sign_op_1_i(ex_to_muldiv_rs1_sign),
		.sign_op_2_i(ex_to_muldiv_rs2_sign),
		.ctrl_signal_i(ctrl_to_muldiv_ctrl_signal),

		.data_1_o(muldiv_to_ex_data_1), 
		.data_2_o(muldiv_to_ex_data_2), 
		.ready_o(muldiv_to_ctrl_muldiv_ready), 
		.valid_o(muldiv_valid)
	);

	EX_MEM ex_mem0(
		.clk(clk),
		.rst(rst),

		.rd_addr_i(ex_to_ex_mem_rd_addr),
		.wreg_i(ex_to_ex_mem_wreg),
		.wdata_i(ex_to_ex_mem_wdata),
		.ex_to_ex_mem_pc_i(ex_to_ex_mem_pc),
		.opcode_i(ex_to_ex_mem_opcode),
		.funct3_i(ex_to_ex_mem_funct3),
		.ctrl_signal_i(ctrl_to_ex_mem_ctrl_signal),

		.rd_addr_o(ex_mem_to_mem_rd_addr),
		.wreg_o(ex_mem_to_mem_wreg),
		.wdata_o(ex_mem_to_mem_wdata),
		.ex_mem_to_mem_pc_o(ex_mem_to_mem_pc),
		.opcode_o(ex_mem_to_mem_opcode),
		.funct3_o(ex_mem_to_mem_funct3)

	);

	MEM mem0(
		.rd_addr_i(ex_mem_to_mem_rd_addr),
		.wreg_i(ex_mem_to_mem_wreg),
		.wdata_i(ex_mem_to_mem_wdata),
		.dcache_data_valid_i(dcache_data_valid_i),
		.dcache_data_i(dcache_data_i),
		.ex_mem_to_mem_pc_i(ex_mem_to_mem_pc),
		.opcode_i(ex_mem_to_mem_opcode),
		.funct3_i(ex_mem_to_mem_funct3),

		.block_flag_o(mem_to_ctrl_block_flag),
		.rd_addr_o(mem_to_mem_wb_rd_addr),
		.wreg_o(mem_to_mem_wb_wreg),
		.wdata_o(mem_to_mem_wb_wdata),
		.mem_to_mem_wb_pc_o(mem_to_mem_wb_pc),
		.mem_back_rd_addr_o(mem_to_id_back_rd_addr),
		.mem_back_wreg_o(mem_to_id_back_wreg),
		.mem_back_wdata_o(mem_to_id_back_wdata)

	);

	MEM_WB mem_wb0(
		.clk(clk),
		.rst(rst),

		.rd_addr_i(mem_to_mem_wb_rd_addr),
		.wreg_i(mem_to_mem_wb_wreg),
		.wdata_i(mem_to_mem_wb_wdata),
		.mem_to_mem_wb_pc_i(mem_to_mem_wb_pc),
		.ctrl_signal_i(ctrl_to_mem_wb_ctrl_signal),
	
		.wdata_o(mem_wb_to_regfile_wdata),
		.wreg_o(mem_wb_to_regfile_we),
		.rd_addr_o(mem_wb_to_regfile_waddr),
		.diff_mem_wb_pc_o(diff_mem_wb_pc_o),
		.mem_wb_back_rd_addr_o(mem_wb_to_id_back_rd_addr),
		.mem_wb_back_wreg_o(mem_wb_to_id_back_wreg),
		.mem_wb_back_wdata_o(mem_wb_to_id_back_wdata)
	);

	CTRL ctrl0(
		.clk(clk),
		.rst(rst),

		.icache_ready_i(icache_ready_i),
		.muldiv_ready_i(muldiv_to_ctrl_muldiv_ready),
		.dcache_ready_i(dcache_ready_i),
		.ex_pc_new_i(ex_to_ctrl_pc_new),
		.if_id_block_flag_i(if_id_block_flag),
		.ex_branch_flag_i(ex_branch_flag),
		.ex_block_flag_i(ex_to_ctrl_ex_block_flag),
		.mem_block_flag_i(mem_to_ctrl_block_flag),

		.ctrl_signal_pc_o(ctrl_to_pc_ctrl_signal),
		.ctrl_signal_if_id_o(ctrl_to_if_id_ctrl_signal),
		.ctrl_signal_id_ex_o(ctrl_to_id_ex_ctrl_signal),
		.ctrl_signal_muldiv_o(ctrl_to_muldiv_ctrl_signal),
		.ctrl_signal_ex_mem_o(ctrl_to_ex_mem_ctrl_signal),
		.ctrl_signal_mem_wb_o(ctrl_to_mem_wb_ctrl_signal),
		.ctrl_to_pc_new_o(ctrl_to_pc_pc_new),
		.ctrl_signal_icache_o(icache_ctrl_signal_o),
		.ctrl_signal_dcache_o(dcache_ctrl_signal_o)
	);

	VGA_CTRL vga_ctrl0 (
		.pclk(clk), 
		.reset(rst), 
		.vga_data_i(vga_r_odata), 

		.h_addr_o(vga_r_oaddr_h), 
		.v_addr_o(vga_r_oaddr_v), 
		.hsync_o(vga_hsync_o), 
		.vsync_o(vga_vsync_o), 
		.valid_o(vga_blank_n_o), 
		.vga_r_o_o(vga_r_o), 
		.vga_g_o_o(vga_g_o), 
		.vga_b_o(vga_b_o)

	);

	VMEM vmem0 (
		.clk(clk), 
		
		.raddr_h_i(vga_r_oaddr_h), 
		.raddr_v_i(vga_r_oaddr_v), 
		.waddr_h_i(vga_waddr_h_i), 
		.waddr_v_i(vga_waddr_v_i), 
		.we_i(vga_we_i), 
		.vga_wdata_i(vga_wdata_i),

		.vga_r_odata_o(vga_r_odata)
	);

/* The following code only for simulating */

	initial begin
		$dumpfile("logs/vlt_dump.vcd");
		$dumpvars();
	end
endmodule
