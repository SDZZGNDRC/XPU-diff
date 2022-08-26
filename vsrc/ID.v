`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module ID
(
/* 	input wire rst,  //复位信号 */
	input wire[`InstBus] inst_i,  //来自 ram 的指令

	//Data of ram
	input wire[`RegBus] rs1_data_i,  //源寄存器1的数据输入
	input wire[`RegBus] rs2_data_i,  //源寄存器2的数据输入
	input wire[`RegBus] csr_data_i,  //CSR Regfile
	input wire[`OpcodeBus] ex_back_opcode_i, 
	input wire[`RegBus] ex_back_wdata_i,                    //数据前推
	input wire[`RegAddrBus] ex_back_rd_addr_i,              //数据前推
	input wire ex_back_wreg_i,                              //数据前推
	input wire[`RegBus] mem_back_wdata_i,                   //数据前推
	input wire[`RegAddrBus] mem_back_rd_addr_i,             //数据前推
	input wire mem_back_wreg_i,                             //数据前推
	input wire[`RegBus] mem_wb_back_wdata_i,                //数据前推
	input wire[`RegAddrBus] mem_wb_back_rd_addr_i,          //数据前推
	input wire mem_wb_back_wreg_i,                          //数据前推


	input wire[`AddrBus] pc_i,

	output wire dcache_req_valid_o,
	output wire dcache_wen_o,
	output wire[`RegBus] dcache_wdata_o,
	output wire[`AddrBus] dcache_addr_o,
	output wire[1:0]	  dcache_wlen_o,
	output wire[`RegAddrBus] rs1_addr_o,  //源寄存器 rs1 的地址: 输入到 regfile 模块,用于读取rs1
	output wire[`RegAddrBus] rs2_addr_o,  //源寄存器 rs2 的地址: 输入到 regfile 模块,用于读取rs2
	output wire[`CSRAddrBus] csr_raddr_o,
	//译码的输出结果
/* 	output wire rs1_read_o,                         //标志位: 是否使用源寄存器1的数据
	output wire rs2_read_o,                         //标志位: 是否使用源寄存器2的数据 */
	output wire[`OpcodeBus] opcode_o,               //译码结果: 操作码
	output wire[`FunctBus3] funct3_o,               //译码结果: 3位宽操作码附加段
	output wire[`FunctBus7] funct7_o,               //译码结果: 7位宽操作码附加段
	output wire[`RegBus] rs1_data_o,                //源寄存器1的数据输出
	output wire[`RegBus] rs2_data_o,                //源寄存器2的数据输出
	output wire[`RegAddrBus] rd_addr_o,             //目标寄存器 rd 的地址
	output wire[`CSRAddrBus] csr_waddr_o,
	output wire[`RegBus] csr_wdata_o,
	output wire we_mtval_o, 
	output wire[`RegBus] wdata_mtval_o, 
	output wire we_mepc_o,
	output wire[`RegBus] wdata_mepc_o,
	output wire we_mcause_o,
	output wire[`RegBus] wdata_mcause_o,
	output wire exception_mie_req_o, 
	output wire wreg_o,                             //标志位: 是否使用目标寄存器 rd
	output wire csr_wreg_o,
	output wire[`ImmBus] imm_o,                     //立即数 (注意: 由于risc-v指令集中的立即数有两种位宽<12/20>, 根据实际指令的不同进行选择,选择标志位为 imm_sel_o, 执行模块EX应根据 imm_sel 选择是否从低位到高位截取imm_o)
 	output wire imm_sel_o,                          //立即数位宽选择标志位: 1'b0 => 位宽12  1'b1 => 位宽20 */
	output wire[`AddrBus] pc_o

);

/* id_conflict_flag */
	wire id_conflict_flag;
	assign id_conflict_flag = (ex_back_opcode_i==`Opcode_I_type_load&&
							  dcache_req_valid_ot==1'b1&&
							  (ex_back_rd_addr_i==rs1_addr_o||ex_back_rd_addr_i==rs2_addr_o))
							  ? 1'b1 : 1'b0;

/* id_exception_DCA_MISALIGN_flag */
	wire id_exception_DCA_MISALIGN_flag;
	wire id_exception_DCA_MISALIGN_t_2;
	wire id_exception_DCA_MISALIGN_t_4;
	wire id_exception_DCA_MISALIGN_t_8;
	assign id_exception_DCA_MISALIGN_t_2 = (dcache_addr_o[0]==1'b0&&dcache_wlen_o==2'd1) ? 1'b0 : 1'b1;
	assign id_exception_DCA_MISALIGN_t_4 = (dcache_addr_o[1:0]==2'b0&&dcache_wlen_o==2'd2) ? 1'b0 : 1'b1;
	assign id_exception_DCA_MISALIGN_t_8 = (dcache_addr_o[2:0]==3'b0&&dcache_wlen_o==2'd3) ? 1'b0 : 1'b1;
	assign id_exception_DCA_MISALIGN_flag = (id_exception_DCA_MISALIGN_t_2
										|   id_exception_DCA_MISALIGN_t_4
										|   id_exception_DCA_MISALIGN_t_8)&dcache_req_valid_ot;

/* id_change_flag */
	wire id_change_flag;
	assign id_change_flag = id_conflict_flag 
						|   id_exception_DCA_MISALIGN_flag;

/* dcache_req_valid_o */
	wire dcache_req_valid_ot;
	assign dcache_req_valid_o = (id_change_flag==1'b1) ? 1'b0 : dcache_req_valid_ot;
	MuxKeyWithDefault #(2, 7, 1) mux_dcache_req_valid (dcache_req_valid_ot, opcode_ot, 1'h0, {
		`Opcode_S_type, 1'b1,
		`Opcode_I_type_load, 1'b1
	});

/* rs1_addr_o rs2_addr_o opcode_o funct3_o funct7_o */
	wire[`OpcodeBus] opcode_ot;
	wire[`funct3Bus] funct3_ot;
	assign rs1_addr_o = inst_i[19:15];
	assign rs2_addr_o = inst_i[24:20];
	assign opcode_ot = inst_i[6:0];
	assign funct3_ot = inst_i[14:12];
	assign funct7_o = inst_i[31:25];
	assign opcode_o = (id_change_flag==1'b1) ? `Opcode_I_type_jalr : opcode_ot;
	assign funct3_o = (id_change_flag==1'b1) ? `funct3_jalr : funct3_ot;

/* dcache_wen_o */
	assign dcache_wen_o = (opcode_o == `Opcode_S_type) ? 1'b1 : 1'b0;

/* dcache_wdata_o */
	wire[`RegBus] dcache_wdata_t_sb;
	wire[`RegBus] dcache_wdata_t_sd;
	wire[`RegBus] dcache_wdata_t_sh;
	wire[`RegBus] dcache_wdata_t_sw;

	assign dcache_wdata_t_sb = {56'h0, rs2_data_o[7:0]};
	assign dcache_wdata_t_sd = rs2_data_o;
	assign dcache_wdata_t_sh = {48'h0, rs2_data_o[15:0]};
	assign dcache_wdata_t_sw = {32'h0, rs2_data_o[31:0]};

	MuxKeyWithDefault #(4, 3, 64) mux_dcache_wdata (dcache_wdata_o, funct3_o, `Doubel_Zero_Word, {
		`funct3_sb, dcache_wdata_t_sb,
		`funct3_sd, dcache_wdata_t_sd,
		`funct3_sh, dcache_wdata_t_sh,
		`funct3_sw, dcache_wdata_t_sw
	});

/* dcache_addr_o */
	wire[`Offset12Bus] dcache_addr_offset_load;
	wire[`Offset12Bus] dcache_addr_offset_store;
	wire[`AddrBus] dcache_addr_t_load; 
	wire[`AddrBus] dcache_addr_t_store;

	assign dcache_addr_offset_load = inst_i[31:20];
	assign dcache_addr_offset_store = {inst_i[31:25], inst_i[11:7]};
	assign dcache_addr_t_load = rs1_data_ot + {{52{dcache_addr_offset_load[11]}}, dcache_addr_offset_load[11:0]};
	assign dcache_addr_t_store = rs1_data_ot + {{52{dcache_addr_offset_store[11]}}, dcache_addr_offset_store};

	assign dcache_addr_o = (opcode_ot == `Opcode_S_type) ? dcache_addr_t_store : dcache_addr_t_load;

/* dcache_wlen_o */
	wire[1:0] dcache_wlen_t_load;
	wire[1:0] dcache_wlen_t_store;
	
	MuxKeyWithDefault #(7, 3, 2) mux_dcache_wlen_t_load (dcache_wlen_t_load, funct3_ot, 2'h0, {
		`funct3_lb, 2'h0,
		`funct3_lbu, 2'h0,
		`funct3_ld, 2'h3,
		`funct3_lh, 2'h1,
		`funct3_lhu, 2'h1,
		`funct3_lw, 2'h2,
		`funct3_lwu, 2'h2
	});

	MuxKeyWithDefault #(4, 3, 2) mux_dcache_wlen_t_store (dcache_wlen_t_store, funct3_ot, 2'h0, {
		`funct3_sb, 2'h0,
		`funct3_sh, 2'h1,
		`funct3_sw, 2'h2,
		`funct3_sd, 2'h3
	});

	assign dcache_wlen_o = (opcode_ot == `Opcode_S_type) ? dcache_wlen_t_store : dcache_wlen_t_load;

/* rs1_data_o */
	wire[`RegBus] rs1_data_ot;
	assign rs1_data_ot = (rs1_addr_o == `reg_zero) ? `Doubel_Zero_Word : 
						(rs1_addr_o == ex_back_rd_addr_i && ex_back_wreg_i == `WriteEnable) ? ex_back_wdata_i : 
						(rs1_addr_o == mem_back_rd_addr_i && mem_back_wreg_i == `WriteEnable) ? mem_back_wdata_i : 
						(rs1_addr_o == mem_wb_back_rd_addr_i && mem_wb_back_wreg_i == `WriteEnable) ? mem_wb_back_wdata_i : 
						(rs1_data_i);
	assign rs1_data_o = (id_exception_DCA_MISALIGN_flag==1'b1) ? csr_data_i : 
						(id_conflict_flag==1'b1) ? pc_i : rs1_data_ot;

/* rs2_data_o */
	assign rs2_data_o = (rs2_addr_o == `reg_zero) ? `Doubel_Zero_Word : 
						(rs2_addr_o == ex_back_rd_addr_i && ex_back_wreg_i == `WriteEnable) ? ex_back_wdata_i : 
						(rs2_addr_o == mem_back_rd_addr_i && mem_back_wreg_i == `WriteEnable) ? mem_back_wdata_i : 
						(rs2_addr_o == mem_wb_back_rd_addr_i && mem_wb_back_wreg_i == `WriteEnable) ? mem_wb_back_wdata_i : 
						(rs2_data_i);


/* rd_addr_o */
	wire[`RegAddrBus] rd_addr_ot;
	assign rd_addr_ot = inst_i[11:7];
	assign rd_addr_o = (id_change_flag==1'b1) ? `reg_zero : rd_addr_ot;

/* csr_raddr_o */
	wire[`CSRAddrBus] csr_raddr_ot;
	assign csr_raddr_ot = inst_i[31:20];
	assign csr_raddr_o = (id_exception_DCA_MISALIGN_flag==1'b1)
						 ? `CSR_Addr_mtvec : csr_raddr_ot;

/* csr_waddr_o */
	assign csr_waddr_o = inst_i[31:20];

/* csr_wdata_o */
	wire[`RegBus] csr_wdata_t;
	assign csr_wdata_o = csr_wdata_t;
	wire[`RegAddrBus] zimm;
	wire[`RegBus] csr_wdata_t_csrrc;
	wire[`RegBus] csr_wdata_t_csrrci;
	wire[`RegBus] csr_wdata_t_csrrs;
	wire[`RegBus] csr_wdata_t_csrrsi;
	wire[`RegBus] csr_wdata_t_csrrw;
	wire[`RegBus] csr_wdata_t_csrrwi;
	assign zimm = inst_i[19:15];
	assign csr_wdata_t_csrrc = csr_data_i & (~rs1_data_i);
	assign csr_wdata_t_csrrci = csr_data_i & (~{59'h0, zimm});
	assign csr_wdata_t_csrrs = csr_data_i | rs1_data_i;
	assign csr_wdata_t_csrrsi = csr_data_i | {59'h0, zimm};
	assign csr_wdata_t_csrrw = rs1_data_i;
	assign csr_wdata_t_csrrwi = {59'h0, zimm};

	MuxKeyWithDefault #(6, 3, 64) mux_csr_wdata (csr_wdata_t, funct3_ot, `Doubel_Zero_Word, {
		`funct3_csrrc, csr_wdata_t_csrrc,
		`funct3_csrrci, csr_wdata_t_csrrci,
		`funct3_csrrs, csr_wdata_t_csrrs,
		`funct3_csrrsi, csr_wdata_t_csrrsi,
		`funct3_csrrw, csr_wdata_t_csrrw,
		`funct3_csrrwi, csr_wdata_t_csrrwi
	});

/* we_mtval_o */
	assign we_mtval_o = (id_exception_DCA_MISALIGN_flag==1'b1) ? 1'b1 : 1'b0;

/* wdata_mtval_o */
	assign wdata_mtval_o = dcache_addr_o;

/* we_mepc_o */
	assign we_mepc_o = (id_exception_DCA_MISALIGN_flag==1'b1) ? 1'b1 : 1'b0;

/* wdata_mepc_o */
	assign wdata_mepc_o = (id_exception_DCA_MISALIGN_flag==1'b1) ? pc_i : 64'h0;

/* we_mcause_o */
	assign we_mcause_o = (id_exception_DCA_MISALIGN_flag==1'b1) ? 1'b1 : 1'b0;

/* wdata_mcause_o */
	assign wdata_mcause_o = (dcache_wen_o==1'b1) ? `MCAUSE_DCLA_MISSALIGN : `MCAUSE_DCSA_MISSALIGN;

/* exception_mie_req_o */
	assign exception_mie_req_o = (id_exception_DCA_MISALIGN_flag==1'b1) ? 1'b1 : 1'b0;

/* wreg_o */
	MuxKeyWithDefault #(2, 7, 1) mux1 (wreg_o, opcode_o, 1'b1, {
		`Opcode_B_type, 1'b0,
		`Opcode_S_type, 1'b0
	});

/* csr_wreg_o */
	assign csr_wreg_o = {1{(opcode_o == `Opcode_I_type_prv)}};

/* imm_o */
	wire[`ImmBus] imm_t_jalr;
	assign imm_t_jalr = (id_change_flag==1'b1) ? 20'b0 : {8'b0000_0000, inst_i[31:20]};
	MuxKeyWithDefault #(5, 7, 20) mux2 (imm_o, opcode_o, {8'b0000_0000, inst_i[31:20]}, {
		`Opcode_B_type, {8'h0, inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]},
		`Opcode_J_type_jal, {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]},
		`Opcode_I_type_jalr, imm_t_jalr, 
		`Opcode_U_type_auipc, inst_i[31:12],
		`Opcode_U_type_lui, inst_i[31:12]
	});


/* imm_sel_o */
	assign imm_sel_o = ({1{(opcode_o == `Opcode_J_type)}} & 1'b1)
					|  ({1{(opcode_o == `Opcode_U_type_auipc) & 1'b1}})
					|  ({1{(opcode_o == `Opcode_U_type_lui) & 1'b1}})
					|  (1'b0);

/* pc_o */
	assign pc_o = pc_i;

endmodule
