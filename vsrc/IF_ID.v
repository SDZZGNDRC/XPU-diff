`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module IF_ID
(
	input wire clk,
	input wire rst,
	input wire [`InstBus] if_inst_i,
	input wire [`CTRL_Wire_Bus] ctrl_signal_i,
	input wire [`AddrBus] pc_i,

	output wire [`InstBus] if_inst_o,
	output wire [`AddrBus] pc_o
);

/* pc_o */
    wire pc_wen;
    Reg #(64, 64'b0) reg1 (clk, rst, pc_i, pc_o, pc_wen);
    assign pc_wen = (ctrl_signal_i == `CTRL_STATE_Stalled) ? 1'b0 : 1'b1;

/* NOTICE: For some reasion, the if_inst_o signal are pass to a reg here.
    But when port this project to the real FPGA platform, the if_inst_o signal 
    should be passed directly to a wire,
 */
/* if_inst_o */
/*     wire if_inst_wen;
    Reg #(32, 32'b0) reg2 (clk, rst, if_inst_i, if_inst_o, if_inst_wen);
    assign if_inst_wen = (ctrl_signal_i == `CTRL_STATE_Stalled) ? 1'b0 : 1'b1; */
    assign if_inst_o = if_inst_i;

endmodule
