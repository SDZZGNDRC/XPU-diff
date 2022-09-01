`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module EX(

/* 	input wire					clk, */
/* 	input wire 					rst, */
/* 	input wire 					rs1_read_i,  //标志位: 是否使用源寄存器1的数据
	input wire 					rs2_read_i,  //标志位: 是否使用源寄存器2的数据 */
	input[`RegAddrBus] 			rs1_addr_i,
	input[`RegAddrBus] 			rs2_addr_i,
	input wire[`OpcodeBus] 		opcode_i,  //译码结果: 操作码
	input wire[`FunctBus3] 		funct3_i,  //译码结果: 3位宽操作码附加段
	input wire[`FunctBus7] 		funct7_i,  //译码结果: 7位宽操作码附加段
	input wire[`RegBus] 		rs1_data_i,  //源寄存器1的数据输出
	input wire[`RegBus] 		rs2_data_i,  //源寄存器2的数据输出
	input wire[`RegAddrBus] 	rd_addr_i,  //目标寄存器 rd 的地址
	input wire 					wreg_i,  //标志位: 是否使用目标寄存器 rd
	input wire[`ImmBus] 		imm_i,  //立即数 
/* 	input wire[`ShamtBus] 		shamt_i, */
/* 	input wire[`Offset12Bus] 	offset12_i,
	input wire[`Offset20Bus] 	offset20_i, */
/* 	input wire 					offset_sel_i, */
	input wire[`AddrBus] 		pc_i,
	input wire[`RegBus]			muldiv_data_1_i,
	input wire[`RegBus]			muldiv_data_2_i,

	input wire[`RegBus] mem_back_wdata_i,                   //数据前推
	input wire[`RegAddrBus] mem_back_rd_addr_i,             //数据前推
	input wire mem_back_wreg_i,                             //数据前推

	output wire[`RegBus] muldiv_rs1_data_o,
	output wire[`RegBus] muldiv_rs2_data_o,
	output wire			 muldiv_rs1_sign_o,
	output wire			 muldiv_rs2_sign_o,
	output wire			 muldiv_req_valid_o,
	output wire			 muldiv_mul_en_o,
	output wire[`RegAddrBus] rd_addr_o,          //目标寄存器 rd 的地址
	output wire wreg_o,                          //标志位: 是否使用目标寄存器 rd
	output wire[`RegBus] wdata_o,                // ALU运算结果/写入rd的数据
	output wire[`OpcodeBus] opcode_o,            //操作码, 传输到访存阶段, 确定加载/存储指令类型
	output wire[`FunctBus3] funct3_o,            //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
/* 	output wire[`FunctBus7] funct7_o,            //7位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型 */
	output wire[`OpcodeBus] ex_back_opcode_o, 
	output wire[`RegAddrBus] ex_back_rd_addr_o,
	output wire ex_back_wreg_o,
	output wire[`RegBus] ex_back_wdata_o,
	output wire branch_flag_o,  //分支标志位
	output wire[`AddrBus] ex_to_ex_mem_pc_o,
	output wire[`AddrBus] pc_new_o
);
	wire[`ShamtBus] shamt;
/* 	wire[`RegAddrBus] rd_addr;  //目标寄存器地址 */
	wire[`RegBus] rs1_data;  //源寄存器1数据输入
	wire[`RegBus] rs2_data;  //源寄存器2数据输入
/* 	wire[`AddrBus] memory_addr; */
/* 	reg[`RegBus] wdata_p;  //数据输出 */
/* 	reg[`RegBus] mul_h;  //乘法结果高位
	reg[`RegBus] mul_l;  //乘法结果低位 */

/* 	reg[`Byte] dram_wen;
	reg[`DRAM_Addr_Bus] dram_addr;
	reg[`DRAM_Wdata_Bus] dram_wdata; */
	// wire [`DRAM_Rdata_Bus] dram_rdata;

/* 	wire[`OpcodeBus] opcode;
	wire[`FunctBus3] funct3;
	wire[`FunctBus7] funct7;
	wire[`ImmBus] imm; */


	wire[`HalfRegBus] wdata_addiw;
/* 	wire[`RegBus] wdata_slliw;
	wire[`RegBus] wdata_sraiw;
	wire[`RegBus] wdata_srliw; */

	assign shamt = imm_i[5:0];
	assign wdata_addiw = {rs1_data + { {52{imm_i[11]}}, imm_i[11:0] }}[31:0];
/* 	assign wdata_slliw = rs1_data << shamt_i;
	assign wdata_sraiw = ($signed(rs1_data)) >>> shamt_i;
	assign wdata_srliw = rs1_data >> shamt_i; */



/* 	assign rd_addr = rd_addr_i; */
	//mem级的数据前推
	assign rs1_data = ((rs1_addr_i == mem_back_rd_addr_i) && (mem_back_wreg_i == `WriteEnable) && (rs1_addr_i != `reg_zero)) ? mem_back_wdata_i : rs1_data_i;
	assign rs2_data = ((rs2_addr_i == mem_back_rd_addr_i) && (mem_back_wreg_i == `WriteEnable) && (rs1_addr_i != `reg_zero)) ? mem_back_wdata_i : rs2_data_i;

/* ============================================================ */
	wire [`RegBus] wdata_t;
/* muldiv_rs1_data_o muldiv_rs2_data_o */
	wire [`RegBus] muldiv_rs1_data_t_word;
	wire [`RegBus] muldiv_rs2_data_t_word;
	assign muldiv_rs1_data_t_word = ({64{funct3_i==`funct3_divuw}} & {32'b0, rs1_data[31:0]})
								|	({64{funct3_i==`funct3_divw}} & {{32{rs1_data[31]}}, rs1_data[31:0]})
								|	({64{funct3_i==`funct3_mulw}} & rs1_data);
	assign muldiv_rs2_data_t_word = ({64{funct3_i==`funct3_divuw}} & {32'b0, rs2_data[31:0]})
								|	({64{funct3_i==`funct3_divw}} & {{32{rs2_data[31]}}, rs2_data[31:0]})
								|	({64{funct3_i==`funct3_mulw}} & rs2_data);
	assign muldiv_rs1_data_o = (opcode_i[3]==1'b1) ? muldiv_rs1_data_t_word : rs1_data;
	assign muldiv_rs2_data_o = (opcode_i[3]==1'b1) ? muldiv_rs2_data_t_word : rs2_data;

/* muldiv_rs1_sign_o */
	MuxKeyWithDefault #(6, 3, 1) mux_muldiv_rs1_sign (muldiv_rs1_sign_o, funct3_i, `MULDIV_SIGN, {
		`funct3_div,		`MULDIV_SIGN, 
		`funct3_divu,		`MULDIV_UNSIGN, 
		`funct3_mul,		`MULDIV_SIGN, 
		`funct3_mulh,		`MULDIV_SIGN, 
		`funct3_mulhsu,		`MULDIV_SIGN, 
		`funct3_mulhu,		`MULDIV_UNSIGN
	});

/* muldiv_rs2_sign_o */
	MuxKeyWithDefault #(6, 3, 1) mux_muldiv_rs2_sign (muldiv_rs2_sign_o, funct3_i, `MULDIV_SIGN, {
		`funct3_div,		`MULDIV_SIGN, 
		`funct3_divu,		`MULDIV_UNSIGN, 
		`funct3_mul,		`MULDIV_SIGN, 
		`funct3_mulh,		`MULDIV_SIGN, 
		`funct3_mulhsu,		`MULDIV_UNSIGN, 
		`funct3_mulhu,		`MULDIV_UNSIGN
	});

/* muldiv_req_valid_o */
	assign muldiv_req_valid_o = ((opcode_i==`Opcode_R_type || opcode_i==`Opcode_R_type_word) && funct7_i==`funct7_MULDIV) ? 1'b1 : 1'b0;

/* muldiv_mul_en_o */
	assign muldiv_mul_en_o = ~funct3_i[2];

/* rd_addr_o wreg_o opcode_o funct3_o funct7_o ex_back_opcode_o ex_back_rd_addr_o ex_back_wreg_o ex_back_wdata_o */
	assign rd_addr_o = rd_addr_i;
	assign wreg_o = wreg_i;
	assign ex_back_opcode_o = opcode_i;
	assign ex_back_rd_addr_o = rd_addr_i;
	assign ex_back_wreg_o = wreg_i;
	assign ex_back_wdata_o = wdata_t;


/* wdata_o */
/* 	wire wdata_wen;
	assign wdata_wen = 1'b1;
	Reg #(64, 64'b0) reg1 (clk, rst, wdata_t, wdata_o, wdata_wen); */
	assign wdata_o = wdata_t;

	wire [`RegBus] wdata_t_add;
	wire [`RegBus] wdata_t_addi;
	wire [`RegBus] wdata_t_addiw;
	wire [`RegBus] wdata_t_addw;
	wire [`RegBus] wdata_t_and;
	wire [`RegBus] wdata_t_andi;
	wire [`RegBus] wdata_t_auipc;
	wire [`RegBus] wdata_t_div;
	wire [`RegBus] wdata_t_divu;
	wire [`RegBus] wdata_t_divuw;
	wire [`RegBus] wdata_t_divw;
	wire [`RegBus] wdata_t_jalr;
	wire [`RegBus] wdata_t_lui;
	wire [`RegBus] wdata_t_mul;
	wire [`RegBus] wdata_t_mulh;
	wire [`RegBus] wdata_t_mulhu;
	wire [`RegBus] wdata_t_mulw;
	wire [`RegBus] wdata_t_or;
	wire [`RegBus] wdata_t_rem;
	wire [`RegBus] wdata_t_slli;
	wire [`RegBus] wdata_t_slliw;
	wire [`RegBus] wdata_t_sra;
	wire [`RegBus] wdata_t_srai;
	wire [`RegBus] wdata_t_srli;
	wire [`RegBus] wdata_t_sub;
	wire [`RegBus] wdata_t_xor;

	assign wdata_t_add = rs1_data + rs2_data;
	assign wdata_t_addi = rs1_data + {{52{imm_i[11]}}, imm_i[11:0]};
	assign wdata_t_addiw = {{32{wdata_addiw[31]}}, wdata_addiw[31:0]};
	assign wdata_t_addw = {{32{wdata_t_add[31]}}, wdata_t_add[31:0]};
	assign wdata_t_and = rs1_data & rs2_data;
	assign wdata_t_andi = rs1_data & {{52{imm_i[11]}}, imm_i[11:0]};
	assign wdata_t_auipc = pc_i + $signed({{32{imm_i[19]}}, imm_i, {12{1'b0}}});
	assign wdata_t_div = muldiv_data_1_i;
	assign wdata_t_divu = muldiv_data_1_i;
	assign wdata_t_divuw = {{32{muldiv_data_1_i[31]}}, muldiv_data_1_i[31:0]};
	assign wdata_t_divw = {{32{muldiv_data_1_i[31]}}, muldiv_data_1_i[31:0]};
	assign wdata_t_jalr = pc_i + 64'd4;
	assign wdata_t_lui = {{32{imm_i[19]}}, imm_i, 12'h0};
	assign wdata_t_mul = muldiv_data_1_i;
	assign wdata_t_mulh = muldiv_data_2_i;
	assign wdata_t_mulhu = muldiv_data_2_i;
	assign wdata_t_mulw = {{32{muldiv_data_1_i[31]}}, muldiv_data_1_i[31:0]};
	assign wdata_t_or = rs1_data | rs2_data;
	assign wdata_t_rem = muldiv_data_2_i;
	assign wdata_t_slli = rs1_data << shamt;
	assign wdata_t_slliw = {{32{wdata_t_slli[31]}}, wdata_t_slli[31:0]};
	assign wdata_t_sra = $signed(rs1_data) >>> rs2_data[5:0];
	assign wdata_t_srai = $signed(rs1_data) >>> shamt;
	assign wdata_t_srli = rs1_data >> shamt;
	assign wdata_t_sub = rs1_data - rs2_data;
	assign wdata_t_xor = rs1_data ^ rs2_data;

	wire [`RegBus] wdata_opcode_I_imm;
	wire [`RegBus] wdata_opcode_J;
	wire [`RegBus] wdata_opcode_R;
	wire [`RegBus] wdata_opcode_R_word;
/* 	wire [`RegBus] wdata_opcode_R_imm; */
	wire [`RegBus] wdata_opcode_I_word;
	wire [`RegBus] wdata_opcode_U_auipc;
	wire [`RegBus] wdata_opcode_U_lui;
	wire [`RegBus] wdata_funct3_add_sub_mul;
	wire [`RegBus] wdata_funct3_addw_subw_mulw;
	wire [`RegBus] wdata_funct3_divu_sra_srl;
	wire [`RegBus] wdata_funct3_divuw_sraw_srlw;
	wire [`RegBus] wdata_funct3_or_rem;
	wire [`RegBus] wdata_funct3_sll_mulh;
	wire [`RegBus] wdata_funct3_slt_mulhsu;
	wire [`RegBus] wdata_funct3_sltu_mulhu;
	wire [`RegBus] wdata_funct3_srai_srli;
	wire [`RegBus] wdata_funct3_xor_div;
/* 	wire [`RegBus] wdata_funct7; */
	assign wdata_opcode_J = pc_i + 64'h4;
	assign wdata_opcode_U_auipc = wdata_t_auipc;
	assign wdata_opcode_U_lui = wdata_t_lui;
	MuxKeyWithDefault #(8, 7, 64) mux_t (wdata_t, opcode_i, 64'b0, {
		`Opcode_I_type_imm,			wdata_opcode_I_imm,
		`Opcode_I_type_word,		wdata_opcode_I_word,
		`Opcode_I_type_jalr,		wdata_t_jalr,
		`Opcode_J_type,				wdata_opcode_J,
		`Opcode_R_type, 			wdata_opcode_R,
		`Opcode_R_type_word, 		wdata_opcode_R_word,
		`Opcode_U_type_auipc, 		wdata_opcode_U_auipc,
		`Opcode_U_type_lui, 		wdata_opcode_U_lui
	});

	MuxKeyWithDefault #(4, 3, 64) mux_I_imm (wdata_opcode_I_imm, funct3_i, 64'b0, {
		`funct3_addi,				wdata_t_addi,
		`funct3_andi,				wdata_t_andi, 
		`funct3_slli,				wdata_t_slli, 
		`funct3_srai_srli,			wdata_funct3_srai_srli
	});

	MuxKeyWithDefault #(2, 3, 64) mux_I_word (wdata_opcode_I_word, funct3_i, 64'b0, {
		`funct3_addi,				wdata_t_addiw, 
		`funct3_slliw,				wdata_t_slliw
	});

	MuxKeyWithDefault #(8, 3, 64) mux_R (wdata_opcode_R, funct3_i, 64'b0, {
		`funct3_add_sub_mul,		wdata_funct3_add_sub_mul,
		`funct3_and, 				wdata_t_and, 
		`funct3_divu_sra_srl,		wdata_funct3_divu_sra_srl,
		`funct3_or_rem,				wdata_funct3_or_rem, 
		`funct3_sll_mulh,			wdata_funct3_sll_mulh,
		`funct3_slt_mulhsu,			wdata_funct3_slt_mulhsu,
		`funct3_sltu_mulhu,			wdata_funct3_sltu_mulhu, 
		`funct3_xor_div,			wdata_funct3_xor_div
	});

	MuxKeyWithDefault #(3, 3, 64) mux_R_word (wdata_opcode_R_word, funct3_i, 64'd0, {
		`funct3_addw_subw,			wdata_funct3_addw_subw_mulw, 
		`funct3_divuw_sraw_srlw,	wdata_funct3_divuw_sraw_srlw, 
		`funct3_divw,				wdata_t_divw
	});

	MuxKeyWithDefault #(3, 7, 64) mux_funct3_add_sub_mul (wdata_funct3_add_sub_mul, funct7_i, 64'b0, {
		`funct7_add, 				wdata_t_add,
		`funct7_mul,				wdata_t_mul,
		`funct7_sub, 				wdata_t_sub
	});

	MuxKeyWithDefault #(2, 7, 64) mux_funct3_divu_sra_srl (wdata_funct3_divu_sra_srl, funct7_i, 64'd0, {
		`funct7_divu, 				wdata_t_divu, 
		`funct7_sra, 				wdata_t_sra
	});

	MuxKeyWithDefault #(2, 7, 64) mux_funct3_addw_subw_mulw (wdata_funct3_addw_subw_mulw, funct7_i, 64'd0, {
		`funct7_addw, 				wdata_t_addw, 
		`funct7_mulw,				wdata_t_mulw
	});

	MuxKeyWithDefault #(1, 7, 64) mux_funct3_divuw_sraw_srlw (wdata_funct3_divuw_sraw_srlw, funct7_i, 64'd0, {
		`funct7_divuw,				wdata_t_divuw
	});

	MuxKeyWithDefault #(2, 7, 64) mux_funct3_or_rem (wdata_funct3_or_rem, funct7_i, 64'b0, {
		`funct7_or, 				wdata_t_or, 
		`funct7_rem,				wdata_t_rem
	});

	MuxKeyWithDefault #(1, 7, 64) mux_funct3_sll_mulh (wdata_funct3_sll_mulh, funct7_i, 64'b0, {
		`funct7_mulh,				wdata_t_mulh
	});

	MuxKeyWithDefault #(1, 7, 64) mux_funct3_slt_mulhsu (wdata_funct3_slt_mulhsu, funct7_i, 64'b0, {
		`funct7_mulhsu,				wdata_t_mulh
	});

	MuxKeyWithDefault #(1, 7, 64) mux_funct3_sltu_mulhu (wdata_funct3_sltu_mulhu, funct7_i, 64'b0, {
		`funct7_mulhu,				wdata_t_mulhu
	});

	MuxKeyWithDefault #(2, 6, 64) mux_funct3_srai_srli (wdata_funct3_srai_srli, funct7_i[6:1], 64'd0, {
		`funct6_srai,				wdata_t_srai, 
		`funct6_srli,				wdata_t_srli
	});

	MuxKeyWithDefault #(2, 7, 64) mux_funct3_xor_div (wdata_funct3_xor_div, funct7_i, 64'b0, {
		`funct7_div, 				wdata_t_div, 
		`funct7_xor,				wdata_t_xor
	});



/* opcode_o */
	assign opcode_o = opcode_i;

/* funct3_o */
	assign funct3_o = funct3_i;

/* branch_flag_o */
/* 	wire branch_flag_wen; */
	wire branch_flag_t;
/* 	assign branch_flag_wen = 1'b1;
	Reg #(1, 1'b0) reg2 (clk, rst, branch_flag_t, branch_flag_o, branch_flag_wen); */
	assign branch_flag_o = branch_flag_t;
	wire branch_flag_t_beq;
	wire branch_flag_t_bge;
	wire branch_flag_t_bgeu;
	wire branch_flag_t_blt;
	wire branch_flag_t_bltu;
	wire branch_flag_t_bne;
	assign branch_flag_t_beq = {1{(rs1_data == rs2_data)}};
	assign branch_flag_t_bge = {1{($signed(rs1_data) >= $signed(rs2_data))}};
	assign branch_flag_t_bgeu = {1{($unsigned(rs1_data) >= $unsigned(rs2_data))}};
	assign branch_flag_t_blt = {1{($signed(rs1_data) < $signed(rs2_data))}};
	assign branch_flag_t_bltu = {1{($unsigned(rs1_data) < $unsigned(rs2_data))}};
	assign branch_flag_t_bne = ~branch_flag_t_beq;

	assign branch_flag_t = ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_beq)}} & branch_flag_t_beq)
					|	   ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_bge)}} & branch_flag_t_bge)
					|	   ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_bgeu)}} & branch_flag_t_bgeu)
					|	   ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_blt)}} & branch_flag_t_blt)
					|	   ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_bltu)}} & branch_flag_t_bltu)
					|	   ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_bne)}} & branch_flag_t_bne)
					|	   ({1{(opcode_i == `Opcode_I_type_jalr)}} & 1'b1) 
					|	   ({1{(opcode_i == `Opcode_J_type_jal)}} & 1'b1);

/* ex_to_ex_mem_pc_o */
	assign ex_to_ex_mem_pc_o = pc_i;

/* pc_new_o */
	wire [`AddrBus] pc_new_bne;
	wire [`AddrBus] pc_new_jal;
	wire [`AddrBus] pc_new_jalr;
	MuxKeyWithDefault #(3, 7, 64) mux_pc_new (pc_new_o, opcode_i, `Invalid_pc, {
		`Opcode_B_type, pc_new_bne, 
		`Opcode_J_type_jal, pc_new_jal, 
		`Opcode_I_type_jalr, pc_new_jalr
	});
	assign pc_new_bne = pc_i + $signed({{51{imm_i[11]}}, imm_i[11:0], 1'b0});
	assign pc_new_jal = pc_i + $signed({{43{imm_i[19]}}, imm_i, 1'b0});
	assign pc_new_jalr = {{rs1_data + $signed({{52{imm_i[11]}}, imm_i[11:0]})}[63:1], 1'b0};
/* ============================================================ */



endmodule
