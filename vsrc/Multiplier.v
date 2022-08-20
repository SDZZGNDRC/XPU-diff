module top (
    input wire                  clk,
    input wire                  rst,

    input wire                  req_valid_i,
    input wire                  block_i,
    input wire[63:0]            op_1_i,
    input wire[63:0]            op_2_i,
    input wire                  sign_op_1_i,
    input wire                  sign_op_2_i,

    output wire[63:0]           result_l_o,
    output wire[63:0]           result_h_o,
    output wire                 ready_o,
    output wire                 valid_o
);
    wire reg_wen;
    assign reg_wen = ~block_i;

    /* convert 64-bits op to 65-bits */
    wire[64:0] op_1;
    wire[64:0] op_2;
    assign op_1 = (sign_op_1_i==1'b1) ? {{1{op_1_i[63]}}, op_1_i} : {1'b0, op_1_i};
    assign op_2 = (sign_op_2_i==1'b1) ? {{1{op_2_i[63]}}, op_2_i} : {1'b0, op_2_i};

    /* generate 33 partial products */
    wire[129:0] pd0[0:32];
    wire[129:0] pd0_t[0:32];
    genvar i;
    generate for(i = 0; i < 32; i = i+1)
        begin : gfor
            Booth2 #(.L(2*i+1)) booth2(
                .op2_slice(op_2[2*i+2:2*i]),
                .op1({{65{op_1[64]}}, op_1}),
                .p(pd0_t[i])
            );
        end
    endgenerate
    assign pd0_t[32] = (op_2[0]==1'b1) ? ~{{65{op_1[64]}}, op_1}+130'd1 : 130'd0;

    generate for(i = 0; i < 33; i = i+1)
        begin : reg_gfor
            Reg #(130, 130'h0) reg_pd0 (
                .clk(clk),
                .rst(rst),
                .din(pd0_t[i]),
                .dout(pd0[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 1: 33 partial products, 11 csadder, 0 full-adder, left 0
       Generate 22 partial products */
    wire[129:0] pd1[0:21];
    wire[129:0] pd1_t[0:21];
    generate for(i = 0; i < 11; i = i+1)
        begin : f1
            CSAdder130 CSAdder130_f1(
                .a(pd0[3*i]),
                .b(pd0[3*i+1]),
                .c(pd0[3*i+2]),

                .result1(pd1_t[2*i]),
                .result2(pd1_t[2*i+1])
            );
        end
    endgenerate

    generate for(i = 0; i < 22; i = i+1)
        begin : reg_f1
            Reg #(130, 130'h0) reg_pd1(
                .clk(clk),
                .rst(rst),
                .din(pd1_t[i]),
                .dout(pd1[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 2: 22 partial products, 7 csadder, 0 full-adder, left 1
       Generate 15 partial products */
    wire[129:0] pd2[0:15];
    wire[129:0] pd2_t[0:15];
    generate for(i = 0; i < 7; i = i+1)
        begin : f2
            CSAdder130 CSAdder130_f2(
                .a(pd1[3*i]),
                .b(pd1[3*i+1]),
                .c(pd1[3*i+2]),

                .result1(pd2_t[2*i]),
                .result2(pd2_t[2*i+1])
            );
        end
    endgenerate
    assign pd2_t[14] = pd1[21];

    generate for(i = 0; i < 15; i = i+1)
        begin : reg_f2
            Reg #(130, 130'h0) reg_pd2(
                .clk(clk),
                .rst(rst),
                .din(pd2_t[i]),
                .dout(pd2[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 3: 15 partial products, 5 csadder, 0 full-adder, left 0
       Generate 10 partial products */
    wire[129:0] pd3[0:9];
    wire[129:0] pd3_t[0:9];
    generate for(i = 0; i < 5; i = i+1)
        begin : f3
            CSAdder130 CSAdder130_f3(
                .a(pd2[3*i]),
                .b(pd2[3*i+1]),
                .c(pd2[3*i+2]),

                .result1(pd3_t[2*i]),
                .result2(pd3_t[2*i+1])
            );
        end
    endgenerate
/*     assign pd3_t[14] = pd2[21]; */

    generate for(i = 0; i < 10; i = i+1)
        begin : reg_f3
            Reg #(130, 130'h0) reg_pd3(
                .clk(clk),
                .rst(rst),
                .din(pd3_t[i]),
                .dout(pd3[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 4: 10 partial products, 3 csadder, 0 full-adder, left 1
       Generate 7 partial products */
    wire[129:0] pd4[0:6];
    wire[129:0] pd4_t[0:6];
    generate for(i = 0; i < 3; i = i+1)
        begin : f4
            CSAdder130 CSAdder130_f4(
                .a(pd3[3*i]),
                .b(pd3[3*i+1]),
                .c(pd3[3*i+2]),

                .result1(pd4_t[2*i]),
                .result2(pd4_t[2*i+1])
            );
        end
    endgenerate
    assign pd4_t[6] = pd3[9];

    generate for(i = 0; i < 7; i = i+1)
        begin : reg_f4
            Reg #(130, 130'h0) reg_pd4(
                .clk(clk),
                .rst(rst),
                .din(pd4_t[i]),
                .dout(pd4[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 5: 7 partial products, 2 csadder, 0 full-adder, left 1
       Generate 5 partial products */
    wire[129:0] pd5[0:4];
    wire[129:0] pd5_t[0:4];
    generate for(i = 0; i < 2; i = i+1)
        begin : f5
            CSAdder130 CSAdder130_f5(
                .a(pd4[3*i]),
                .b(pd4[3*i+1]),
                .c(pd4[3*i+2]),

                .result1(pd5_t[2*i]),
                .result2(pd5_t[2*i+1])
            );
        end
    endgenerate
    assign pd5_t[4] = pd4[6];

    generate for(i = 0; i < 5; i = i+1)
        begin : reg_f5
            Reg #(130, 130'h0) reg_pd5(
                .clk(clk),
                .rst(rst),
                .din(pd5_t[i]),
                .dout(pd5[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 6: 5 partial products, 1 csadder, 1 full-adder, left 0
       Generate 3 partial products */
    wire[129:0] pd6[0:2];
    wire[129:0] pd6_t[0:2];
    generate for(i = 0; i < 1; i = i+1)
        begin : f6
            CSAdder130 CSAdder130_f6(
                .a(pd5[3*i]),
                .b(pd5[3*i+1]),
                .c(pd5[3*i+2]),

                .result1(pd6_t[2*i]),
                .result2(pd6_t[2*i+1])
            );
        end
    endgenerate
    assign pd6_t[2] = pd5[3] + pd5[4];

    generate for(i = 0; i < 3; i = i+1)
        begin : reg_f7
            Reg #(130, 130'h0) reg_pd6(
                .clk(clk),
                .rst(rst),
                .din(pd6_t[i]),
                .dout(pd6[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 7: 3 partial products, 1 csadder, 0 full-adder, left 0
       Generate 2 partial products */
    wire[129:0] pd7[0:1];
    wire[129:0] pd7_t[0:1];
    generate for(i = 0; i < 1; i = i+1)
        begin : f7
            CSAdder130 CSAdder130_f7(
                .a(pd6[3*i]),
                .b(pd6[3*i+1]),
                .c(pd6[3*i+2]),

                .result1(pd7_t[2*i]),
                .result2(pd7_t[2*i+1])
            );
        end
    endgenerate
/*     assign pd7_t[2] = pd6[3] + pd6[4]; */

    generate for(i = 0; i < 2; i = i+1)
        begin : reg_f7
            Reg #(130, 130'h0) reg_pd7(
                .clk(clk),
                .rst(rst),
                .din(pd7_t[i]),
                .dout(pd7[i]),
                .wen(reg_wen)
            );
        end
    endgenerate

    /* Layer 8: 2 partial products, 0 csadder, 1 full-adder, left 0
       Generate 1 partial products */
/* verilator lint_off UNUSED */ 
    wire[129:0] pd8;
    wire[129:0] pd8_t;
    assign pd8_t = pd7[0] + pd7[1];

    Reg #(130, 130'h0) reg_pd8(
        .clk(clk),
        .rst(rst),
        .din(pd8_t),
        .dout(pd8),
        .wen(reg_wen)
    );

/* result_l_o result_h_o */
    assign result_l_o = pd8[63:0];
    assign result_h_o = pd8[127:64];
/* verilator lint_on UNUSED */
/* FSM */
    wire[3:0]   pre_state;
    wire[3:0]   next_state;

    Reg #(4, 4'd0) reg_pre_state (clk, rst, next_state, pre_state, 1'b1);
    assign next_state = (block_i==1'b1) ? 4'd0 : 
                        (pre_state==4'd0) ? (req_valid_i==1'b1) ? 4'd1 : 4'd0 : 
                        (pre_state==4'd9) ? 4'd0 : pre_state + 4'd1;

/* ready_o */
    assign ready_o = (pre_state==4'd0) ? (req_valid_i==1'b1) ? 1'b0 : 1'b1 : 
                     (pre_state==4'd8) ? 1'b1 : 
                     (pre_state==4'd9) ? 1'b1 : 1'b0;

/* valid_o */
    assign valid_o = (pre_state==4'd0) ? (req_valid_i==1'b1) ? 1'b0 : 1'b1 : 
                     (pre_state==4'd9) ? 1'b1 : 1'b0;

	initial begin
		$dumpfile("logs/vlt_dump.vcd");
		$dumpvars();
	end

endmodule
