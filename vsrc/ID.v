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
	input wire[`RegBus] ex_back_wdata_i,                    //数据前推
	input wire[`RegAddrBus] ex_back_rd_addr_i,              //数据前推
	input wire ex_back_wreg_i,                              //数据前推
	input wire[`RegBus] mem_back_wdata_i,                   //数据前推
	input wire[`RegAddrBus] mem_back_rd_addr_i,             //数据前推
	input wire mem_back_wreg_i,                             //数据前推
	input wire[`RegBus] mem_wb_back_wdata_i,                //数据前推
	input wire[`RegAddrBus] mem_wb_back_rd_addr_i,          //数据前推
	input wire mem_wb_back_wreg_i,                          //数据前推

	input wire[`RegBus] ex_back_csr_wdata_i,                    //CSR数据前推
	input wire[`CSRAddrBus] ex_back_csr_waddr_i,                //CSR数据前推
	input wire ex_back_csr_wreg_i,                              //CSR数据前推
	input wire[`RegBus] mem_back_csr_wdata_i,                   //CSR数据前推
	input wire[`CSRAddrBus] mem_back_csr_waddr_i,               //CSR数据前推
	input wire mem_back_csr_wreg_i,                             //CSR数据前推
	input wire[`RegBus] mem_wb_back_csr_wdata_i,                //CSR数据前推
	input wire[`CSRAddrBus] mem_wb_back_csr_waddr_i,            //CSR数据前推
	input wire mem_wb_back_csr_wreg_i,                          //CSR数据前推

	input wire[`AddrBus] pc_i,

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
	output wire[`RegBus] csr_data_o,
	output wire[`RegAddrBus] rd_addr_o,             //目标寄存器 rd 的地址
	output wire[`CSRAddrBus] csr_waddr_o,
	output wire wreg_o,                             //标志位: 是否使用目标寄存器 rd
	output wire csr_wreg_o,
	output wire[`ImmBus] imm_o,                     //立即数 (注意: 由于risc-v指令集中的立即数有两种位宽<12/20>, 根据实际指令的不同进行选择,选择标志位为 imm_sel_o, 执行模块EX应根据 imm_sel 选择是否从低位到高位截取imm_o)
 	output wire imm_sel_o,                          //立即数位宽选择标志位: 1'b0 => 位宽12  1'b1 => 位宽20 */
/* 	output wire[`ShamtBus] shamt_o, */
/* 	output wire[`Offset12Bus] offset12_o,
	output wire[`Offset20Bus] offset20_o,
	output wire offset_sel_o, */
	output wire[`AddrBus] pc_o

);
/* rs1_addr_o rs2_addr_o opcode_o funct3_o funct7_o */
	assign rs1_addr_o = inst_i[19:15];
	assign rs2_addr_o = inst_i[24:20];
	assign opcode_o = inst_i[6:0];
	assign funct3_o = inst_i[14:12];
	assign funct7_o = inst_i[31:25];

/* rs1_data_o */
	assign rs1_data_o = (rs1_addr_o == `reg_zero) ? `Doubel_Zero_Word : 
						(rs1_addr_o == ex_back_rd_addr_i && ex_back_wreg_i == `WriteEnable) ? ex_back_wdata_i : 
						(rs1_addr_o == mem_back_rd_addr_i && mem_back_wreg_i == `WriteEnable) ? mem_back_wdata_i : 
						(rs1_addr_o == mem_wb_back_rd_addr_i && mem_wb_back_wreg_i == `WriteEnable) ? mem_wb_back_wdata_i : 
						(rs1_data_i);

/* rs2_data_o */
	assign rs2_data_o = (rs2_addr_o == `reg_zero) ? `Doubel_Zero_Word : 
						(rs2_addr_o == ex_back_rd_addr_i && ex_back_wreg_i == `WriteEnable) ? ex_back_wdata_i : 
						(rs2_addr_o == mem_back_rd_addr_i && mem_back_wreg_i == `WriteEnable) ? mem_back_wdata_i : 
						(rs2_addr_o == mem_wb_back_rd_addr_i && mem_wb_back_wreg_i == `WriteEnable) ? mem_wb_back_wdata_i : 
						(rs2_data_i);

/* csr_data_o */
	assign csr_data_o = (csr_raddr_o == ex_back_csr_waddr_i && ex_back_csr_wreg_i == `WriteEnable) ? ex_back_csr_wdata_i : 
						 (csr_raddr_o == mem_back_csr_waddr_i && mem_back_csr_wreg_i == `WriteEnable) ? mem_back_csr_wdata_i : 
						 (csr_raddr_o == mem_wb_back_csr_waddr_i && mem_wb_back_csr_wreg_i == `WriteEnable) ? mem_wb_back_csr_wdata_i : 
						 (csr_data_i);

/* rd_addr_o */
	assign rd_addr_o = inst_i[11:7];

/* csr_raddr_o */
	assign csr_raddr_o = inst_i[31:20];

/* csr_waddr_o */
	assign csr_waddr_o = inst_i[31:20];

/* wreg_o */
	MuxKeyWithDefault #(2, 7, 1) mux1 (wreg_o, opcode_o, 1'b1, {
		`Opcode_B_type, 1'b0,
		`Opcode_S_type, 1'b1
	});

/* csr_wreg_o */
	assign csr_wreg_o = {1{(opcode_o == `Opcode_I_type_prv)}};

/* imm_o */
	MuxKeyWithDefault #(4, 7, 20) mux2 (imm_o, opcode_o, {8'b0000_0000, inst_i[31:20]}, {
		`Opcode_B_type, {8'h0, inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]},
		`Opcode_J_type_jal, {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]},
		`Opcode_U_type_auipc, inst_i[31:12],
		`Opcode_U_type_lui, inst_i[31:12]
	});

/* csr_ */

/* imm_sel_o */
	assign imm_sel_o = ({1{(opcode_o == `Opcode_J_type)}} & 1'b1)
					|  ({1{(opcode_o == `Opcode_U_type_auipc) & 1'b1}})
					|  ({1{(opcode_o == `Opcode_U_type_lui) & 1'b1}})
					|  (1'b0);

/* offset12_o */
/* 	MuxKeyWithDefault #(2, 7, 12) mux3 (offset12_o, opcode_o, inst_i[31:20], {
		`Opcode_B_type,		{inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]},
		`Opcode_S_type, 	{inst_i[31:25], inst_i[11:7]}
	}); */

/* offset20_o */
/* 	MuxKeyWithDefault #(2, 7, 20) mux4 (offset20_o, opcode_o, inst_i[31:12], {
		`Opcode_J_type_jal, {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]},
		`Opcode_B_type,		{inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]}
	}); */

/* offset_sel_o */
	

/* pc_o */
	assign pc_o = pc_i;

endmodule
