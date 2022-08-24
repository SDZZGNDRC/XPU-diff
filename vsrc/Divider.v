module top (
    input wire              clk,
    input wire              rst,

    input wire              req_valid_i,
    input wire              block_i,
    input wire[63:0]        op_1_i,
    input wire[63:0]        op_2_i,
    input wire              sign_op_1_i,
    input wire              sign_op_2_i,

    output wire[63:0]       quotient_o,
    output wire[63:0]       remainder_o,
    output wire             ready_o,
    output wire             valid_o
);
    wire reg_wen;
    assign reg_wen = ~block_i;

    wire[6:0]   pre_state;
    wire[6:0]   next_state;
    wire[6:0]   next_state_t_idle;
    Reg #(7, 7'b0) reg_pre_state (clk, rst, next_state, pre_state, reg_wen);
    MuxKeyWithDefault #(2, 7, 7) mux_next_state (next_state, pre_state, pre_state+7'd1, {
        7'd0, next_state_t_idle,
        7'd66, 7'd0
    });
    assign next_state_t_idle = (req_valid_i==1'b1) ? 7'b1 : 7'b0;

/* ready_o */
    wire ready_t_idle;
    assign ready_t_idle = (req_valid_i==1'b1) ? 1'b0 : 1'b1;
    MuxKeyWithDefault #(3, 7, 1) mux_ready (ready_o, pre_state, 1'b0, {
        7'd0, ready_t_idle,
        7'd65, 1'b1,
        7'd66, 1'b1
    });

/* valid_o */
    wire valid_t_idle;
    assign valid_t_idle = (req_valid_i==1'b1) ? 1'b0 : 1'b1;
    MuxKeyWithDefault #(2, 7, 1) mux_valid (valid_o, pre_state, 1'b0, {
        7'd0, valid_t_idle, 
        7'd66, 1'b1
    });

/* Expand op to 65-bits */
    wire[64:0] op_1;
    wire[64:0] op_2;
    assign op_1 = (sign_op_1_i==1'b1) ? {{1{op_1_i[63]}}, op_1_i} : {1'b0, op_1_i};
    assign op_2 = (sign_op_2_i==1'b1) ? {{1{op_2_i[63]}}, op_2_i} : {1'b0, op_2_i};

/* Recode the sign of op_1 and op_2 */
    wire sign_op_1_t;
    wire sign_op_1;
    wire sign_op_2_t;
    wire sign_op_2;
    wire reg_sign_op_1_wen;
    wire reg_sign_op_2_wen;
    Reg #(1, 1'b0) reg_sign_op_1 (clk, rst, sign_op_1_t, sign_op_1, reg_sign_op_1_wen);
    Reg #(1, 1'b0) reg_sign_op_2 (clk, rst, sign_op_2_t, sign_op_2, reg_sign_op_2_wen);
    assign sign_op_1_t = op_1[64];
    assign sign_op_2_t = op_2[64];
    assign reg_sign_op_1_wen = reg_wen | (pre_state==7'd1) ? 1'b1 : 1'b0;
    assign reg_sign_op_2_wen = reg_wen | (pre_state==7'd1) ? 1'b1 : 1'b0;

/* Convert 65-bits op to abs */
    wire[64:0] op_1_abs;
    wire[64:0] op_2_abs;
    assign op_1_abs = (op_1[64]==1'b1) ? ~op_1+65'd1 : op_1;
    assign op_2_abs = (op_2[64]==1'b1) ? ~op_2+65'd1 : op_2;

/* Core */
    wire[64:0] mask_t;
    wire[64:0] mask;
    wire[129:0] divider_recovery;
    wire[129:0] divider_t;
    wire[129:0] divider;
    wire[129:0] remainder_t;
    wire[129:0] remainder;
    wire[64:0] quotient_t;
    wire[64:0] quotient_t_bit;
    wire[64:0] quotient;
    wire add_flag;
    wire[129:0] next_remainder;
    assign add_flag = remainder[129];
    assign next_remainder = (add_flag==1'b1) ? remainder+divider : remainder-divider;
    Reg #(65, 65'b0) reg_mask (clk, rst, mask_t, mask, reg_wen);
    Reg #(130, 130'h0) reg_divider (clk, rst, divider_t, divider, reg_wen);
    Reg #(130, 130'h0) reg_remainder (clk, rst, remainder_t, remainder, reg_wen);
    Reg #(65, 65'h0) reg_quotient (clk, rst, quotient_t, quotient, reg_wen);
    Reg #(130, 130'h0) reg_divider_recovery (clk, rst, divider, divider_recovery, reg_wen);
    assign mask_t = (pre_state==7'd0) ? 65'h10000000000000000 : mask>>1'b1;
    assign divider_t = (pre_state==7'd0 && req_valid_i==1'b1) ? {1'b0, op_2_abs, 64'b0} : divider>>1'b1;
    assign remainder_t= (pre_state==7'd0 && req_valid_i==1'b1) ? {65'b0, op_1_abs} : next_remainder;
    assign quotient_t = (pre_state==7'd0 && req_valid_i==1'b1) ? {65'b0} : quotient | quotient_t_bit;
    assign quotient_t_bit = (remainder_t[129]==1'b1) ? 65'h0 : mask;

/* quotient_o */
    assign quotient_o = (~sign_op_1^sign_op_2 == 1'b1) ? quotient[63:0] : {~quotient+64'h1}[63:0];

/* remainder_o */
/* verilator lint_off UNUSED */
    wire[129:0] remainder_r;
    assign remainder_r = (remainder[129]==1'b1) ? remainder+divider_recovery : remainder;
    assign remainder_o = (sign_op_1==1'b0) ? remainder_r[63:0] : {~remainder_r[63:0]+64'h1}[63:0];
/* verilator lint_on UNUSED */
/* 	initial begin
		$dumpfile("logs/vlt_dump.vcd");
		$dumpvars();
	end */

endmodule
