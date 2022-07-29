`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module MEM_WB
(
	input wire clk,
	input wire rst,
	input[`RegAddrBus] rd_addr_i,  //目标寄存器 rd 的地址
	input wreg_i,  //标志位: 是否使用目标寄存器 rd
	input[`RegBus] wdata_i,  //ALU运算结果/写入rd的数据
	input wire [`CTRL_Wire_Bus] ctrl_signal_i,

	//连接到refile模块
	output wire[`RegBus] wdata_o,  // ALU运算结果/写入rd的数据
	output wire wreg_o,  //标志位: 是否写目标寄存器 rd
	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
	output wire[`RegAddrBus] mem_wb_back_rd_addr_o,
	output wire mem_wb_back_wreg_o,
	output wire[`RegBus] mem_wb_back_wdata_o

);

/* wdata_o */
    wire wdata_wen;
    Reg #(64, 64'b0) reg1 (clk, rst, wdata_i, wdata_o, wdata_wen);
    assign wdata_wen = (ctrl_signal_i == `FSM_STATE_Default) ? 1'b1 : 1'b0;

/* wreg_o */
    wire wreg_wen;
    Reg #(1, 1'b0) reg2 (clk, rst, wreg_i, wreg_o, wreg_wen);
    assign wreg_wen = (ctrl_signal_i == `FSM_STATE_Default) ? 1'b1 : 1'b0;

/* rd_addr_o */
    wire rd_addr_wen;
    Reg #(5, 5'b0) reg3 (clk, rst, rd_addr_i, rd_addr_o, rd_addr_wen);
    assign rd_addr_wen = (ctrl_signal_i == `FSM_STATE_Default) ? 1'b1 : 1'b0;

/* mem_wb_back_rd_addr_o mem_wb_back_wreg_o mem_wb_back_wdata_o */
    assign mem_wb_back_rd_addr_o = rd_addr_o;
    assign mem_wb_back_wreg_o = wreg_o;
    assign mem_wb_back_wdata_o = wdata_o;

endmodule