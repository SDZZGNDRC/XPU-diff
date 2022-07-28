//本模块定义了一个基于RV64IM的 CPU 处理器 XPU_v0.1
//功能: 连接了五级流水线的各个部件以及32个通用寄存器
//
//注意: 约定采用 RAM 的p1端口传输指令, p2端口传输数据
//
//输入: clk 时钟
//      rst 复位
//      ram_px_data_i RAM px端口的读数据
//
//输出: ram_px_addr_o RAM px端口的读写地址  
//      ram_px_write_o RAM px端口的读写控制 
//      ram_px_data_o RAM px端口的写数据 
//      ram_ce_o RAM的使能端
//
`include "defines.v"
(* DONT_TOUCH= "true" *)
module top(
	input clk,
	input rst,



	input			 			icache_data_valid_i,	
	input			 			dcache_data_valid_i,
	input wire [`DataBus]		icache_data_i,
	input wire	[`DataBus]		dcache_data_i,
	output [`AddrBus] 			icache_addr_o,
	output [`AddrBus] 			dcache_addr_o,
	output wire					icache_req_valid_o,
	output wire 				dcache_req_valid_o,
	output wire					icache_data_wen_o,
	output wire 				dcache_data_wen_o,
	output wire	[`DataBus]		icache_data_o,
	output wire	[`DataBus]		dcache_data_o,

	output wire [`RegBus]		diff_regs [0:`RegNum-1]

);
	assign f = a ^ b;

	initial begin
		$dumpfile("logs/vlt_dump.vcd");
		$dumpvars();
	end
endmodule
