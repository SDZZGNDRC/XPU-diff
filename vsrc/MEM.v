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
	input wire		 			dcache_data_valid_i,
	input wire	[`DataBus]		dcache_data_i,
	input wire[`AddrBus] ex_mem_to_mem_pc_i,
	input[`OpcodeBus] opcode_i,  //操作码, 传输到访存阶段, 确定加载/存储指令类型
	input[`FunctBus3] funct3_i,  //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
/* 	input[`DRAM_Rdata_Bus] dram_rdata_i,
	input wire mem_wdata_sel_i, */

	output wire block_flag_o,
	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
	output wire[`CSRAddrBus] csr_waddr_o,
	output wire wreg_o,  //标志位: 是否使用目标寄存器 rd
	output wire csr_wreg_o,
	output wire[`RegBus] wdata_o,  // ALU运算结果/写入rd的数据
	output wire[`RegBus] csr_wdata_o,
	output wire[`AddrBus] mem_to_mem_wb_pc_o,
	output wire[`RegAddrBus] mem_back_rd_addr_o,
	output wire[`CSRAddrBus] mem_back_csr_waddr_o,
	output wire mem_back_wreg_o,
	output wire mem_back_csr_wreg_o,
	output wire[`RegBus] mem_back_wdata_o,
	output wire[`RegBus] mem_back_csr_wdata_o

);

/* block_flag_o */
	assign block_flag_o = ~dcache_data_valid_i;

/* rd_addr_o wreg_o */
	assign rd_addr_o = rd_addr_i;
	assign wreg_o = wreg_i;

/* wdata_o */
	wire[`RegBus] wdata_t_load;
	wire[`RegBus] wdata_t_lb;
	wire[`RegBus] wdata_t_lbu;
	wire[`RegBus] wdata_t_ld;
	wire[`RegBus] wdata_t_lh;
	wire[`RegBus] wdata_t_lhu;
	wire[`RegBus] wdata_t_lw;
	wire[`RegBus] wdata_t_lwu;

	assign wdata_t_lb = {{56{dcache_data_i[7]}}, dcache_data_i[7:0]};
	assign wdata_t_lbu = {56'h0, dcache_data_i[7:0]};
	assign wdata_t_ld = dcache_data_i;
	assign wdata_t_lh = {{48{dcache_data_i[15]}}, dcache_data_i[15:0]};
	assign wdata_t_lhu = {48'h0, dcache_data_i[15:0]};
	assign wdata_t_lw = {{32{dcache_data_i[31]}}, dcache_data_i[31:0]};
	assign wdata_t_lwu = {32'h0, dcache_data_i[31:0]};

	MuxKeyWithDefault #(1, 7, 64) mux_wdata_o (wdata_o, opcode_i, wdata_i, {
		`Opcode_I_type_load, wdata_t_load
	});

	MuxKeyWithDefault #(7, 3, 64) mux_wdata_t_load (wdata_t_load, funct3_i, `Doubel_Zero_Word, {
		`funct3_lb, wdata_t_lb,
		`funct3_lbu, wdata_t_lbu,
		`funct3_ld, wdata_t_ld,
		`funct3_lh, wdata_t_lh,
		`funct3_lhu, wdata_t_lhu,
		`funct3_lw, wdata_t_lw,
		`funct3_lwu, wdata_t_lwu
	});

/* csr_waddr_o csr_wreg_o csr_wdata_o */
	assign csr_waddr_o = csr_waddr_i;
	assign csr_wreg_o = csr_wreg_i;
	assign csr_wdata_o = csr_wdata_i;

/* mem_to_mem_wb_pc_o */
	assign mem_to_mem_wb_pc_o = ex_mem_to_mem_pc_i;

/* mem_back_rd_addr_o mem_back_wreg_o mem_back_wdata_o */
	assign mem_back_rd_addr_o = rd_addr_i;
	assign mem_back_wreg_o = wreg_i;
	assign mem_back_wdata_o = wdata_o;

/* mem_back_csr_waddr_o mem_back_csr_wreg_o mem_back_csr_wdata_o */
	assign mem_back_csr_waddr_o = csr_waddr_i;
	assign mem_back_csr_wreg_o = csr_wreg_i;
	assign mem_back_csr_wdata_o = csr_wdata_i;

endmodule
