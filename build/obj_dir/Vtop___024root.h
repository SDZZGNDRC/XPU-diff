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
    VL_IN8(icache_data_valid_i,0,0);
    VL_OUT8(icache_req_valid_o,0,0);
    VL_OUT8(icache_data_wen_o,0,0);
    VL_IN(icache_data_i,31,0);
    VL_OUT64(icache_addr_o,63,0);
    VL_OUT64(diff_if_id_to_id_pc_o,63,0);
    VL_OUT64(diff_id_to_id_ex_pc_o,63,0);
    VL_OUT64(diff_id_ex_to_ex_pc_o,63,0);
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
        CData/*0:0*/ top__DOT__id_to_id_ex_wreg;
        CData/*0:0*/ top__DOT__id_ex_to_ex_wreg;
        CData/*0:0*/ top__DOT__ex_mem_to_mem_wreg;
        CData/*0:0*/ top__DOT__id_ex_to_ex_imm_sel;
        CData/*0:0*/ top__DOT__mem_wb_to_regfile_we;
        CData/*4:0*/ top__DOT__mem_wb_to_regfile_waddr;
        CData/*1:0*/ top__DOT__ctrl_to_pc_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_if_id_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_id_ex_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_ex_mem_ctrl_signal;
        CData/*1:0*/ top__DOT__ctrl_to_mem_wb_ctrl_signal;
        CData/*0:0*/ top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__if_id0__DOT__state;
        CData/*0:0*/ top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ex0__DOT__branch_flag_t;
        CData/*0:0*/ top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__ctrl0__DOT__FSM_next_state;
        CData/*3:0*/ top__DOT__ctrl0__DOT__FSM_next_state_1;
        CData/*3:0*/ top__DOT__ctrl0__DOT__FSM_next_state_t;
        CData/*3:0*/ top__DOT__ctrl0__DOT__FSM_pre_state_t;
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
        IData/*31:0*/ top__DOT__if_id_to_id_inst;
        IData/*19:0*/ top__DOT__id_to_id_ex_imm;
        IData/*19:0*/ top__DOT__id_ex_to_ex_imm;
        IData/*19:0*/ top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__ex0__DOT__wdata_addiw;
        QData/*63:0*/ top__DOT__if_id_to_id_pc;
        QData/*63:0*/ top__DOT__id_ex_to_ex_pc;
        QData/*63:0*/ top__DOT__id_ex_to_ex_rs1_data;
        QData/*63:0*/ top__DOT__id_ex_to_ex_rs2_data;
        QData/*63:0*/ top__DOT__mem_wb_to_regfile_wdata;
        QData/*63:0*/ top__DOT__ex_mem_to_mem_wdata;
        QData/*63:0*/ top__DOT__ex_to_ctrl_pc_new;
        QData/*63:0*/ top__DOT__pc_to_if_id_pc;
        QData/*63:0*/ top__DOT__pc0__DOT__pc_ram_t;
        QData/*63:0*/ top__DOT__pc0__DOT__pc_pipeline_t;
        QData/*63:0*/ top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out;
    };
    struct {
        QData/*63:0*/ top__DOT__if_id0__DOT__pc_t;
        QData/*63:0*/ top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out;
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
        QData/*63:0*/ top__DOT__ex0__DOT__rs1_data;
        QData/*63:0*/ top__DOT__ex0__DOT__rs2_data;
        QData/*63:0*/ top__DOT__ex0__DOT__wdata_t;
        QData/*63:0*/ top__DOT__ex0__DOT__wdata_opcode_R;
        QData/*63:0*/ top__DOT__ex0__DOT__wdata_funct3_add_sub_mul;
        QData/*63:0*/ top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 2> top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*26:0*/, 3> top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 3> top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*19:0*/, 3> top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 31> top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 31> top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 31> top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 31> top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*4:0*/, 31> top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 31> top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 4> top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 4> top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 2> top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 2> top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 2> top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 2> top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 2> top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 2> top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 2> top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<5>/*131:0*/ top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4;
    VlWide<5>/*131:0*/ top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4;
    VlWide<3>/*80:0*/ top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4;
    VlWide<67>/*2138:0*/ top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4;
    VlWide<67>/*2138:0*/ top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4;
    VlWide<9>/*283:0*/ top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4;
    VlWide<7>/*200:0*/ top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4;
    VlWide<5>/*141:0*/ top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4;
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
