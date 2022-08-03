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
	input wire[`ImmBus] 		imm_i,  //立即数 (注意: 由于risc-v指令集中的立即数有两种位宽<12/20>, 根据实际指令的不同进行选择,选择标志位为 imm_sel_o, 执行模块EX应根据 imm_sel 选择是否从低位到高位截取imm_o)
 	input wire 					imm_sel_i,  //立即数位宽选择标志位: 1'b0 => 位宽12  1'b1 => 位宽20 
/* 	input wire[`ShamtBus] 		shamt_i, */
/* 	input wire[`Offset12Bus] 	offset12_i,
	input wire[`Offset20Bus] 	offset20_i, */
/* 	input wire 					offset_sel_i, */
	input wire[`AddrBus] 		pc_i,
/* 	input wire		 			dcache_data_valid_i,
	input wire	[`DataBus]		dcache_data_i, */

	input wire[`RegBus] mem_back_wdata_i,                   //数据前推
	input wire[`RegAddrBus] mem_back_rd_addr_i,             //数据前推
	input wire mem_back_wreg_i,                             //数据前推

	output wire[`RegAddrBus] rd_addr_o,          //目标寄存器 rd 的地址
	output wire wreg_o,                          //标志位: 是否使用目标寄存器 rd
	output wire[`RegBus] wdata_o,                // ALU运算结果/写入rd的数据
/* 	output wire[`OpcodeBus] opcode_o,  */           //操作码, 传输到访存阶段, 确定加载/存储指令类型
/* 	output wire[`FunctBus3] funct3_o,            //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
	output wire[`FunctBus7] funct7_o,            //7位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型 */
	output wire[`RegAddrBus] ex_back_rd_addr_o,
	output wire ex_back_wreg_o,
	output wire[`RegBus] ex_back_wdata_o,
	output wire branch_flag_o,  //分支标志位
	output wire[`AddrBus] pc_new_o/* ,
	output wire[`DRAM_Rdata_Bus] dram_rdata_o,
	output wire	mem_wdata_sel_o */
);
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

	assign wdata_addiw = {rs1_data + { {52{imm_i[11]}}, imm_i[11:0] }}[63:32];
/* 	assign wdata_slliw = rs1_data << shamt_i;
	assign wdata_sraiw = ($signed(rs1_data)) >>> shamt_i;
	assign wdata_srliw = rs1_data >> shamt_i; */



/* 	assign rd_addr = rd_addr_i; */
	//mem级的数据前推
	// assign rs1_data = ({64{((rs1_addr_i == mem_back_rd_addr_i) && (rs1_read_i == `ReadEnable) && (mem_back_wreg_i == `WriteEnable))}} & mem_back_wdata_i) | rs1_data_i; //该版本会导致高阻态传播
	// assign rs2_data = ({64{((rs2_addr_i == mem_back_rd_addr_i) && (rs2_read_i == `ReadEnable) && (mem_back_wreg_i == `WriteEnable))}} & mem_back_wdata_i) | rs2_data_i;
	assign rs1_data = ((rs1_addr_i == mem_back_rd_addr_i) && (mem_back_wreg_i == `WriteEnable) && (rs1_addr_i != `reg_zero)) ? mem_back_wdata_i : rs1_data_i;
	assign rs2_data = ((rs2_addr_i == mem_back_rd_addr_i) && (mem_back_wreg_i == `WriteEnable) && (rs1_addr_i != `reg_zero)) ? mem_back_wdata_i : rs2_data_i;
/* 	assign opcode = opcode_i;
	assign funct3 = funct3_i;
	assign funct7 = funct7_i;
	assign imm = imm_i; */
/* 	assign memory_addr = rs1_data + $signed({{52{offset12_i[11]}},offset12_i}); */

/* 	always @(*) begin  //数据前推
		ex_back_rd_addr_o <= rd_addr_i;
		//ex_back_wreg_o <= wreg_i; //初始版本, 若出问题请改为该版本
		ex_back_wreg_o <= wreg_o;
		ex_back_wdata_o <= wdata_o;
	end */

/* ============================================================ */
	wire [`RegBus] wdata_t;
/* rd_addr_o wreg_o opcode_o funct3_o funct7_o ex_back_rd_addr_o ex_back_wreg_o ex_back_wdata_o */
	assign rd_addr_o = rd_addr_i;
	assign wreg_o = wreg_i;
/* 	assign opcode_o = opcode_i; */
/* 	assign funct3_o = funct3_i;
	assign funct7_o = funct7_i; */
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
	wire [`RegBus] wdata_t_auipc;
	wire [`RegBus] wdata_t_lui;
	wire [`RegBus] wdata_t_sub;

	assign wdata_t_add = rs1_data + rs2_data;
	assign wdata_t_addi = rs1_data + {{52{imm_i[11]}}, imm_i[11:0]};
	assign wdata_t_addiw = {{32{wdata_addiw[31]}}, wdata_addiw[31:0]};
	assign wdata_t_auipc = pc_i + $signed({{32{imm_i[19]}}, imm_i, {12{1'b0}}});
	assign wdata_t_lui = {{32{imm_i[19]}}, imm_i, 12'h0};
	assign wdata_t_sub = rs1_data - rs2_data;

	wire [`RegBus] wdata_opcode_J;
	wire [`RegBus] wdata_opcode_R;
/* 	wire [`RegBus] wdata_opcode_R_imm;
	wire [`RegBus] wdata_opcode_I_word; */
	wire [`RegBus] wdata_opcode_U_auipc;
	wire [`RegBus] wdata_opcode_U_lui;
	wire [`RegBus] wdata_funct3_add_sub_mul;
/* 	wire [`RegBus] wdata_funct7; */
	assign wdata_opcode_J = pc_i + 64'h4;
	assign wdata_opcode_U_auipc = wdata_t_auipc;
	assign wdata_opcode_U_lui = wdata_t_lui;
	MuxKeyWithDefault #(4, 7, 64) mux_t (wdata_t, opcode_i, 64'b0, {
		`Opcode_J_type,				wdata_opcode_J,
		`Opcode_R_type, 			wdata_opcode_R,
/* 		`Opcode_R_type_imm, 		wdata_opcode_R_imm,
		`Opcode_I_type_word, 		wdata_opcode_I_word, */
		`Opcode_U_type_auipc, 		wdata_opcode_U_auipc,
		`Opcode_U_type_lui, 		wdata_opcode_U_lui
	});

	MuxKeyWithDefault #(3, 3, 64) mux_R (wdata_opcode_R, funct3_i, 64'b0, {
		`funct3_add_sub_mul,		wdata_funct3_add_sub_mul,
		`funct3_addi,				wdata_t_addi,
		`funct3_addiw, 				wdata_t_addiw
	});

	MuxKeyWithDefault #(2, 7, 64) mux_funct3_asm (wdata_funct3_add_sub_mul, funct7_i, 64'b0, {
		`funct7_add, 				wdata_t_add,
		`funct7_sub, 				wdata_t_sub
	});

/* branch_flag_o */
/* 	wire branch_flag_wen; */
	wire branch_flag_t;
/* 	assign branch_flag_wen = 1'b1;
	Reg #(1, 1'b0) reg2 (clk, rst, branch_flag_t, branch_flag_o, branch_flag_wen); */
	assign branch_flag_o = branch_flag_t;
	wire branch_flag_t_beq;
	wire branch_flag_t_bge;
	assign branch_flag_t_beq = {1{(rs1_data == rs2_data)}};
	assign branch_flag_t_bge = {1{($signed(rs1_data) >= $signed(rs2_data))}};
	
	assign branch_flag_t = ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_beq)}} & branch_flag_t_beq)
					|	   ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_bge)}} & branch_flag_t_bge)
					|	   ({1{(opcode_i == `Opcode_I_type_jalr)}} & 1'b1)
					|	   ({1{(opcode_i == `Opcode_J_type_jal)}} & 1'b1);

/* pc_new_o */
	wire [`AddrBus] pc_new_jal;
	assign pc_new_o = (imm_sel_i == 1'b1) ? pc_new_jal : `Invalid_pc;
	assign pc_new_jal = pc_i + $signed({{43{imm_i[19]}}, imm_i, 1'b0});
/* ============================================================ */



endmodule
