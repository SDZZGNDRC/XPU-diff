//本模块定义了访存阶段
//功能: 实现加载/存储指令
//
//输入: rst 复位端
//      rd_addr_i 目标寄存器 rd 的地址
//      wreg_i 标志位: 是否使用目标寄存器 rd
//      wdata_i 运算结果/写入rd的数据
//      opcode_i 操作码, 传输到访存阶段, 确定加载/存储指令类型
//      funct3_i 3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
//      ram_px_data_i 来自 RAM 端口x的数据输入
//
//输出: rd_addr_o 目标寄存器 rd 的地址
//      wreg_o 标志位: 是否使用目标寄存器 rd
//      wdata_o ALU运算结果/写入rd的数据
//      ram_addr_o 要读取/写入的 RAM 地址
//      ram_ce RAM 模块的使能控制
//      ram_px_addr RAM 模块端口x的地址
//      ram_px_write RAM 模块端口x的读写控制
//

`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module MEM
(
/* 	input wire clk,
	input wire rst, */
	input[`RegAddrBus] rd_addr_i,  //目标寄存器 rd 的地址
	input wreg_i,  //标志位: 是否使用目标寄存器 rd
	input[`RegBus] wdata_i,  // ALU运算结果/写入rd的数据
/* 	input[`OpcodeBus] opcode_i,  //操作码, 传输到访存阶段, 确定加载/存储指令类型
	input[`FunctBus3] funct3_i,  //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
	input[`DRAM_Rdata_Bus] dram_rdata_i,
	input wire mem_wdata_sel_i, */
	
	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
	output wire wreg_o,  //标志位: 是否使用目标寄存器 rd
	output wire[`RegBus] wdata_o,  // ALU运算结果/写入rd的数据
	output wire[`RegAddrBus] mem_back_rd_addr_o,
	output wire mem_back_wreg_o,
	output wire[`RegBus] mem_back_wdata_o

);

/* rd_addr_o wreg_o wdata_o */
	assign rd_addr_o = rd_addr_i;
	assign wreg_o = wreg_i;
	assign wdata_o = wdata_i;

/* mem_back_rd_addr_o mem_back_wreg_o mem_back_wdata_o */
	assign mem_back_rd_addr_o = rd_addr_i;
	assign mem_back_wreg_o = wreg_i;
	assign mem_back_wdata_o = wdata_i;

endmodule
