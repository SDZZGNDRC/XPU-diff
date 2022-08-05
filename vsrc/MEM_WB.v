`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module MEM_WB
(
	input wire clk,
	input wire rst,
	input[`RegAddrBus] rd_addr_i,  //目标寄存器 rd 的地址
	input[`CSRAddrBus] csr_waddr_i,
	input wreg_i,  //标志位: 是否使用目标寄存器 rd
	input csr_wreg_i,
	input[`RegBus] wdata_i,  //ALU运算结果/写入rd的数据
	input[`RegBus] csr_wdata_i,
	input wire [`CTRL_Wire_Bus] ctrl_signal_i,

	//连接到refile模块
	output wire[`RegBus] wdata_o,  // ALU运算结果/写入rd的数据
	output wire[`RegBus] csr_wdata_o,
	output wire wreg_o,  //标志位: 是否写目标寄存器 rd
	output wire csr_wreg_o,
	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
	output wire[`CSRAddrBus] csr_waddr_o,  //目标寄存器 rd 的地址
	output wire[`RegAddrBus] mem_wb_back_rd_addr_o,
	output wire mem_wb_back_wreg_o,
	output wire[`RegBus] mem_wb_back_wdata_o,
	output wire[`CSRAddrBus] mem_wb_back_csr_waddr_o,
	output wire mem_wb_back_csr_wreg_o,
	output wire[`RegBus] mem_wb_back_csr_wdata_o
);

/* wdata_o */
    wire wdata_wen;
    Reg #(64, 64'b0) reg1 (clk, rst, wdata_i, wdata_o, wdata_wen);
    assign wdata_wen = (ctrl_signal_i == `CTRL_STATE_Default) ? 1'b1 : 1'b0;

/* csr_wdata_o */
    wire csr_wdata_wen;
    Reg #(64, 64'b0) reg_csr_wdata (clk, rst, csr_wdata_i, csr_wdata_o, csr_wdata_wen);
    assign csr_wdata_wen = (ctrl_signal_i == `CTRL_STATE_Default) ? 1'b1 : 1'b0;

/* wreg_o */
    wire wreg_wen;
    Reg #(1, 1'b0) reg2 (clk, rst, wreg_i, wreg_o, wreg_wen);
    assign wreg_wen = (ctrl_signal_i == `CTRL_STATE_Default) ? 1'b1 : 1'b0;

/* csr_wreg_o */
    wire csr_wreg_wen;
    Reg #(1, 1'b0) reg_csr_wreg (clk, rst, csr_wreg_i, csr_wreg_o, csr_wreg_wen);
    assign csr_wreg_wen = (ctrl_signal_i == `CTRL_STATE_Default) ? 1'b1 : 1'b0;

/* rd_addr_o */
    wire rd_addr_wen;
    Reg #(5, 5'b0) reg3 (clk, rst, rd_addr_i, rd_addr_o, rd_addr_wen);
    assign rd_addr_wen = (ctrl_signal_i == `CTRL_STATE_Default) ? 1'b1 : 1'b0;

/* csr_waddr_o */
    wire csr_waddr_wen;
    Reg #(12, 12'b0) reg_csr_waddr (clk, rst, csr_waddr_i, csr_waddr_o, csr_waddr_wen);
    assign csr_waddr_wen = (ctrl_signal_i == `CTRL_STATE_Default) ? 1'b1 : 1'b0;

/* mem_wb_back_rd_addr_o mem_wb_back_wreg_o mem_wb_back_wdata_o */
    assign mem_wb_back_rd_addr_o = rd_addr_o;
    assign mem_wb_back_wreg_o = wreg_o;
    assign mem_wb_back_wdata_o = wdata_o;

/* mem_wb_back_csr_waddr_o mem_wb_back_csr_wreg_o mem_wb_back_csr_wdata_o */
    assign mem_wb_back_csr_waddr_o = csr_waddr_o;
    assign mem_wb_back_csr_wreg_o = csr_wreg_o;
    assign mem_wb_back_csr_wdata_o = csr_wdata_o;

endmodule
