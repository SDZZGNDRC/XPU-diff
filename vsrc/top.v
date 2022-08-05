`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module top(
	input clk,
	input rst,

	input						dcache_ready_i,
	input			 			icache_data_valid_i,	
	input			 			dcache_data_valid_i,
	input wire [`InstBus]		icache_data_i,
	input wire	[`DataBus]		dcache_data_i,
	output [`AddrBus] 			icache_addr_o,
	output [`AddrBus] 			dcache_addr_o,
	output wire					icache_req_valid_o,
	output wire 				dcache_req_valid_o,
	output wire					icache_wen_o,
	output wire 				dcache_wen_o,
/* 	output wire	[`InstBus]		icache_data_o, */
	output wire	[`DataBus]		dcache_wdata_o,
	output wire [1:0]			dcache_wlen_o,

	output wire [`AddrBus]		diff_if_id_to_id_pc_o,
	output wire [`AddrBus]		diff_id_to_id_ex_pc_o,
	output wire [`AddrBus]		diff_id_ex_to_ex_pc_o,
	output wire [`RegBus]		diff_regs_o [0:`RegNum-1]

);

	wire[`AddrBus] if_id_to_id_pc;
	wire[`AddrBus] id_to_id_ex_pc;
	wire[`AddrBus] id_ex_to_ex_pc;
	wire[`InstBus] if_id_to_id_inst;

/* diff-test */
	assign diff_if_id_to_id_pc_o = if_id_to_id_pc;
	assign diff_id_to_id_ex_pc_o = id_to_id_ex_pc;
	assign diff_id_ex_to_ex_pc_o = id_ex_to_ex_pc;

	wire[`RegBus] regfile_to_id_rs1_data;
	wire[`RegBus] regfile_to_id_rs2_data;
	wire[`RegBus] csr_to_id_csr_data;
	wire[`RegBus] id_to_id_ex_rs1_data;
	wire[`RegBus] id_ex_to_ex_rs1_data;
	wire[`RegBus] id_to_id_ex_csr_data;
	wire[`RegBus] id_to_id_ex_rs2_data;
	wire[`RegBus] id_ex_to_ex_rs2_data;
	wire[`RegBus] id_ex_to_ex_csr_data;
	wire[`RegAddrBus] id_to_regfile_rs1_addr;
	wire[`RegAddrBus] id_to_regfile_rs2_addr;
	wire[`CSRAddrBus] id_to_csr_raddr;
	wire[`RegAddrBus] id_ex_to_ex_rs1_addr;
	wire[`RegAddrBus] id_ex_to_ex_rs2_addr;
	wire[`CSRAddrBus] id_ex_to_ex_csr_raddr;
	wire[`RegAddrBus] id_to_id_ex_rd_addr;
	wire[`CSRAddrBus] id_to_id_ex_csr_waddr;

	wire[`RegAddrBus] id_ex_to_ex_rd_addr;
	wire[`CSRAddrBus] id_ex_to_ex_csr_waddr;
	wire[`RegAddrBus] ex_to_ex_mem_rd_addr;
	wire[`CSRAddrBus] ex_to_ex_mem_csr_waddr;
	wire[`RegAddrBus] ex_mem_to_mem_rd_addr;
	wire[`CSRAddrBus] ex_mem_to_mem_csr_waddr;
	wire[`RegAddrBus] mem_to_mem_wb_rd_addr;
	wire[`CSRAddrBus] mem_to_mem_wb_csr_waddr;

	wire[`RegBus] mem_wb_to_regfile_wdata;
	wire[`RegBus] mem_wb_to_csr_wdata;
	wire[`RegBus] ex_to_ex_mem_wdata;
	wire[`RegBus] ex_to_ex_mem_csr_wdata;
	wire[`RegBus] ex_mem_to_mem_wdata;
	wire[`RegBus] ex_mem_to_mem_csr_wdata;
	wire[`RegBus] mem_to_mem_wb_wdata;
	wire[`RegBus] mem_to_mem_wb_csr_wdata;

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
	wire id_to_id_ex_csr_wreg;
	wire id_ex_to_ex_wreg;
	wire id_ex_to_ex_csr_wreg;
	wire ex_to_ex_mem_wreg;
	wire ex_to_ex_mem_csr_wreg;
	wire ex_mem_to_mem_wreg;
	wire ex_mem_to_mem_csr_wreg;
	wire mem_to_mem_wb_wreg;
	wire mem_to_mem_wb_csr_wreg;

	wire[`ImmBus] id_to_id_ex_imm;
	wire[`ImmBus] id_ex_to_ex_imm;
	wire id_to_id_ex_imm_sel;
	wire id_ex_to_ex_imm_sel;

/* 	wire[`Offset12Bus] id_to_id_ex_offset12;
	wire[`Offset12Bus] id_ex_to_ex_offset12;
	wire[`Offset20Bus] id_to_id_ex_offset20;
	wire[`Offset20Bus] id_ex_to_ex_offset20; */

	wire mem_wb_to_regfile_we;
	wire[`RegAddrBus] mem_wb_to_regfile_waddr;
	wire mem_wb_to_csr_we;
	wire[`CSRAddrBus] mem_wb_to_csr_waddr;

	wire[`RegAddrBus] ex_to_id_back_rd_addr;
	wire[`CSRAddrBus] ex_to_id_back_csr_waddr;
	wire ex_to_id_back_wreg;
	wire ex_to_id_back_csr_wreg;
	wire[`RegBus] ex_to_id_back_wdata;
	wire[`RegBus] ex_to_id_back_csr_wdata;
	wire[`RegAddrBus] mem_to_id_back_rd_addr;
	wire[`CSRAddrBus] mem_to_id_back_csr_waddr;
	wire mem_to_id_back_wreg;
	wire mem_to_id_back_csr_wreg;
	wire[`RegBus] mem_to_id_back_wdata;
	wire[`RegBus] mem_to_id_back_csr_wdata;
	wire[`RegAddrBus] mem_wb_to_id_back_rd_addr;
	wire[`CSRAddrBus] mem_wb_to_id_back_csr_waddr;
	wire mem_wb_to_id_back_wreg;
	wire mem_wb_to_id_back_csr_wreg;
	wire[`RegBus] mem_wb_to_id_back_wdata;
	wire[`RegBus] mem_wb_to_id_back_csr_wdata;

	wire ex_branch_flag;
	wire mem_to_ctrl_block_flag;

	wire[`AddrBus] ex_to_ctrl_pc_new;

	wire[`CTRL_Wire_Bus] ctrl_to_pc_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_if_id_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_id_ex_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_ex_mem_ctrl_signal;
	wire[`CTRL_Wire_Bus] ctrl_to_mem_wb_ctrl_signal;
	wire[`AddrBus] ctrl_to_pc_pc_new;
	wire[`AddrBus] pc_to_if_id_pc;

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
		.if_inst_i(icache_data_i),
		.ctrl_signal_i(ctrl_to_if_id_ctrl_signal),
		.pc_i(pc_to_if_id_pc),
		.if_inst_o(if_id_to_id_inst),
		.pc_o(if_id_to_id_pc)
	);

	ID id0(
/* 		.rst(rst), */
		.inst_i(if_id_to_id_inst),

		.rs1_data_i(regfile_to_id_rs1_data),
		.rs2_data_i(regfile_to_id_rs2_data),
		.csr_data_i(csr_to_id_csr_data),
		.ex_back_wdata_i(ex_to_id_back_wdata),
		.ex_back_rd_addr_i(ex_to_id_back_rd_addr),
		.ex_back_wreg_i(ex_to_id_back_wreg),
		.mem_back_wdata_i(mem_to_id_back_wdata),
		.mem_back_rd_addr_i(mem_to_id_back_rd_addr),
		.mem_back_wreg_i(mem_to_id_back_wreg),
		.mem_wb_back_wdata_i(mem_wb_to_id_back_wdata),
		.mem_wb_back_rd_addr_i(mem_wb_to_id_back_rd_addr),
		.mem_wb_back_wreg_i(mem_wb_to_id_back_wreg),
		.ex_back_csr_wdata_i(ex_to_id_back_csr_wdata),
		.ex_back_csr_waddr_i(ex_to_id_back_csr_waddr),
		.ex_back_csr_wreg_i(ex_to_id_back_csr_wreg),
		.mem_back_csr_wdata_i(mem_to_id_back_csr_wdata),
		.mem_back_csr_waddr_i(mem_to_id_back_csr_waddr),
		.mem_back_csr_wreg_i(mem_to_id_back_csr_wreg),
		.mem_wb_back_csr_wdata_i(mem_wb_to_id_back_csr_wdata),
		.mem_wb_back_csr_waddr_i(mem_wb_to_id_back_csr_waddr),
		.mem_wb_back_csr_wreg_i(mem_wb_to_id_back_csr_wreg),
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
		.csr_data_o(id_to_id_ex_csr_data),
		.rd_addr_o(id_to_id_ex_rd_addr),
		.csr_waddr_o(id_to_id_ex_csr_waddr),
		.wreg_o(id_to_id_ex_wreg),
		.csr_wreg_o(id_to_id_ex_csr_wreg),
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

		.we_i	(mem_wb_to_csr_we),
		.waddr_i (mem_wb_to_csr_waddr),
		.wdata_i (mem_wb_to_csr_wdata),

		.raddr_i (id_to_csr_raddr),
		.rdata_o (csr_to_id_csr_data)
	);

	ID_EX id_ex0(
		.clk(clk),
		.rst(rst),
		.rs1_addr_i(id_to_regfile_rs1_addr),
		.rs2_addr_i(id_to_regfile_rs2_addr),
		.csr_raddr_i(id_to_csr_raddr),
		.opcode_i(id_to_id_ex_opcode),
		.funct3_i(id_to_id_ex_funct3),
		.funct7_i(id_to_id_ex_funct7),
		.rs1_data_i(id_to_id_ex_rs1_data),
		.rs2_data_i(id_to_id_ex_rs2_data),
		.csr_data_i(id_to_id_ex_csr_data),
		.rd_addr_i(id_to_id_ex_rd_addr),
		.csr_waddr_i(id_to_id_ex_csr_waddr),
		.wreg_i(id_to_id_ex_wreg),
		.csr_wreg_i(id_to_id_ex_csr_wreg),
		.imm_i(id_to_id_ex_imm),
		.imm_sel_i(id_to_id_ex_imm_sel),
/* 		.offset12_i(id_to_id_ex_offset12),
		.offset20_i(id_to_id_ex_offset20), */
		.pc_i(id_to_id_ex_pc),
		.ctrl_signal_i(ctrl_to_id_ex_ctrl_signal),

		.rs1_addr_o(id_ex_to_ex_rs1_addr),
		.rs2_addr_o(id_ex_to_ex_rs2_addr),
		.csr_raddr_o(id_ex_to_ex_csr_raddr),
		.opcode_o(id_ex_to_ex_opcode),
		.funct3_o(id_ex_to_ex_funct3),
		.funct7_o(id_ex_to_ex_funct7),
		.rs1_data_o(id_ex_to_ex_rs1_data),
		.rs2_data_o(id_ex_to_ex_rs2_data),
		.csr_data_o(id_ex_to_ex_csr_data),
		.rd_addr_o(id_ex_to_ex_rd_addr),
		.csr_waddr_o(id_ex_to_ex_csr_waddr),
		.wreg_o(id_ex_to_ex_wreg),
		.csr_wreg_o(id_ex_to_ex_csr_wreg),
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
		.csr_raddr_i(id_ex_to_ex_csr_raddr),
		.opcode_i(id_ex_to_ex_opcode),
		.funct3_i(id_ex_to_ex_funct3),
		.funct7_i(id_ex_to_ex_funct7),
		.rs1_data_i(id_ex_to_ex_rs1_data),
		.rs2_data_i(id_ex_to_ex_rs2_data),
		.csr_data_i(id_ex_to_ex_csr_data),
		.rd_addr_i(id_ex_to_ex_rd_addr),
		.csr_waddr_i(id_ex_to_ex_csr_waddr),
		.wreg_i(id_ex_to_ex_wreg),
		.csr_wreg_i(id_ex_to_ex_csr_wreg),
		.imm_i(id_ex_to_ex_imm),
		.imm_sel_i(id_ex_to_ex_imm_sel),
/* 		.offset12_i(id_ex_to_ex_offset12),
		.offset20_i(id_ex_to_ex_offset20), */
		.pc_i(id_ex_to_ex_pc),
		.mem_back_wdata_i(mem_to_id_back_wdata),
		.mem_back_rd_addr_i(mem_to_id_back_rd_addr),
		.mem_back_wreg_i(mem_to_id_back_wreg),

		.mem_back_csr_wdata_i(mem_to_id_back_csr_wdata),
		.mem_back_csr_waddr_i(mem_to_id_back_csr_waddr),
		.mem_back_csr_wreg_i(mem_to_id_back_csr_wreg),

		.rd_addr_o(ex_to_ex_mem_rd_addr),
		.csr_waddr_o(ex_to_ex_mem_csr_waddr),
		.wreg_o(ex_to_ex_mem_wreg),
		.csr_wreg_o(ex_to_ex_mem_csr_wreg),
		.wdata_o(ex_to_ex_mem_wdata),
		.csr_wdata_o(ex_to_ex_mem_csr_wdata),
		.opcode_o(ex_to_ex_mem_opcode),
		.funct3_o(ex_to_ex_mem_funct3),

		.ex_back_rd_addr_o(ex_to_id_back_rd_addr),
		.ex_back_wreg_o(ex_to_id_back_wreg),
		.ex_back_wdata_o(ex_to_id_back_wdata),

		.ex_back_csr_waddr_o(ex_to_id_back_csr_waddr),
		.ex_back_csr_wreg_o(ex_to_id_back_csr_wreg),
		.ex_back_csr_wdata_o(ex_to_id_back_csr_wdata),

		.branch_flag_o(ex_branch_flag),
		.pc_new_o(ex_to_ctrl_pc_new)
	);

	EX_MEM ex_mem0(
		.clk(clk),
		.rst(rst),

		.rd_addr_i(ex_to_ex_mem_rd_addr),
		.csr_waddr_i(ex_to_ex_mem_csr_waddr),
		.wreg_i(ex_to_ex_mem_wreg),
		.csr_wreg_i(ex_to_ex_mem_csr_wreg),
		.wdata_i(ex_to_ex_mem_wdata),
		.csr_wdata_i(ex_to_ex_mem_csr_wdata),
		.opcode_i(ex_to_ex_mem_opcode),
		.funct3_i(ex_to_ex_mem_funct3),
		.ctrl_signal_i(ctrl_to_ex_mem_ctrl_signal),

		.rd_addr_o(ex_mem_to_mem_rd_addr),
		.csr_waddr_o(ex_mem_to_mem_csr_waddr),
		.wreg_o(ex_mem_to_mem_wreg),
		.csr_wreg_o(ex_mem_to_mem_csr_wreg),
		.wdata_o(ex_mem_to_mem_wdata),
		.csr_wdata_o(ex_mem_to_mem_csr_wdata),
		.opcode_o(ex_mem_to_mem_opcode),
		.funct3_o(ex_mem_to_mem_funct3)

	);

	MEM mem0(
		.rd_addr_i(ex_mem_to_mem_rd_addr),
		.csr_waddr_i(ex_mem_to_mem_csr_waddr),
		.wreg_i(ex_mem_to_mem_wreg),
		.csr_wreg_i(ex_mem_to_mem_csr_wreg),
		.wdata_i(ex_mem_to_mem_wdata),
		.csr_wdata_i(ex_mem_to_mem_csr_wdata),
		.dcache_data_valid_i(dcache_data_valid_i),
		.dcache_data_i(dcache_data_i),
		.opcode_i(ex_mem_to_mem_opcode),
		.funct3_i(ex_mem_to_mem_funct3),

		.block_flag_o(mem_to_ctrl_block_flag),
		.rd_addr_o(mem_to_mem_wb_rd_addr),
		.csr_waddr_o(mem_to_mem_wb_csr_waddr),
		.wreg_o(mem_to_mem_wb_wreg),
		.csr_wreg_o(mem_to_mem_wb_csr_wreg),
		.wdata_o(mem_to_mem_wb_wdata),
		.csr_wdata_o(mem_to_mem_wb_csr_wdata),
		.mem_back_rd_addr_o(mem_to_id_back_rd_addr),
		.mem_back_wreg_o(mem_to_id_back_wreg),
		.mem_back_wdata_o(mem_to_id_back_wdata),

		.mem_back_csr_waddr_o(mem_to_id_back_csr_waddr),
		.mem_back_csr_wreg_o(mem_to_id_back_csr_wreg),
		.mem_back_csr_wdata_o(mem_to_id_back_csr_wdata)

	);

	MEM_WB mem_wb0(
		.clk(clk),
		.rst(rst),

		.rd_addr_i(mem_to_mem_wb_rd_addr),
		.csr_waddr_i(mem_to_mem_wb_csr_waddr),
		.wreg_i(mem_to_mem_wb_wreg),
		.csr_wreg_i(mem_to_mem_wb_csr_wreg),
		.wdata_i(mem_to_mem_wb_wdata),
		.csr_wdata_i(mem_to_mem_wb_csr_wdata),
		.ctrl_signal_i(ctrl_to_mem_wb_ctrl_signal),
	
		.wdata_o(mem_wb_to_regfile_wdata),
		.csr_wdata_o(mem_wb_to_csr_wdata),
		.wreg_o(mem_wb_to_regfile_we),
		.csr_wreg_o(mem_wb_to_csr_we),
		.rd_addr_o(mem_wb_to_regfile_waddr),
		.csr_waddr_o(mem_wb_to_csr_waddr),
		.mem_wb_back_rd_addr_o(mem_wb_to_id_back_rd_addr),
		.mem_wb_back_wreg_o(mem_wb_to_id_back_wreg),
		.mem_wb_back_wdata_o(mem_wb_to_id_back_wdata),
		
		.mem_wb_back_csr_waddr_o(mem_wb_to_id_back_csr_waddr),
		.mem_wb_back_csr_wreg_o(mem_wb_to_id_back_csr_wreg),
		.mem_wb_back_csr_wdata_o(mem_wb_to_id_back_csr_wdata)
	);

	CTRL ctrl0(
		.clk(clk),
		.rst(rst),

		.dcache_ready_i(dcache_ready_i),
		.icache_data_valid_i(icache_data_valid_i),
/* 		.ex_opcode_i(id_ex_to_ex_opcode),
		.ex_funct3_i(id_ex_to_ex_funct3), */
		.ex_pc_new_i(ex_to_ctrl_pc_new),
		.ex_branch_flag_i(ex_branch_flag),
		.mem_block_flag_i(mem_to_ctrl_block_flag),

		.ctrl_signal_pc_o(ctrl_to_pc_ctrl_signal),
		.ctrl_signal_if_id_o(ctrl_to_if_id_ctrl_signal),
		.ctrl_signal_id_ex_o(ctrl_to_id_ex_ctrl_signal),
		.ctrl_signal_ex_mem_o(ctrl_to_ex_mem_ctrl_signal),
		.ctrl_signal_mem_wb_o(ctrl_to_mem_wb_ctrl_signal),
		.ctrl_to_pc_new_o(ctrl_to_pc_pc_new)
	);


/* The following code only for simulating */

	initial begin
		$dumpfile("logs/vlt_dump.vcd");
		$dumpvars();
	end
endmodule
