`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module EX_MEM
(
	input wire clk,
	input wire rst,
	
	input[`RegAddrBus] rd_addr_i,  //目标寄存器 rd 的地址
	input[`CSRAddrBus] csr_waddr_i,
    input wreg_i,  //标志位: 是否使用目标寄存器 rd
	input csr_wreg_i,
    input[`RegBus] wdata_i,  // ALU运算结果/写入rd的数据
    input[`RegBus] csr_wdata_i,
    input[`AddrBus] ex_to_ex_mem_pc_i,
	input[`OpcodeBus] opcode_i,  //操作码, 传输到访存阶段, 确定加载/存储指令类型
	input[`FunctBus3] funct3_i,  //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
	input wire [`CTRL_Wire_Bus] ctrl_signal_i,
/* 	input wire mem_wdata_sel_i, */

	output wire[`RegAddrBus] rd_addr_o,  //目标寄存器 rd 的地址
    output wire[`CSRAddrBus] csr_waddr_o,
	output wire wreg_o,  //标志位: 是否使用目标寄存器 rd
	output wire csr_wreg_o,
    output wire[`RegBus] wdata_o,  // ALU运算结果/写入rd的数据
    output wire[`RegBus] csr_wdata_o,
    output wire[`AddrBus] ex_mem_to_mem_pc_o,
	output wire[`OpcodeBus] opcode_o,  //操作码, 传输到访存阶段, 确定加载/存储指令类型
	output wire[`FunctBus3] funct3_o  //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
/* 	output reg	mem_wdata_sel_o */
);

/* rd_addr_o */
    wire [`RegAddrBus] rd_addr_t;
    wire rd_addr_wen;
    Reg #(5, 5'b0) reg1 (clk, rst, rd_addr_t, rd_addr_o, rd_addr_wen);
    assign rd_addr_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign rd_addr_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `reg_zero : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? rd_addr_i : `reg_zero;

/* csr_waddr_o */
    wire [`CSRAddrBus] csr_waddr_t;
    wire csr_waddr_wen;
    Reg #(12, `CSR_Addr_marchid) reg_csr_waddr (clk, rst, csr_waddr_t, csr_waddr_o, csr_waddr_wen);
    assign csr_waddr_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign csr_waddr_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `CSR_Addr_marchid : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? csr_waddr_i : `CSR_Addr_marchid;

/* wreg_o */
    wire wreg_t;
    wire wreg_wen;
    Reg #(1, 1'b0) reg_2 (clk, rst, wreg_t, wreg_o, wreg_wen);
    assign wreg_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign wreg_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `WriteEnable : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? wreg_i : `WriteEnable;

/* csr_wreg_o */
    wire csr_wreg_t;
    wire csr_wreg_wen;
    Reg #(1, 1'b0) reg_csr_wreg (clk, rst, csr_wreg_t, csr_wreg_o, csr_wreg_wen);
    assign csr_wreg_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign csr_wreg_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `WriteEnable : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? csr_wreg_i : `WriteEnable;

/* wdata_o */
    wire [`RegBus] wdata_t;
    wire wdata_wen;
    Reg #(64, 64'b0) reg3 (clk, rst, wdata_t, wdata_o, wdata_wen);
    assign wdata_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign wdata_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Doubel_Zero_Word : 
                        (ctrl_signal_i == `CTRL_STATE_Default) ? wdata_i : `Doubel_Zero_Word;

/* csr_wdata_o */
    wire [`RegBus] csr_wdata_t;
    wire csr_wdata_wen;
    Reg #(64, 64'b0) reg_csr_wdata (clk, rst, csr_wdata_t, csr_wdata_o, csr_wdata_wen);
    assign csr_wdata_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign csr_wdata_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Doubel_Zero_Word : 
                         (ctrl_signal_i == `CTRL_STATE_Default) ? csr_wdata_i : `Doubel_Zero_Word;

/* ex_mem_to_mem_pc_o */
    wire [`AddrBus] ex_mem_to_mem_pc_t;
    wire ex_mem_to_mem_pc_wen;
    Reg #(64, `Invalid_pc) reg_ex_mem_to_mem_pc (clk, rst, ex_mem_to_mem_pc_t, ex_mem_to_mem_pc_o, ex_mem_to_mem_pc_wen);
    assign ex_mem_to_mem_pc_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign ex_mem_to_mem_pc_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Invalid_pc : 
                                (ctrl_signal_i == `CTRL_STATE_Default) ? ex_to_ex_mem_pc_i : `Invalid_pc;

/* opcode_o */
    wire [`OpcodeBus] opcode_t;
    wire opcode_wen;
    Reg #(7, `Opcode_InValid) reg_opcode (clk, rst, opcode_t, opcode_o, opcode_wen);
    assign opcode_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign opcode_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `Opcode_R_I_type_imm : 
                      (ctrl_signal_i == `CTRL_STATE_Default) ? opcode_i : `Opcode_R_I_type_imm;

/* funct3_o */
    wire [`funct3Bus] funct3_t;
    wire funct3_wen;
    Reg #(3, `funct3_addi) reg_funct3 (clk, rst, funct3_t, funct3_o, funct3_wen);
    assign funct3_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign funct3_t = (ctrl_signal_i == `CTRL_STATE_Bubble) ? `funct3_addi : 
                      (ctrl_signal_i == `CTRL_STATE_Default) ? funct3_i : `funct3_addi;

endmodule
