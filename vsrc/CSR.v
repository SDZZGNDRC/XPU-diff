`include "defines.v"
(* DONT_TOUCH= "true" *)
module CSR
(
	input wire clk,
	input wire rst,

	//Write port
	input wire we_i,
	input wire [`CSRAddrBus] waddr_i,
	input wire [`RegBus] wdata_i,

/* Write port mepc */
	input wire we_mepc_i,
	input wire [`CSRAddrBus] waddr_mepc_i,
	input wire [`RegBus] wdata_mepc_i,

/* Write port mcause */
	input wire we_mcause_i,
	input wire [`CSRAddrBus] waddr_mcause_i,
	input wire [`RegBus] wdata_mcause_i,

/* Disable MIE */
    input wire disable_mie_req_i,

    //Read ports
    input [`CSRAddrBus] raddr_i,
    output  wire [`RegBus]  rdata_o/* ,

    output  wire [`RegBus]  diff_csr_o[0:`RegNum-1] */
);
    wire [`RegBus] out_marchid;
    wire [`RegBus] out_mtval;
    wire [`RegBus] out_mcause;
    wire [`RegBus] out_mcpuid;
    wire [`RegBus] out_mepc;
    wire [`RegBus] out_mhartid;
    wire [`RegBus] out_mimpid;
    wire [`RegBus] out_mie;
    wire [`RegBus] out_mip;
    wire [`RegBus] out_misa;
    wire [`RegBus] out_mscratch;
    wire [`RegBus] out_mstatus;
/*     wire [`RegBus] out_mtime;
    wire [`RegBus] out_mtimecmp; */
    wire [`RegBus] out_mtvec;
    wire [`RegBus] out_mvendorid;

    wire  wen_mtval;
    wire  wen_mcause;
    wire  wen_mepc;
    wire  wen_mie;
    wire  wen_mip;
    wire  wen_mscratch;
    wire  wen_mstatus;
/*     wire  wen_mtime;
    wire  wen_mtimecmp; */

/* marchid */
    assign out_marchid = `CSR_Hardwire_marchid;

/* mtval */
    Reg #(64, `CSR_Reset_mtval) reg_mtval (clk, rst, wdata_i, out_mtval, wen_mtval);
    assign wen_mtval = we_i & {1{(waddr_i == `CSR_Addr_mtval)}};

/* mcause */
    wire out_mcause_interrupt;
    wire [4:0] out_mcause_code;
    Reg #(1, `CSR_Reset_mcause_interrupt) reg_mcause_interrupt (clk, rst, wdata_i[63], out_mcause_interrupt, wen_mcause);
    Reg #(5, `CSR_Reset_mcause_code) reg_mcause_code (clk, rst, wdata_i[4:0], out_mcause_code, wen_mcause);
    assign out_mcause = {out_mcause_interrupt, 58'h0, out_mcause_code};
    assign wen_mcause = we_i & {1{(waddr_i == `CSR_Addr_mcause)}};

/* mcpuid */
    assign out_mcpuid = `CSR_Hardwire_mcpuid;

/* mepc */
    wire[61:0] out_mepc_H62;
    Reg #(62, `CSR_Reset_mepc_H62) reg_mepc_H62 (clk, rst, wdata_i[63:2], out_mepc_H62, wen_mepc);
    assign out_mepc = {out_mepc_H62, 2'b00};
    assign wen_mepc = we_i & {1{(waddr_i == `CSR_Addr_mepc)}};

/* mhartid */
    assign out_mhartid = `CSR_Hardwire_mhartid;

/* mimpid */
    assign out_mimpid = `CSR_Hardwire_mimpid;

/* mie */
    wire out_mie_mtie;
    wire out_mie_msie;
    Reg #(1, `CSR_Reset_mie_mtie) reg_mie_mtie (clk, rst, wdata_i[7], out_mie_mtie, wen_mie);
    Reg #(1, `CSR_Reset_mie_msie) reg_mie_msie (clk, rst, wdata_i[3], out_mie_msie, wen_mie);
    assign out_mie = {56'h0, out_mie_mtie, 3'h0, out_mie_msie, 3'h0};
    assign wen_mie = we_i & {1{(waddr_i == `CSR_Addr_mie)}};

/* mip */
    wire out_mip_mtip;
    wire out_mip_msip;
    Reg #(1, `CSR_Reset_mip_mtip) reg_mip_mtip (clk, rst, wdata_i[7], out_mip_mtip, wen_mip);
    Reg #(1, `CSR_Reset_mip_msip) reg_mip_msip (clk, rst, wdata_i[2], out_mip_msip, wen_mip);
    assign out_mip = {56'h0, out_mip_mtip, 3'h0, out_mip_msip, 3'h0};
    assign wen_mip = we_i & {1{(waddr_i == `CSR_Addr_mip)}};

/* misa */
    assign out_misa = `CSR_Hardwire_misa;

/* mscratch */
    Reg #(64, `CSR_Reset_mscratch) reg_mscratch (clk, rst, wdata_i, out_mscratch, wen_mscratch);
    assign wen_mscratch = we_i & {1{(waddr_i == `CSR_Addr_mscratch)}};

/* mstatus */
    wire out_mstatus_ie1;
    wire out_mstatus_ie;
    Reg #(1, `CSR_Reset_mstatus_ie1) reg_mstatus_ie1 (clk, rst, wdata_i[3], out_mstatus_ie1, wen_mstatus);
    Reg #(1, `CSR_Reset_mstatus_ie) reg_mstatus_ie (clk, rst, wdata_i[0], out_mstatus_ie, wen_mstatus);
    assign out_mstatus = {58'h0, 2'h0, out_mstatus_ie1, 2'h0, out_mstatus_ie};
    assign wen_mstatus = we_i & {1{(waddr_i == `CSR_Addr_mstatus)}};

/* mtime */
/*     Reg #(64, `CSR_Reset_mtime) reg_mtime (clk, rst, wdata_i, out_mtime, wen_mtime);
    assign wen_mtime = we_i & {1{(waddr_i == `CSR_Addr_mstatus)}}; */

/* mtimecmp */
/*     wire [`HalfRegBus] out_mtimecmp_L32;
    Reg #(32, `CSR_Reset_mtimecmp_L32) reg_mtimecmp_L32 (clk, rst, wdata_i[31:0], out_mtimecmp_L32, wen_mtimecmp);
    assign out_mtimecmp = {32'h0, out_mtimecmp_L32};
    assign wen_mtimecmp = we_i & {1{(waddr_i == `CSR_Addr_mtimecmp)}}; */

/* mtvec */
    assign out_mtvec = `CSR_Hardwire_mtvec;

/* mvendorid */
    assign out_mvendorid = `CSR_Hardwire_mvendorid;

/* rdata_o */
    MuxKeyWithDefault #(14, `CSRAddrLen, 64) mux1 (rdata_o, raddr_i, `Doubel_Zero_Word, {
        `CSR_Addr_marchid, out_marchid,
        `CSR_Addr_mcpuid, out_mcpuid,
        `CSR_Addr_mcause, out_mcause,
        `CSR_Addr_mepc, out_mepc,
        `CSR_Addr_mhartid, out_mhartid,
        `CSR_Addr_mie, out_mie,
        `CSR_Addr_mimpid, out_mimpid,
        `CSR_Addr_mip, out_mip,
        `CSR_Addr_misa, out_misa,
        `CSR_Addr_mscratch, out_mscratch,
        `CSR_Addr_mstatus, out_mstatus,
/*         `CSR_Addr_mtime, out_mtime,
        `CSR_Addr_mtimecmp, out_mtimecmp, */
        `CSR_Addr_mtval, out_mtval,
        `CSR_Addr_mtvec, out_mtvec,
        `CSR_Addr_mvendorid, out_mvendorid
    });

endmodule
