`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module ID_EX
(
	input wire clk,
	input wire rst,

	input[`RegAddrBus] rs1_addr_i,
	input[`RegAddrBus] rs2_addr_i,
	input[`OpcodeBus] opcode_i,  //译码结果: 操作码
	input[`FunctBus3] funct3_i,  //译码结果: 3位宽操作码附加段
	input[`FunctBus7] funct7_i,  //译码结果: 7位宽操作码附加段
	input[`RegBus] rs1_data_i,  //源寄存器1的数据输出
	input[`RegBus] rs2_data_i,  //源寄存器2的数据输出
	input[`RegAddrBus] rd_addr_i,  //目标寄存器 rd 的地址
	input wreg_i,  //标志位: 是否使用目标寄存器 rd
	input[`ImmBus] imm_i,  //
/* 	input [`Offset12Bus] offset12_i,
	input [`Offset20Bus] offset20_i, */
	input[`AddrBus] pc_i,
	input wire [`CTRL_Wire_Bus] ctrl_signal_i,
	
	output wire[`RegAddrBus] rs1_addr_o,
	output wire[`RegAddrBus] rs2_addr_o,
	output wire[`OpcodeBus] opcode_o,  //译码结果: 操作码
	output wire[`FunctBus3] funct3_o,  //译码结果: 3位宽操作码附加段
	output wire[`FunctBus7] funct7_o,  //译码结果: 7位宽操作码附加段
	output wire[`RegBus] rs1_data_o,  //源寄存器1的数据输出
	output wire[`RegBus] rs2_data_o,  //源寄存器2的数据输出
	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
	output wire wreg_o,  //标志位: 是否使用目标寄存器 rd
	output wire[`ImmBus] imm_o,  //立即数
/* 	output wire[`Offset12Bus] offset12_o,
	output wire[`Offset20Bus] offset20_o, */
	output wire[`AddrBus] pc_o
);

/* rs1_addr_o */
    wire [`RegAddrBus] rs1_addr_t;
    wire rs1_addr_wen;
    Reg #(5, 5'b0) reg1 (clk, rst, rs1_addr_t, rs1_addr_o, rs1_addr_wen);
    assign rs1_addr_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign rs1_addr_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? 5'b0 : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? rs1_addr_i : 5'b0;

/* rs2_addr_o */
    wire [`RegAddrBus] rs2_addr_t;
    wire rs2_addr_wen;
    Reg #(5, 5'b0) reg2 (clk, rst, rs2_addr_t, rs2_addr_o, rs2_addr_wen);
    assign rs2_addr_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign rs2_addr_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? 5'b0 : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? rs2_addr_i : 5'b0;


/* opcode_o */
    wire [`OpcodeBus] opcode_t;
    wire opcode_wen;
    Reg #(7, 7'b0) reg3 (clk, rst, opcode_t, opcode_o, opcode_wen);
    assign opcode_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign opcode_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Opcode_R_I_type_imm : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? opcode_i : `Opcode_InValid;

/* funct3_o */
    wire [`FunctBus3] funct3_t;
    wire funct3_wen;
    Reg #(3, 3'b0) reg4 (clk, rst, funct3_t, funct3_o, funct3_wen);
    assign funct3_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign funct3_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `funct3_addi : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? funct3_i : `funct3_InValid;

/* funct7_o */
    wire [`FunctBus7] funct7_t;
    wire funct7_wen;
    Reg #(7, 7'b0) reg5 (clk, rst, funct7_t, funct7_o, funct7_wen);
    assign funct7_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign funct7_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `funct7_InValid : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? funct7_i : `funct7_InValid;

/* rs1_data_o */
    wire [`RegBus] rs1_data_t;
    wire rs1_data_wen;
    Reg #(64, 64'b0) reg6 (clk, rst, rs1_data_t, rs1_data_o, rs1_data_wen);
    assign rs1_data_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign rs1_data_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Doubel_Zero_Word : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? rs1_data_i : `Doubel_Zero_Word;

/* rs2_data_o */
    wire [`RegBus] rs2_data_t;
    wire rs2_data_wen;
    Reg #(64, 64'b0) reg7 (clk, rst, rs2_data_t, rs2_data_o, rs2_data_wen);
    assign rs2_data_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign rs2_data_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Doubel_Zero_Word : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? rs2_data_i : `Doubel_Zero_Word;


/* rd_addr_o */
    wire [`RegAddrBus] rd_addr_t;
    wire rd_addr_wen;
    Reg #(5, 5'b0) reg8 (clk, rst, rd_addr_t, rd_addr_o, rd_addr_wen);
    assign rd_addr_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign rd_addr_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `reg_zero : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? rd_addr_i : `reg_zero;


/* wreg_o */
    wire wreg_t;
    wire wreg_wen;
    Reg #(1, 1'b0) reg9 (clk, rst, wreg_t, wreg_o, wreg_wen);
    assign wreg_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign wreg_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `WriteEnable : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? wreg_i : `WriteEnable;


/* imm_o */
    wire [`ImmBus] imm_t;
    wire imm_wen;
    Reg #(20, 20'b0) reg10 (clk, rst, imm_t, imm_o, imm_wen);
    assign imm_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign imm_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? 20'b0000_0000_0000_0000_0000 : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? imm_i : 20'b0000_0000_0000_0000_0000;


/* offset12_o */
/* 	wire [`Offset12Bus] offset12_t;
	wire offset12_wen;
	Reg #(12, 12'b0) reg11 (clk, rst, offset12_t, offset12_o, offset12_wen);
	assign offset12_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
	assign offset12_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? 12'b0 : 
						(ctrl_signal_i == `CTRL_STATE_Default) ? offset12_i : 12'b0; */

/* offset20_o */
/* 	wire [`Offset20Bus] offset20_t;
	wire offset20_wen;
	Reg #(20, 20'b0) reg_offset20 (clk, rst, offset20_t, offset20_o, offset20_wen);
	assign offset20_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
	assign offset20_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? 20'b0 : 
						(ctrl_signal_i == `CTRL_STATE_Default) ? offset20_i : 20'b0; */

/* pc_o */
    wire [`AddrBus] pc_t;
    wire pc_wen;
    Reg #(64, 64'b0) reg12 (clk, rst, pc_t, pc_o, pc_wen);
    assign pc_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign pc_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Invalid_pc : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? pc_i : `Invalid_pc;

endmodule
