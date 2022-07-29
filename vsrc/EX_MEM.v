`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module EX_MEM
(
	input wire clk,
	input wire rst,
	
	input[`RegAddrBus] rd_addr_i,  //目标寄存器 rd 的地址
	input wreg_i,  //标志位: 是否使用目标寄存器 rd
	input[`RegBus] wdata_i,  // ALU运算结果/写入rd的数据
/* 	input[`OpcodeBus] opcode_i,  //操作码, 传输到访存阶段, 确定加载/存储指令类型 */
/* 	input[`FunctBus3] funct3_i,  //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型 */
	input wire [`CTRL_Wire_Bus] ctrl_signal_i,
/* 	input wire mem_wdata_sel_i, */

	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
	output wire wreg_o,  //标志位: 是否使用目标寄存器 rd
	output wire[`RegBus] wdata_o  // ALU运算结果/写入rd的数据
/* 	output reg[`OpcodeBus] opcode_o,  //操作码, 传输到访存阶段, 确定加载/存储指令类型 */
/* 	output reg[`FunctBus3] funct3_o,  //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型 */
/* 	output reg	mem_wdata_sel_o */
);

/* rd_addr_o */
    wire [`RegAddrBus] rd_addr_t;
    wire rd_addr_wen;
    Reg #(5, 5'b0) reg1 (clk, rst, rd_addr_t, rd_addr_o, rd_addr_wen);
    assign rd_addr_wen = (ctrl_signal_i == `CTRL_STATE_Stalled) ? 1'b0 : 1'b1;
    assign rd_addr_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `reg_zero : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? rd_addr_i : `reg_zero;

/* wreg_o */
    wire wreg_t;
    wire wreg_wen;
    Reg #(1, 1'b0) reg2 (clk, rst, wreg_t, wreg_o, wreg_wen);
    assign wreg_wen = (ctrl_signal_i == `CTRL_STATE_Stalled) ? 1'b0 : 1'b1;
    assign wreg_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `WriteEnable : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? wreg_i : `WriteEnable;

/* wdata_o */
    wire [`RegBus] wdata_t;
    wire wdata_wen;
    Reg #(64, 64'b0) reg3 (clk, rst, wdata_t, wdata_o, wdata_wen);
    assign wdata_wen = (ctrl_signal_i == `CTRL_STATE_Stalled) ? 1'b0 : 1'b1;
    assign wdata_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Doubel_Zero_Word : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? wdata_i : `Doubel_Zero_Word;

endmodule