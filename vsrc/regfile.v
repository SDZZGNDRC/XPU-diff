//本模块定义了 XPU_v0.1 中的32个通用寄存器,并实现了相关的的读写操作
//功能: 本模块支持1个写端口,2个读端口
//
//输入: clk 时钟信号
//      rst 复位端
//      we_i 写使能信号
//      waddr_i 写地址
//      wdata_i 写数据
//      re1_i 读端口1使能信号
//      raddr1_i 读端口1地址
//      re2_i 读端口2使能信号
//      raddr2_i 读端口2地址
//
//输出: rdata1_o 读端口1数据
//      rdata2_o 读端口2数据
`include "defines.v"
(* DONT_TOUCH= "true" *)
module REGFILE
(
	input wire clk,
	input wire rst,
	
	//Write port
	input wire we_i,
	input wire [`RegAddrBus] waddr_i,
	input wire [`RegBus] wdata_i,
	
    //Read port
/*     input       ren_i; */
    input [`RegAddrBus] raddr_i,
    output  wire [`RegBus]  rdata_o,
    output  wire [`RegBus]  diff_reg_o[0:`RegNum-1]

/* 	//Read port 1
	input wire re1_i,
	input wire[`RegAddrBus] raddr1_i,
	output reg[`RegBus] rdata1_o,
	
	//Read port 2
	input wire re2_i,
	input wire[`RegAddrBus] raddr2_i,
	output reg[`RegBus] rdata2_o, */

	//DEBUG port
	//output reg [`DEBUG_led_bus] debug_led_o
);
    wire [`RegBus] out_x1;
    wire [`RegBus] out_x2;
    wire [`RegBus] out_x3;
    wire [`RegBus] out_x4;
    wire [`RegBus] out_x5;
    wire [`RegBus] out_x6;
    wire [`RegBus] out_x7;
    wire [`RegBus] out_x8;
    wire [`RegBus] out_x9;
    wire [`RegBus] out_x10;
    wire [`RegBus] out_x11;
    wire [`RegBus] out_x12;
    wire [`RegBus] out_x13;
    wire [`RegBus] out_x14;
    wire [`RegBus] out_x15;
    wire [`RegBus] out_x16;
    wire [`RegBus] out_x17;
    wire [`RegBus] out_x18;
    wire [`RegBus] out_x19;
    wire [`RegBus] out_x20;
    wire [`RegBus] out_x21;
    wire [`RegBus] out_x22;
    wire [`RegBus] out_x23;
    wire [`RegBus] out_x24;
    wire [`RegBus] out_x25;
    wire [`RegBus] out_x26;
    wire [`RegBus] out_x27;
    wire [`RegBus] out_x28;
    wire [`RegBus] out_x29;
    wire [`RegBus] out_x30;
    wire [`RegBus] out_x31;

    wire wen_x1;
    wire wen_x2;
    wire wen_x3;
    wire wen_x4;
    wire wen_x5;
    wire wen_x6;
    wire wen_x7;
    wire wen_x8;
    wire wen_x9;
    wire wen_x10;
    wire wen_x11;
    wire wen_x12;
    wire wen_x13;
    wire wen_x14;
    wire wen_x15;
    wire wen_x16;
    wire wen_x17;
    wire wen_x18;
    wire wen_x19;
    wire wen_x20;
    wire wen_x21;
    wire wen_x22;
    wire wen_x23;
    wire wen_x24;
    wire wen_x25;
    wire wen_x26;
    wire wen_x27;
    wire wen_x28;
    wire wen_x29;
    wire wen_x30;
    wire wen_x31;

    Reg #(64, 64'b0) x1 (clk, rst, wdata_i, out_x1, wen_x1);
    Reg #(64, 64'b0) x2 (clk, rst, wdata_i, out_x2, wen_x2);
    Reg #(64, 64'b0) x3 (clk, rst, wdata_i, out_x3, wen_x3);
    Reg #(64, 64'b0) x4 (clk, rst, wdata_i, out_x4, wen_x4);
    Reg #(64, 64'b0) x5 (clk, rst, wdata_i, out_x5, wen_x5);
    Reg #(64, 64'b0) x6 (clk, rst, wdata_i, out_x6, wen_x6);
    Reg #(64, 64'b0) x7 (clk, rst, wdata_i, out_x7, wen_x7);
    Reg #(64, 64'b0) x8 (clk, rst, wdata_i, out_x8, wen_x8);
    Reg #(64, 64'b0) x9 (clk, rst, wdata_i, out_x9, wen_x9);
    Reg #(64, 64'b0) x10 (clk, rst, wdata_i, out_x10, wen_x10);
    Reg #(64, 64'b0) x11 (clk, rst, wdata_i, out_x11, wen_x11);
    Reg #(64, 64'b0) x12 (clk, rst, wdata_i, out_x12, wen_x12);
    Reg #(64, 64'b0) x13 (clk, rst, wdata_i, out_x13, wen_x13);
    Reg #(64, 64'b0) x14 (clk, rst, wdata_i, out_x14, wen_x14);
    Reg #(64, 64'b0) x15 (clk, rst, wdata_i, out_x15, wen_x15);
    Reg #(64, 64'b0) x16 (clk, rst, wdata_i, out_x16, wen_x16);
    Reg #(64, 64'b0) x17 (clk, rst, wdata_i, out_x17, wen_x17);
    Reg #(64, 64'b0) x18 (clk, rst, wdata_i, out_x18, wen_x18);
    Reg #(64, 64'b0) x19 (clk, rst, wdata_i, out_x19, wen_x19);
    Reg #(64, 64'b0) x20 (clk, rst, wdata_i, out_x20, wen_x20);
    Reg #(64, 64'b0) x21 (clk, rst, wdata_i, out_x21, wen_x21);
    Reg #(64, 64'b0) x22 (clk, rst, wdata_i, out_x22, wen_x22);
    Reg #(64, 64'b0) x23 (clk, rst, wdata_i, out_x23, wen_x23);
    Reg #(64, 64'b0) x24 (clk, rst, wdata_i, out_x24, wen_x24);
    Reg #(64, 64'b0) x25 (clk, rst, wdata_i, out_x25, wen_x25);
    Reg #(64, 64'b0) x26 (clk, rst, wdata_i, out_x26, wen_x26);
    Reg #(64, 64'b0) x27 (clk, rst, wdata_i, out_x27, wen_x27);
    Reg #(64, 64'b0) x28 (clk, rst, wdata_i, out_x28, wen_x28);
    Reg #(64, 64'b0) x29 (clk, rst, wdata_i, out_x29, wen_x29);
    Reg #(64, 64'b0) x30 (clk, rst, wdata_i, out_x30, wen_x30);
    Reg #(64, 64'b0) x31 (clk, rst, wdata_i, out_x31, wen_x31);

    assign wen_x1 = we_i & (waddr_i == 5'b00001);
    assign wen_x2 = we_i & (waddr_i == 5'b00010);
    assign wen_x3 = we_i & (waddr_i == 5'b00011);
    assign wen_x4 = we_i & (waddr_i == 5'b00100);
    assign wen_x5 = we_i & (waddr_i == 5'b00101);
    assign wen_x6 = we_i & (waddr_i == 5'b00110);
    assign wen_x7 = we_i & (waddr_i == 5'b00111);
    assign wen_x8 = we_i & (waddr_i == 5'b01000);
    assign wen_x9 = we_i & (waddr_i == 5'b01001);
    assign wen_x10 = we_i & (waddr_i == 5'b01010);
    assign wen_x11 = we_i & (waddr_i == 5'b01011);
    assign wen_x12 = we_i & (waddr_i == 5'b01100);
    assign wen_x13 = we_i & (waddr_i == 5'b01101);
    assign wen_x14 = we_i & (waddr_i == 5'b01110);
    assign wen_x15 = we_i & (waddr_i == 5'b01111);
    assign wen_x16 = we_i & (waddr_i == 5'b10000);
    assign wen_x17 = we_i & (waddr_i == 5'b10001);
    assign wen_x18 = we_i & (waddr_i == 5'b10010);
    assign wen_x19 = we_i & (waddr_i == 5'b10011);
    assign wen_x20 = we_i & (waddr_i == 5'b10100);
    assign wen_x21 = we_i & (waddr_i == 5'b10101);
    assign wen_x22 = we_i & (waddr_i == 5'b10110);
    assign wen_x23 = we_i & (waddr_i == 5'b10111);
    assign wen_x24 = we_i & (waddr_i == 5'b11000);
    assign wen_x25 = we_i & (waddr_i == 5'b11001);
    assign wen_x26 = we_i & (waddr_i == 5'b11010);
    assign wen_x27 = we_i & (waddr_i == 5'b11011);
    assign wen_x28 = we_i & (waddr_i == 5'b11100);
    assign wen_x29 = we_i & (waddr_i == 5'b11101);
    assign wen_x30 = we_i & (waddr_i == 5'b11110);
    assign wen_x31 = we_i & (waddr_i == 5'b11111);

    wire [`RegBus] rdata_t;
    assign rdata_o = ({64{((wen_i == 1'b1) && (waddr_i == raddr_i))}} & wdata_i)
                    | rdata_t;
    MuxKeyWithDefault #(31, 5, 64) mux1 (rdata_t, raddr_i, 64'b0, {
        5'b00001, out_x1,
        5'b00010, out_x2,
        5'b00011, out_x3,
        5'b00100, out_x4,
        5'b00101, out_x5,
        5'b00110, out_x6,
        5'b00111, out_x7,
        5'b01000, out_x8,
        5'b01001, out_x9,
        5'b01010, out_x10,
        5'b01011, out_x11,
        5'b01100, out_x12,
        5'b01101, out_x13,
        5'b01110, out_x14,
        5'b01111, out_x15,
        5'b10000, out_x16,
        5'b10001, out_x17,
        5'b10010, out_x18,
        5'b10011, out_x19,
        5'b10100, out_x20,
        5'b10101, out_x21,
        5'b10110, out_x22,
        5'b10111, out_x23,
        5'b11000, out_x24,
        5'b11001, out_x25,
        5'b11010, out_x26,
        5'b11011, out_x27,
        5'b11100, out_x28,
        5'b11101, out_x29,
        5'b11110, out_x30,
        5'b11111, out_x31
    });

    assign diff_reg_o[0] = 64'b0;
    assign diff_reg_o[1] = out_x1;
    assign diff_reg_o[2] = out_x2;
    assign diff_reg_o[3] = out_x3;
    assign diff_reg_o[4] = out_x4;
    assign diff_reg_o[5] = out_x5;
    assign diff_reg_o[6] = out_x6;
    assign diff_reg_o[7] = out_x7;
    assign diff_reg_o[8] = out_x8;
    assign diff_reg_o[9] = out_x9;
    assign diff_reg_o[10] = out_x10;
    assign diff_reg_o[11] = out_x11;
    assign diff_reg_o[12] = out_x12;
    assign diff_reg_o[13] = out_x13;
    assign diff_reg_o[14] = out_x14;
    assign diff_reg_o[15] = out_x15;
    assign diff_reg_o[16] = out_x16;
    assign diff_reg_o[17] = out_x17;
    assign diff_reg_o[18] = out_x18;
    assign diff_reg_o[19] = out_x19;
    assign diff_reg_o[20] = out_x20;
    assign diff_reg_o[21] = out_x21;
    assign diff_reg_o[22] = out_x22;
    assign diff_reg_o[23] = out_x23;
    assign diff_reg_o[24] = out_x24;
    assign diff_reg_o[25] = out_x25;
    assign diff_reg_o[26] = out_x26;
    assign diff_reg_o[27] = out_x27;
    assign diff_reg_o[28] = out_x28;
    assign diff_reg_o[29] = out_x29;
    assign diff_reg_o[30] = out_x30;
    assign diff_reg_o[31] = out_x31;

/* 	reg[`RegBus] regs[0:`RegNum-1];//小端设计 */

/* 	//Write Action
	always @(posedge clk) begin
		if(rst == `RstDisable) begin
			if((we_i == `WriteEnable) && (waddr_i != `RegNumLog2'h0)) begin
				regs[waddr_i] <= wdata_i;
			end else begin
				//regs[waddr_i] <= `Doubel_Zero_Word;
			end
		end
	end */
	
/* 	//Read Action 1
	always @(*) begin
		if(rst == `RstEnable) begin
			rdata1_o <= `Doubel_Zero_Word;
		end else if(raddr1_i == `RegNumLog2'h0) begin
			rdata1_o <= `Doubel_Zero_Word;
		end else if((re1_i == `ReadEnable) && (we_i == `WriteEnable) && (raddr1_i == waddr_i)) begin
			rdata1_o <= wdata_i;
		end else if(re1_i == `ReadEnable) begin
			rdata1_o <= regs[raddr1_i];
		end else begin
			rdata1_o <= `Doubel_Zero_Word;
		end
	end
	
	//Read Action 2
	always @(*) begin
		if(rst == `RstEnable) begin
			rdata2_o <= `Doubel_Zero_Word;
		end else if(raddr2_i == `RegNumLog2'h0) begin
			rdata2_o <= `Doubel_Zero_Word;
		end else if((re2_i == `ReadEnable) && (we_i == `WriteEnable) && (raddr2_i == waddr_i)) begin
			rdata2_o <= wdata_i;
		end else if(re2_i == `ReadEnable) begin
			rdata2_o <= regs[raddr2_i];
		end else begin
			rdata2_o <= `Doubel_Zero_Word;
		end
	end */

endmodule