`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module MEM
(
	input[`RegAddrBus] rd_addr_i,  //目标寄存器 rd 的地址
	input[`CSRAddrBus] csr_waddr_i,
	input wreg_i,  //标志位: 是否使用目标寄存器 rd
	input csr_wreg_i, 
	input[`RegBus] wdata_i,  // ALU运算结果/写入rd的数据
	input[`RegBus] csr_wdata_i,
/* 	input[`OpcodeBus] opcode_i,  //操作码, 传输到访存阶段, 确定加载/存储指令类型
	input[`FunctBus3] funct3_i,  //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
	input[`DRAM_Rdata_Bus] dram_rdata_i,
	input wire mem_wdata_sel_i, */
	
	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
	output wire[`CSRAddrBus] csr_waddr_o,
	output wire wreg_o,  //标志位: 是否使用目标寄存器 rd
	output wire csr_wreg_o,
	output wire[`RegBus] wdata_o,  // ALU运算结果/写入rd的数据
	output wire[`RegBus] csr_wdata_o,
	output wire[`RegAddrBus] mem_back_rd_addr_o,
	output wire[`CSRAddrBus] mem_back_csr_waddr_0,
	output wire mem_back_wreg_o,
	output wire mem_back_csr_wreg_o,
	output wire[`RegBus] mem_back_wdata_o,
	output wire[`RegBus] mem_back_csr_wdata_o

);

/* rd_addr_o wreg_o wdata_o */
	assign rd_addr_o = rd_addr_i;
	assign wreg_o = wreg_i;
	assign wdata_o = wdata_i;

/* csr_waddr_o csr_wreg_o csr_wdata_o */
	assign csr_waddr_o = csr_waddr_i;
	assign csr_wreg_o = csr_wreg_i;
	assign csr_wdata_o = csr_wdata_i;

/* mem_back_rd_addr_o mem_back_wreg_o mem_back_wdata_o */
	assign mem_back_rd_addr_o = rd_addr_i;
	assign mem_back_wreg_o = wreg_i;
	assign mem_back_wdata_o = wdata_i;

/* mem_back_csr_waddr_o mem_back_csr_wreg_o mem_back_csr_wdata_o */
	assign mem_back_csr_waddr_o = csr_waddr_i;
	assign mem_back_csr_wreg_o = csr_wreg_i;
	assign mem_back_csr_wdata_o = csr_wdata_i;

endmodule
