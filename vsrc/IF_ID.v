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
    wire [`AddrBus] pc_t;
    wire pc_wen;
    Reg #(64, 64'b0) reg1 (clk, rst, pc_t, pc_o, pc_wen);
    assign pc_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    MuxKeyWithDefault #(2, 2, 64) mux1 (pc_t, ctrl_signal_i, 64'b0, {
        `CTRL_STATE_Default,    pc_i,
        `CTRL_STATE_Bubble,     `Invalid_pc
    });

/* if_inst_o */
    wire [`InstBus] if_inst_t;
    wire [`CTRL_Wire_Bus] state;
    wire state_wen;
    Reg #(2, 2'b0) reg2 (clk, rst, ctrl_signal_i, state, state_wen);
    assign state_wen = (ctrl_signal_i == `CTRL_STATE_Block) ? 1'b0 : 1'b1;
    assign if_inst_o = ({32{(ctrl_signal_i==`CTRL_STATE_Default)}} & if_inst_t)
                    |  ({32{(ctrl_signal_i==`CTRL_STATE_Bubble)}} & `NOP);
    assign if_inst_t = (state == `CTRL_STATE_Bubble) ? `NOP : if_inst_i;

endmodule
