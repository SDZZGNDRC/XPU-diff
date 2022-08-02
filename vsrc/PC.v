//本模块定义了一个 PC 程序计数器, 每个时钟周期 PC 值加4, pc 传送到 ram 模块作为指令地址
//输入: clk 时钟  
//      rst 复位端
//      PC_new_i 新程序计数器的值(即传送到ram的指令地址)
//      stall_flag_i 流水线阻塞标志位
//
//输出: PC_ram 程序计数器的值(即传送到ram的指令地址)
//      PC_pipeline 送到流水线的PC值
//      ram_ce ram 的使能信号  
//      ram_p1_write_o p1 端的读写控制
//      ram_p1_data_o 端口x的写数据值
//

`include "defines.v"
(* DONT_TOUCH= "true" *)
module PC
(
	input wire clk,
	input wire rst,

	input wire[`CTRL_Wire_Bus]  ctrl_signal_i,
	input wire[`AddrBus]        pc_new_i,

	output wire[`AddrBus]   pc_ram_o,
	output wire[`AddrBus]   pc_pipeline_o,
	output wire             icache_data_wen_o,
    output wire             icache_req_valid_o/* ,
	output wire[`InstBus]   icache_data_o */
);
    /* pc_ram_o */
    wire [`AddrBus] pc_ram_t;
/* 	wire [`AddrBus] pc_ram_R; */
    wire pc_ram_wen;
    Reg #(64, `Init_pc-64'h4) pc_ram (clk, rst, pc_ram_o, pc_ram_t, pc_ram_wen);
    assign pc_ram_wen = ~{1{(ctrl_signal_i == `CTRL_STATE_Stalled)}};
    MuxKeyWithDefault #(2, 2, 64) mux1 (pc_ram_o, ctrl_signal_i, 64'b0, {
        `CTRL_STATE_Default,    pc_ram_t + 64'h4,
        `CTRL_STATE_Branch,     pc_new_i
    });
/* 	MuxKeyWithDefault #(, 2, 64) mux2 (pc_ram_o, ctrl_signal_i, 64'b0, {
		`CTRL_STATE_Default,	pc_ram_R,
		`CTRL_STATE_Branch,		pc_new_i
	}) */

    /* pc_pipeline_o */
    wire [`AddrBus] pc_pipeline_t;
    wire pc_pipeline_wen;
    Reg #(64, `Init_pc - 64'h4) pc_pipeline (clk, rst, pc_pipeline_t, pc_pipeline_o, pc_pipeline_wen);
    assign pc_pipeline_wen = ~{1{(ctrl_signal_i == `CTRL_STATE_Stalled)}};
    MuxKeyWithDefault #(2, 2, 64) mux3 (pc_pipeline_t, ctrl_signal_i, 64'b0, {
        `CTRL_STATE_Default,    pc_pipeline_o + 64'h4,
        `CTRL_STATE_Branch,     pc_new_i - 64'h4
    });

    /* icache_data_wen_o */
    assign icache_data_wen_o = 1'b0;

    /* icache_req_valid_o */
    assign icache_req_valid_o = ~rst;

    /* icache_data_o */
/*     assign icache_addr_o = 64'b0; */

/* 	always @(posedge clk) begin  //控制 RAM 储存器的使能信号
		if(rst == `RstEnable) begin
			pc_ram <= `Init_pc;
			pc_pipeline <= `Init_pc - 64'h4;
			ram_p1_write_o <= `WriteDisable;
			ram_p1_data_o <= `Init_pc;
		end else if (ctrl_signal_i == `CTRL_STATE_Default) begin
			pc_pipeline		<= pc_pipeline + 64'h4;
			pc_ram			<= pc_ram + 64'h4;
			ram_p1_write_o	<= `WriteDisable;
			ram_p1_data_o	<= `Doubel_Zero_Word;
		end else if(ctrl_signal_i == `CTRL_STATE_Branch)begin
			pc_pipeline		<= pc_new_i - 64'h4;
			pc_ram			<= pc_new_i;
			ram_p1_write_o	<= `WriteDisable;
			ram_p1_data_o	<= `Doubel_Zero_Word;
		end else begin
			pc_pipeline		<= pc_pipeline;
			pc_ram			<= pc_ram;
			ram_p1_write_o	<= `WriteDisable;
			ram_p1_data_o	<= `Doubel_Zero_Word;
		end
	end */

endmodule
