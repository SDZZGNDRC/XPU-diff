// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(dcache_ready_i,0,0);
    VL_IN8(icache_data_valid_i,0,0);
    VL_IN8(dcache_data_valid_i,0,0);
    VL_OUT8(icache_req_valid_o,0,0);
    VL_OUT8(dcache_req_valid_o,0,0);
    VL_OUT8(icache_wen_o,0,0);
    VL_OUT8(dcache_wen_o,0,0);
    VL_OUT8(dcache_wlen_o,1,0);
    VL_IN(icache_data_i,31,0);
    VL_IN64(dcache_data_i,63,0);
    VL_OUT64(icache_addr_o,63,0);
    VL_OUT64(dcache_addr_o,63,0);
    VL_OUT64(dcache_wdata_o,63,0);
    VL_OUT64(diff_if_id_to_id_pc_o,63,0);
    VL_OUT64(diff_id_to_id_ex_pc_o,63,0);
    VL_OUT64(diff_id_ex_to_ex_pc_o,63,0);
    VL_OUT64(diff_ex_to_ex_mem_pc_o,63,0);
    VL_OUT64(diff_ex_mem_to_mem_pc_o,63,0);
    VL_OUT64(diff_mem_to_mem_wb_pc_o,63,0);
    VL_OUT64(diff_mem_wb_pc_o,63,0);
    VL_OUT64(diff_regs_o[32],63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ top__DOT__id_ex_to_ex_rs1_addr;
        CData/*4:0*/ top__DOT__id_ex_to_ex_rs2_addr;
        CData/*4:0*/ top__DOT__id_ex_to_ex_rd_addr;
        CData/*4:0*/ top__DOT__ex_mem_to_mem_rd_addr;
        CData/*6:0*/ top__DOT__id_ex_to_ex_opcode;
        CData/*2:0*/ top__DOT__id_ex_to_ex_funct3;
        CData/*6:0*/ top__DOT__id_ex_to_ex_funct7;
        CData/*6:0*/ top__DOT__ex_mem_to_mem_opcode;
        CData/*2:0*/ top__DOT__ex_mem_to_mem_funct3;
        CData/*0:0*/ top__DOT__id_to_id_ex_wreg;
        CData/*0:0*/ top__DOT__id_ex_to_ex_wreg;
        CData/*0:0*/ top__DOT__id_ex_to_ex_csr_wreg;
        CData/*0:0*/ top__DOT__ex_mem_to_mem_wreg;
        CData/*0:0*/ top__DOT__ex_mem_to_mem_csr_wreg;
        CData/*0:0*/ top__DOT__id_ex_to_ex_imm_sel;
        CData/*0:0*/ top__DOT__mem_wb_to_regfile_we;
        CData/*4:0*/ top__DOT__mem_wb_to_regfile_waddr;
        CData/*0:0*/ top__DOT__mem_wb_to_csr_we;
        CData/*1:0*/ top__DOT__ctrl_to_pc_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_if_id_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_id_ex_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_ex_mem_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_mem_wb_ctrl_signal;
        CData/*0:0*/ top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__if_id0__DOT__state;
        CData/*0:0*/ top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__id0__DOT__dcache_wlen_t_load;
        CData/*1:0*/ top__DOT__id0__DOT__dcache_wlen_t_store;
        CData/*0:0*/ top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__csr0__DOT__wen_mcause;
        CData/*0:0*/ top__DOT__csr0__DOT__wen_mie;
        CData/*0:0*/ top__DOT__csr0__DOT__wen_mip;
        CData/*0:0*/ top__DOT__csr0__DOT__wen_mstatus;
        CData/*0:0*/ top__DOT__csr0__DOT__out_mcause_interrupt;
        CData/*4:0*/ top__DOT__csr0__DOT__out_mcause_code;
        CData/*0:0*/ top__DOT__csr0__DOT__out_mie_mtie;
        CData/*0:0*/ top__DOT__csr0__DOT__out_mie_msie;
        CData/*0:0*/ top__DOT__csr0__DOT__out_mip_mtip;
        CData/*0:0*/ top__DOT__csr0__DOT__out_mip_msip;
        CData/*0:0*/ top__DOT__csr0__DOT__out_mstatus_ie1;
        CData/*0:0*/ top__DOT__csr0__DOT__out_mstatus_ie;
        CData/*0:0*/ top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ex0__DOT__branch_flag_t;
        CData/*0:0*/ top__DOT__ex0__DOT__branch_flag_t_beq;
        CData/*0:0*/ top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__ctrl0__DOT__FSM_next_state;
        CData/*3:0*/ top__DOT__ctrl0__DOT__FSM_next_state_t;
    };
    struct {
        CData/*3:0*/ top__DOT__ctrl0__DOT__FSM_pre_state_t;
        CData/*1:0*/ top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1;
        CData/*1:0*/ top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1;
        CData/*1:0*/ top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1;
        CData/*3:0*/ top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit;
        SData/*11:0*/ top__DOT__id_ex_to_ex_csr_raddr;
        SData/*11:0*/ top__DOT__id_ex_to_ex_csr_waddr;
        SData/*11:0*/ top__DOT__ex_mem_to_mem_csr_waddr;
        SData/*11:0*/ top__DOT__mem_wb_to_csr_waddr;
        SData/*11:0*/ top__DOT__id0__DOT__dcache_addr_offset_store;
        IData/*31:0*/ top__DOT__if_id_to_id_inst;
        IData/*19:0*/ top__DOT__id_to_id_ex_imm;
        IData/*19:0*/ top__DOT__id_ex_to_ex_imm;
        IData/*19:0*/ top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__ex0__DOT__wdata_addiw;
        QData/*63:0*/ top__DOT__if_id_to_id_pc;
        QData/*63:0*/ top__DOT__id_ex_to_ex_pc;
        QData/*63:0*/ top__DOT__ex_mem_to_mem_pc;
        QData/*63:0*/ top__DOT__csr_to_id_csr_data;
        QData/*63:0*/ top__DOT__id_to_id_ex_rs1_data;
        QData/*63:0*/ top__DOT__id_ex_to_ex_rs1_data;
        QData/*63:0*/ top__DOT__id_to_id_ex_rs2_data;
        QData/*63:0*/ top__DOT__id_ex_to_ex_rs2_data;
        QData/*63:0*/ top__DOT__id_ex_to_ex_csr_data;
        QData/*63:0*/ top__DOT__mem_wb_to_regfile_wdata;
        QData/*63:0*/ top__DOT__mem_wb_to_csr_wdata;
        QData/*63:0*/ top__DOT__ex_mem_to_mem_wdata;
        QData/*63:0*/ top__DOT__ex_mem_to_mem_csr_wdata;
        QData/*63:0*/ top__DOT__mem_to_mem_wb_wdata;
        QData/*63:0*/ top__DOT__ex_to_ctrl_pc_new;
        QData/*63:0*/ top__DOT__pc_to_if_id_pc;
        QData/*63:0*/ top__DOT__pc0__DOT__pc_ram_t;
        QData/*63:0*/ top__DOT__pc0__DOT__pc_pipeline_t;
        QData/*63:0*/ top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__if_id0__DOT__pc_t;
        QData/*63:0*/ top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x1;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x2;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x3;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x4;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x5;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x6;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x7;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x8;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x9;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x10;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x11;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x12;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x13;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x14;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x15;
    };
    struct {
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x16;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x17;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x18;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x19;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x20;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x21;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x22;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x23;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x24;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x25;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x26;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x27;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x28;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x29;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x30;
        QData/*63:0*/ top__DOT__regfile0__DOT__out_x31;
        QData/*63:0*/ top__DOT__regfile0__DOT__rdata1_t;
        QData/*63:0*/ top__DOT__regfile0__DOT__rdata2_t;
        QData/*63:0*/ top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__csr0__DOT__out_mtval;
        QData/*63:0*/ top__DOT__csr0__DOT__out_mscratch;
        QData/*61:0*/ top__DOT__csr0__DOT__out_mepc_H62;
        QData/*63:0*/ top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ex0__DOT__rs1_data;
        QData/*63:0*/ top__DOT__ex0__DOT__rs2_data;
        QData/*63:0*/ top__DOT__ex0__DOT__csr_data;
        QData/*63:0*/ top__DOT__ex0__DOT__wdata_t;
        QData/*63:0*/ top__DOT__ex0__DOT__csr_wdata_t;
        QData/*63:0*/ top__DOT__ex0__DOT__wdata_opcode_R;
        QData/*63:0*/ top__DOT__ex0__DOT__wdata_funct3_add_sub_mul;
        QData/*63:0*/ top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__mem0__DOT__wdata_t_load;
        QData/*63:0*/ top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 2> top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 4> top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 7> top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 7> top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 4> top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 2> top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*26:0*/, 4> top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 4> top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<IData/*19:0*/, 4> top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 31> top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 31> top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 31> top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 31> top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 31> top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 31> top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*75:0*/, 14> top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 14> top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 14> top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 5> top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 5> top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 2> top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 6> top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 6> top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 1> top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 1> top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 7> top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 7> top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 3> top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 3> top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 3> top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 3> top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 3> top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<5>/*131:0*/ top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4;
    VlWide<5>/*131:0*/ top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4;
    VlWide<9>/*267:0*/ top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4;
    VlWide<4>/*107:0*/ top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4;
    VlWide<67>/*2138:0*/ top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4;
    VlWide<67>/*2138:0*/ top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4;
    VlWide<34>/*1063:0*/ top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4;
    VlWide<12>/*354:0*/ top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4;
    VlWide<7>/*200:0*/ top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4;
    VlWide<5>/*141:0*/ top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4;
    VlWide<13>/*401:0*/ top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4;
    VlWide<15>/*468:0*/ top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4;
    IData/*23:0*/ top__DOT__ctrl0__DOT____Vcellinp__mux1____pinNumber4;
    VlUnpacked<QData/*63:0*/, 32> top__DOT____Vcellout__regfile0__diff_reg_o;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
