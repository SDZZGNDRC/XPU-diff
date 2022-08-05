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
	output wire             icache_wen_o,
    output wire             icache_req_valid_o/* ,
	output wire[`InstBus]   icache_data_o */
);
    /* pc_ram_o */
    wire [`AddrBus] pc_ram_t;
    wire pc_ram_wen;
    Reg #(64, `Init_pc-64'h4) pc_ram (clk, rst, pc_ram_o, pc_ram_t, pc_ram_wen);
    assign pc_ram_wen = ~{1{(ctrl_signal_i == `CTRL_STATE_Block)}};
    MuxKeyWithDefault #(2, 2, 64) mux1 (pc_ram_o, ctrl_signal_i, 64'b0, {
        `CTRL_STATE_Default,    pc_ram_t + 64'h4,
        `CTRL_STATE_Branch,     pc_new_i
    });

    /* pc_pipeline_o */
    wire [`AddrBus] pc_pipeline_t;
    wire pc_pipeline_wen;
    Reg #(64, `Init_pc - 64'h4) pc_pipeline (clk, rst, pc_pipeline_t, pc_pipeline_o, pc_pipeline_wen);
    assign pc_pipeline_wen = ~{1{(ctrl_signal_i == `CTRL_STATE_Block)}};
    MuxKeyWithDefault #(2, 2, 64) mux3 (pc_pipeline_t, ctrl_signal_i, 64'b0, {
        `CTRL_STATE_Default,    pc_pipeline_o + 64'h4,
        `CTRL_STATE_Branch,     pc_new_i
    });

    /* icache_wen_o */
    assign icache_wen_o = 1'b0;

    /* icache_req_valid_o */
	wire icache_req_valid_wen;
	assign icache_req_valid_wen = ~{1{(ctrl_signal_i == `CTRL_STATE_Block)}};
	Reg #(1, 1'b0) icache_req_valid (clk, rst, ~rst, icache_req_valid_o, icache_req_valid_wen);

    /* icache_data_o */
/*     assign icache_addr_o = 64'b0; */


endmodule
