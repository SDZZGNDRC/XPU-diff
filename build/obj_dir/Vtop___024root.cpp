// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp993;
    VlWide<6>/*191:0*/ __Vtemp997;
    VlWide<8>/*255:0*/ __Vtemp998;
    VlWide<12>/*383:0*/ __Vtemp1011;
    VlWide<14>/*447:0*/ __Vtemp1012;
    VlWide<63>/*2015:0*/ __Vtemp1071;
    VlWide<65>/*2079:0*/ __Vtemp1072;
    VlWide<65>/*2079:0*/ __Vtemp1073;
    VlWide<67>/*2143:0*/ __Vtemp1074;
    VlWide<67>/*2143:0*/ __Vtemp1075;
    VlWide<63>/*2015:0*/ __Vtemp1132;
    VlWide<65>/*2079:0*/ __Vtemp1133;
    VlWide<65>/*2079:0*/ __Vtemp1134;
    VlWide<67>/*2143:0*/ __Vtemp1135;
    VlWide<67>/*2143:0*/ __Vtemp1136;
    VlWide<3>/*95:0*/ __Vtemp1521;
    VlWide<3>/*95:0*/ __Vtemp1524;
    // Body
    if (vlSelf->rst) {
        vlSelf->icache_req_valid_o = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))) {
        vlSelf->icache_req_valid_o = (1U & (~ (IData)(vlSelf->rst)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__pc0__DOT__pc_ram_t = 0x7ffffffcULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))) {
        vlSelf->top__DOT__pc0__DOT__pc_ram_t = vlSelf->icache_addr_o;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__pc_to_if_id_pc = 0x7ffffffcULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))) {
        vlSelf->top__DOT__pc_to_if_id_pc = vlSelf->top__DOT__pc0__DOT__pc_pipeline_t;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_imm_sel = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_imm_sel = ((2U 
                                                  != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                                 & ((0U 
                                                     == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                                    & (((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__if_id_to_id_inst)) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__if_id_to_id_inst))) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__if_id_to_id_inst)))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__if_id0__DOT__state = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))) {
        vlSelf->top__DOT__if_id0__DOT__state = vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal;
    }
    vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t = 
        ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t));
    if (vlSelf->rst) {
        vlSelf->diff_mem_wb_pc_o = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))) {
        vlSelf->diff_mem_wb_pc_o = vlSelf->top__DOT__ex_mem_to_mem_pc;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_csr_raddr = 0xf12U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_csr_raddr = (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 0xf12U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                     ? 
                                                    (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0x14U)
                                                     : 0xf12U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mstatus_ie = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mstatus) {
        vlSelf->top__DOT__csr0__DOT__out_mstatus_ie 
            = (1U & (IData)(vlSelf->top__DOT__mem_wb_to_csr_wdata));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1 = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mstatus) {
        vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1 
            = (1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                             >> 3U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mip_msip = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mip) {
        vlSelf->top__DOT__csr0__DOT__out_mip_msip = 
            (1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                           >> 2U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mip_mtip = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mip) {
        vlSelf->top__DOT__csr0__DOT__out_mip_mtip = 
            (1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                           >> 7U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mie_msie = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mie) {
        vlSelf->top__DOT__csr0__DOT__out_mie_msie = 
            (1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                           >> 3U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mie_mtie = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mie) {
        vlSelf->top__DOT__csr0__DOT__out_mie_mtie = 
            (1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                           >> 7U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mcause_code = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mcause) {
        vlSelf->top__DOT__csr0__DOT__out_mcause_code 
            = (0x1fU & (IData)(vlSelf->top__DOT__mem_wb_to_csr_wdata));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt = 0U;
    } else if (vlSelf->top__DOT__csr0__DOT__wen_mcause) {
        vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt 
            = (1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                             >> 0x3fU)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mscratch = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                & (0x340U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))) {
        vlSelf->top__DOT__csr0__DOT__out_mscratch = vlSelf->top__DOT__mem_wb_to_csr_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mepc_H62 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                & (0x341U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))) {
        vlSelf->top__DOT__csr0__DOT__out_mepc_H62 = 
            (vlSelf->top__DOT__mem_wb_to_csr_wdata 
             >> 2U);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__csr0__DOT__out_mtval = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                & (0x343U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))) {
        vlSelf->top__DOT__csr0__DOT__out_mtval = vlSelf->top__DOT__mem_wb_to_csr_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_csr_data = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_csr_data = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   ((((vlSelf->top__DOT__if_id_to_id_inst 
                                                       >> 0x14U) 
                                                      == (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_waddr)) 
                                                     & (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_wreg))
                                                     ? vlSelf->top__DOT__ex0__DOT__csr_wdata_t
                                                     : 
                                                    ((((vlSelf->top__DOT__if_id_to_id_inst 
                                                        >> 0x14U) 
                                                       == (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_waddr)) 
                                                      & (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_wreg))
                                                      ? vlSelf->top__DOT__ex_mem_to_mem_csr_wdata
                                                      : 
                                                     ((((vlSelf->top__DOT__if_id_to_id_inst 
                                                         >> 0x14U) 
                                                        == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)) 
                                                       & (IData)(vlSelf->top__DOT__mem_wb_to_csr_we))
                                                       ? vlSelf->top__DOT__mem_wb_to_csr_wdata
                                                       : vlSelf->top__DOT__csr_to_id_csr_data)))
                                                    : 0ULL));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_funct7 = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_funct7 = ((2U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 0x19U)
                                                  : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_imm = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_imm = ((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                              ? 0U : 
                                             ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? vlSelf->top__DOT__id_to_id_ex_imm
                                               : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_rs2_data = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_rs2_data = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? vlSelf->top__DOT__id_to_id_ex_rs2_data
                                                    : 0ULL));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_rs2_addr = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_rs2_addr = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__if_id_to_id_inst 
                                                       >> 0x14U))
                                                    : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_rs1_data = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_rs1_data = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? vlSelf->top__DOT__id_to_id_ex_rs1_data
                                                    : 0ULL));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_rs1_addr = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_rs1_addr = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__if_id_to_id_inst 
                                                       >> 0xfU))
                                                    : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_wdata = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_wdata = ((2U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                  ? 0ULL
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                   ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                   : 0ULL));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_opcode = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_opcode = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                   ? 0x13U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                    ? (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)
                                                    : 0x13U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x31 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x31 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x30 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x30 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x29 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x29 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x28 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x28 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x27 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x27 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x26 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x26 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x25 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x25 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x24 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x24 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x23 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x23 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x22 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x22 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x21 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x21 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x20 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x20 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x19 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x19 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x18 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x18 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x17 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x17 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x16 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x16 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x15 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x15 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x14 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x14 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x13 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x13 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x12 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x12 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x11 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x11 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x10 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x10 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x9 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x9 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x8 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x8 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x7 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x7 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x6 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x6 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x5 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x5 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x4 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x4 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x3 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x3 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x2 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x2 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__regfile0__DOT__out_x1 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))) {
        vlSelf->top__DOT__regfile0__DOT__out_x1 = vlSelf->top__DOT__mem_wb_to_regfile_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_funct3 = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_funct3 = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                    ? (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3)
                                                    : 0U));
    }
    VL_EXTEND_WQ(66,64, __Vtemp993, vlSelf->top__DOT__pc_to_if_id_pc);
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = __Vtemp993[0U];
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = __Vtemp993[1U];
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = __Vtemp993[2U];
    vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state));
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_pc = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_pc = ((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                               ? 0ULL
                                               : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                   ? vlSelf->top__DOT__id_ex_to_ex_pc
                                                   : 0ULL));
    }
    __Vtemp997[0U] = 0x344U;
    __Vtemp997[1U] = 0U;
    __Vtemp997[2U] = (0xf13000U | ((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_mtie)) 
                                             << 7U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_msie) 
                                                               << 3U))))) 
                                   << 0x18U));
    __Vtemp997[3U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_mtie)) 
                                 << 7U) | (QData)((IData)(
                                                          ((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_msie) 
                                                           << 3U))))) 
                       >> 8U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_mtie)) 
                                            << 7U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_msie) 
                                                              << 3U)))) 
                                          >> 0x20U)) 
                                 << 0x18U));
    __Vtemp997[4U] = (0x4000000U | ((IData)(((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_mtie)) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_msie) 
                                                                 << 3U)))) 
                                             >> 0x20U)) 
                                    >> 8U));
    __Vtemp997[5U] = 3U;
    VL_EXTEND_WW(228,164, __Vtemp998, __Vtemp997);
    __Vtemp1011[0U] = 0U;
    __Vtemp1011[1U] = 0U;
    __Vtemp1011[2U] = 0x100f11U;
    __Vtemp1011[3U] = 0U;
    __Vtemp1011[4U] = (0x305000U | ((IData)(vlSelf->top__DOT__csr0__DOT__out_mtval) 
                                    << 0x18U));
    __Vtemp1011[5U] = (((IData)(vlSelf->top__DOT__csr0__DOT__out_mtval) 
                        >> 8U) | ((IData)((vlSelf->top__DOT__csr0__DOT__out_mtval 
                                           >> 0x20U)) 
                                  << 0x18U));
    __Vtemp1011[6U] = (0x43000000U | ((IData)((vlSelf->top__DOT__csr0__DOT__out_mtval 
                                               >> 0x20U)) 
                                      >> 8U));
    __Vtemp1011[7U] = (3U | ((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1)) 
                                       << 3U) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie)))) 
                             << 4U));
    __Vtemp1011[8U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1)) 
                                  << 3U) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1)) 
                                                << 3U) 
                                               | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie))) 
                                              >> 0x20U)) 
                                     << 4U));
    __Vtemp1011[9U] = (0x3000U | (((IData)(vlSelf->top__DOT__csr0__DOT__out_mscratch) 
                                   << 0x10U) | ((IData)(
                                                        ((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1)) 
                                                           << 3U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie))) 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
    __Vtemp1011[0xaU] = (((IData)(vlSelf->top__DOT__csr0__DOT__out_mscratch) 
                          >> 0x10U) | ((IData)((vlSelf->top__DOT__csr0__DOT__out_mscratch 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp1011[0xbU] = (0x3400000U | ((IData)((vlSelf->top__DOT__csr0__DOT__out_mscratch 
                                                >> 0x20U)) 
                                       >> 0x10U));
    VL_EXTEND_WW(444,380, __Vtemp1012, __Vtemp1011);
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0U] 
        = __Vtemp1012[0U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[1U] 
        = __Vtemp1012[1U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[2U] 
        = __Vtemp1012[2U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[3U] 
        = __Vtemp1012[3U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[4U] 
        = __Vtemp1012[4U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[5U] 
        = __Vtemp1012[5U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[6U] 
        = __Vtemp1012[6U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[7U] 
        = __Vtemp1012[7U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[8U] 
        = __Vtemp1012[8U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[9U] 
        = __Vtemp1012[9U];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xaU] 
        = __Vtemp1012[0xaU];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xbU] 
        = __Vtemp1012[0xbU];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xcU] 
        = __Vtemp1012[0xcU];
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xdU] 
        = (0x10000000U | __Vtemp1012[0xdU]);
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xeU] 
        = (0x30U | ((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_mtip)) 
                              << 7U) | (QData)((IData)(
                                                       ((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_msip) 
                                                        << 3U))))) 
                    << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xfU] 
        = (((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_mtip)) 
                      << 7U) | (QData)((IData)(((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_msip) 
                                                << 3U))))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_mtip)) 
                                    << 7U) | (QData)((IData)(
                                                             ((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_msip) 
                                                              << 3U)))) 
                                  >> 0x20U)) << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x10U] 
        = (((IData)(((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_mtip)) 
                       << 7U) | (QData)((IData)(((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_msip) 
                                                 << 3U)))) 
                     >> 0x20U)) >> 0x18U) | (__Vtemp998[0U] 
                                             << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x11U] 
        = ((__Vtemp998[0U] >> 0x18U) | (__Vtemp998[1U] 
                                        << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x12U] 
        = ((__Vtemp998[1U] >> 0x18U) | (__Vtemp998[2U] 
                                        << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x13U] 
        = ((__Vtemp998[2U] >> 0x18U) | (__Vtemp998[3U] 
                                        << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x14U] 
        = ((__Vtemp998[3U] >> 0x18U) | (__Vtemp998[4U] 
                                        << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x15U] 
        = ((__Vtemp998[4U] >> 0x18U) | (__Vtemp998[5U] 
                                        << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x16U] 
        = ((__Vtemp998[5U] >> 0x18U) | (__Vtemp998[6U] 
                                        << 8U));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x17U] 
        = (0xf14000U | ((__Vtemp998[6U] >> 0x18U) | 
                        (((IData)((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                                   << 2U)) << 0x18U) 
                         | (__Vtemp998[7U] << 8U))));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x18U] 
        = (((0xffU & ((IData)((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                               << 2U)) >> 8U)) | (__Vtemp998[7U] 
                                                  >> 0x18U)) 
           | ((0xffff00U & ((IData)((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                                     << 2U)) >> 8U)) 
              | ((IData)(((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                           << 2U) >> 0x20U)) << 0x18U)));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x19U] 
        = (0x41000000U | ((0xffU & ((IData)(((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                                              << 2U) 
                                             >> 0x20U)) 
                                    >> 8U)) | (0xffff00U 
                                               & ((IData)(
                                                          ((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                                                            << 2U) 
                                                           >> 0x20U)) 
                                                  >> 8U))));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1aU] 
        = (3U | ((0xf0U & ((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                                     << 0x3fU) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code)))) 
                           << 4U)) | (0xffffff00U & 
                                      ((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                                                 << 0x3fU) 
                                                | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code)))) 
                                       << 4U))));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1bU] 
        = ((((IData)((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                       << 0x3fU) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code)))) 
             >> 0x1cU) | (0xf0U & ((IData)(((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                                              << 0x3fU) 
                                             | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code))) 
                                            >> 0x20U)) 
                                   << 4U))) | (0xffffff00U 
                                               & ((IData)(
                                                          ((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                                                             << 0x3fU) 
                                                            | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code))) 
                                                           >> 0x20U)) 
                                                  << 4U)));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1cU] 
        = (0x3420U | ((IData)(((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                                 << 0x3fU) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code))) 
                               >> 0x20U)) >> 0x1cU));
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1dU] = 0U;
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1eU] = 0xf000000U;
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1fU] = 0U;
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x20U] = 0x20000000U;
    vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x21U] = 0xf1U;
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_wb_to_csr_wdata = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))) {
        vlSelf->top__DOT__mem_wb_to_csr_wdata = vlSelf->top__DOT__ex_mem_to_mem_csr_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_wb_to_csr_waddr = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))) {
        vlSelf->top__DOT__mem_wb_to_csr_waddr = vlSelf->top__DOT__ex_mem_to_mem_csr_waddr;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_wb_to_csr_we = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))) {
        vlSelf->top__DOT__mem_wb_to_csr_we = vlSelf->top__DOT__ex_mem_to_mem_csr_wreg;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_opcode = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_opcode = ((2U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                 ? 0x13U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst)
                                                  : 0U));
    }
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x1fU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x31;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x1eU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x30;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x1dU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x29;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x1cU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x28;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x1bU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x27;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x1aU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x26;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x19U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x25;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x18U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x24;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x17U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x23;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x16U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x22;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x15U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x21;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x14U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x20;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x13U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x19;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x12U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x18;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x11U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x17;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0x10U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x16;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0xfU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x15;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0xeU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x14;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0xdU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x13;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0xcU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x12;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0xbU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x11;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0xaU] 
        = vlSelf->top__DOT__regfile0__DOT__out_x10;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x9;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x8;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x7;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x6;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x5;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x4;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x3;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x2;
    vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1U] 
        = vlSelf->top__DOT__regfile0__DOT__out_x1;
    __Vtemp1071[0U] = (IData)(vlSelf->top__DOT__regfile0__DOT__out_x31);
    __Vtemp1071[1U] = (IData)((vlSelf->top__DOT__regfile0__DOT__out_x31 
                               >> 0x20U));
    __Vtemp1071[2U] = (0x1fU | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x30) 
                                << 5U));
    __Vtemp1071[3U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x30) 
                        >> 0x1bU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x30 
                                              >> 0x20U)) 
                                     << 5U));
    __Vtemp1071[4U] = (0x3c0U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x29) 
                                  << 0xaU) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x30 
                                                       >> 0x20U)) 
                                              >> 0x1bU)));
    __Vtemp1071[5U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x29) 
                        >> 0x16U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x29 
                                              >> 0x20U)) 
                                     << 0xaU));
    __Vtemp1071[6U] = (0x7400U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x28) 
                                   << 0xfU) | ((IData)(
                                                       (vlSelf->top__DOT__regfile0__DOT__out_x29 
                                                        >> 0x20U)) 
                                               >> 0x16U)));
    __Vtemp1071[7U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x28) 
                        >> 0x11U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x28 
                                              >> 0x20U)) 
                                     << 0xfU));
    __Vtemp1071[8U] = (0xe0000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x27) 
                                    << 0x14U) | ((IData)(
                                                         (vlSelf->top__DOT__regfile0__DOT__out_x28 
                                                          >> 0x20U)) 
                                                 >> 0x11U)));
    __Vtemp1071[9U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x27) 
                        >> 0xcU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x27 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp1071[0xaU] = (0x1b00000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x26) 
                                        << 0x19U) | 
                                       ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x27 
                                                 >> 0x20U)) 
                                        >> 0xcU)));
    __Vtemp1071[0xbU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x26) 
                          >> 7U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x26 
                                             >> 0x20U)) 
                                    << 0x19U));
    __Vtemp1071[0xcU] = (0x34000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x25) 
                                         << 0x1eU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x26 
                                                    >> 0x20U)) 
                                           >> 7U)));
    __Vtemp1071[0xdU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x25) 
                          >> 2U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x25 
                                             >> 0x20U)) 
                                    << 0x1eU));
    __Vtemp1071[0xeU] = (0x40000000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x25 
                                                 >> 0x20U)) 
                                        >> 2U));
    __Vtemp1071[0xfU] = (6U | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x24) 
                               << 3U));
    __Vtemp1071[0x10U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x24) 
                           >> 0x1dU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x24 
                                                 >> 0x20U)) 
                                        << 3U));
    __Vtemp1071[0x11U] = (0xc0U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x23) 
                                    << 8U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x24 
                                                       >> 0x20U)) 
                                              >> 0x1dU)));
    __Vtemp1071[0x12U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x23) 
                           >> 0x18U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x23 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp1071[0x13U] = (0x1700U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x22) 
                                      << 0xdU) | ((IData)(
                                                          (vlSelf->top__DOT__regfile0__DOT__out_x23 
                                                           >> 0x20U)) 
                                                  >> 0x18U)));
    __Vtemp1071[0x14U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x22) 
                           >> 0x13U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x22 
                                                 >> 0x20U)) 
                                        << 0xdU));
    __Vtemp1071[0x15U] = (0x2c000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x21) 
                                       << 0x12U) | 
                                      ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x22 
                                                >> 0x20U)) 
                                       >> 0x13U)));
    __Vtemp1071[0x16U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x21) 
                           >> 0xeU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x21 
                                                >> 0x20U)) 
                                       << 0x12U));
    __Vtemp1071[0x17U] = (0x540000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x20) 
                                        << 0x17U) | 
                                       ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x21 
                                                 >> 0x20U)) 
                                        >> 0xeU)));
    __Vtemp1071[0x18U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x20) 
                           >> 9U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x20 
                                              >> 0x20U)) 
                                     << 0x17U));
    __Vtemp1071[0x19U] = (0xa000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x19) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x20 
                                                    >> 0x20U)) 
                                           >> 9U)));
    __Vtemp1071[0x1aU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x19) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x19 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp1071[0x1bU] = (0x30000000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x19 
                                                  >> 0x20U)) 
                                         >> 4U));
    __Vtemp1071[0x1cU] = (1U | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x18) 
                                << 1U));
    __Vtemp1071[0x1dU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x18) 
                           >> 0x1fU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x18 
                                                 >> 0x20U)) 
                                        << 1U));
    __Vtemp1071[0x1eU] = (0x24U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x17) 
                                    << 6U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x18 
                                                       >> 0x20U)) 
                                              >> 0x1fU)));
    __Vtemp1071[0x1fU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x17) 
                           >> 0x1aU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x17 
                                                 >> 0x20U)) 
                                        << 6U));
    __Vtemp1071[0x20U] = (0x440U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x16) 
                                     << 0xbU) | ((IData)(
                                                         (vlSelf->top__DOT__regfile0__DOT__out_x17 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
    __Vtemp1071[0x21U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x16) 
                           >> 0x15U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x16 
                                                 >> 0x20U)) 
                                        << 0xbU));
    __Vtemp1071[0x22U] = (0x8000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x15) 
                                      << 0x10U) | ((IData)(
                                                           (vlSelf->top__DOT__regfile0__DOT__out_x16 
                                                            >> 0x20U)) 
                                                   >> 0x15U)));
    __Vtemp1071[0x23U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x15) 
                           >> 0x10U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x15 
                                                 >> 0x20U)) 
                                        << 0x10U));
    __Vtemp1071[0x24U] = (0xf0000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x14) 
                                       << 0x15U) | 
                                      ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x15 
                                                >> 0x20U)) 
                                       >> 0x10U)));
    __Vtemp1071[0x25U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x14) 
                           >> 0xbU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x14 
                                                >> 0x20U)) 
                                       << 0x15U));
    __Vtemp1071[0x26U] = (0x1c00000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x13) 
                                         << 0x1aU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x14 
                                                    >> 0x20U)) 
                                           >> 0xbU)));
    __Vtemp1071[0x27U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x13) 
                           >> 6U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x13 
                                              >> 0x20U)) 
                                     << 0x1aU));
    __Vtemp1071[0x28U] = (0x34000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x12) 
                                          << 0x1fU) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__regfile0__DOT__out_x13 
                                                     >> 0x20U)) 
                                            >> 6U)));
    __Vtemp1071[0x29U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x12) 
                           >> 1U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x12 
                                              >> 0x20U)) 
                                     << 0x1fU));
    __Vtemp1071[0x2aU] = ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x12 
                                   >> 0x20U)) >> 1U);
    __Vtemp1071[0x2bU] = (6U | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x11) 
                                << 4U));
    __Vtemp1071[0x2cU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x11) 
                           >> 0x1cU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x11 
                                                 >> 0x20U)) 
                                        << 4U));
    __Vtemp1071[0x2dU] = (0xb0U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x10) 
                                    << 9U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x11 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    __Vtemp1071[0x2eU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x10) 
                           >> 0x17U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x10 
                                                 >> 0x20U)) 
                                        << 9U));
    __Vtemp1071[0x2fU] = (0x1400U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x9) 
                                      << 0xeU) | ((IData)(
                                                          (vlSelf->top__DOT__regfile0__DOT__out_x10 
                                                           >> 0x20U)) 
                                                  >> 0x17U)));
    __Vtemp1071[0x30U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x9) 
                           >> 0x12U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x9 
                                                 >> 0x20U)) 
                                        << 0xeU));
    __Vtemp1071[0x31U] = (0x24000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x8) 
                                       << 0x13U) | 
                                      ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x9 
                                                >> 0x20U)) 
                                       >> 0x12U)));
    __Vtemp1071[0x32U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x8) 
                           >> 0xdU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x8 
                                                >> 0x20U)) 
                                       << 0x13U));
    __Vtemp1071[0x33U] = (0x400000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x7) 
                                        << 0x18U) | 
                                       ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x8 
                                                 >> 0x20U)) 
                                        >> 0xdU)));
    __Vtemp1071[0x34U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x7) 
                           >> 8U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x7 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp1071[0x35U] = (0x7000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x6) 
                                         << 0x1dU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x7 
                                                    >> 0x20U)) 
                                           >> 8U)));
    __Vtemp1071[0x36U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x6) 
                           >> 3U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x6 
                                              >> 0x20U)) 
                                     << 0x1dU));
    __Vtemp1071[0x37U] = (0xc0000000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x6 
                                                  >> 0x20U)) 
                                         >> 3U));
    __Vtemp1071[0x38U] = ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x5) 
                          << 2U);
    __Vtemp1071[0x39U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x5) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x5 
                                                 >> 0x20U)) 
                                        << 2U));
    __Vtemp1071[0x3aU] = (0x14U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x4) 
                                    << 7U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x5 
                                                       >> 0x20U)) 
                                              >> 0x1eU)));
    __Vtemp1071[0x3bU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x4) 
                           >> 0x19U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x4 
                                                 >> 0x20U)) 
                                        << 7U));
    __Vtemp1071[0x3cU] = (0x200U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x3) 
                                     << 0xcU) | ((IData)(
                                                         (vlSelf->top__DOT__regfile0__DOT__out_x4 
                                                          >> 0x20U)) 
                                                 >> 0x19U)));
    __Vtemp1071[0x3dU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x3) 
                           >> 0x14U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x3 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp1071[0x3eU] = (0x3000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x3 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WQW(2065,64,2001, __Vtemp1072, vlSelf->top__DOT__regfile0__DOT__out_x2, __Vtemp1071);
    VL_CONCAT_WIW(2070,5,2065, __Vtemp1073, 2U, __Vtemp1072);
    VL_CONCAT_WQW(2134,64,2070, __Vtemp1074, vlSelf->top__DOT__regfile0__DOT__out_x1, __Vtemp1073);
    VL_CONCAT_WIW(2139,5,2134, __Vtemp1075, 1U, __Vtemp1074);
    VL_ASSIGN_W(2139,vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4, __Vtemp1075);
    __Vtemp1132[0U] = (IData)(vlSelf->top__DOT__regfile0__DOT__out_x31);
    __Vtemp1132[1U] = (IData)((vlSelf->top__DOT__regfile0__DOT__out_x31 
                               >> 0x20U));
    __Vtemp1132[2U] = (0x1fU | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x30) 
                                << 5U));
    __Vtemp1132[3U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x30) 
                        >> 0x1bU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x30 
                                              >> 0x20U)) 
                                     << 5U));
    __Vtemp1132[4U] = (0x3c0U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x29) 
                                  << 0xaU) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x30 
                                                       >> 0x20U)) 
                                              >> 0x1bU)));
    __Vtemp1132[5U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x29) 
                        >> 0x16U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x29 
                                              >> 0x20U)) 
                                     << 0xaU));
    __Vtemp1132[6U] = (0x7400U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x28) 
                                   << 0xfU) | ((IData)(
                                                       (vlSelf->top__DOT__regfile0__DOT__out_x29 
                                                        >> 0x20U)) 
                                               >> 0x16U)));
    __Vtemp1132[7U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x28) 
                        >> 0x11U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x28 
                                              >> 0x20U)) 
                                     << 0xfU));
    __Vtemp1132[8U] = (0xe0000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x27) 
                                    << 0x14U) | ((IData)(
                                                         (vlSelf->top__DOT__regfile0__DOT__out_x28 
                                                          >> 0x20U)) 
                                                 >> 0x11U)));
    __Vtemp1132[9U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x27) 
                        >> 0xcU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x27 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp1132[0xaU] = (0x1b00000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x26) 
                                        << 0x19U) | 
                                       ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x27 
                                                 >> 0x20U)) 
                                        >> 0xcU)));
    __Vtemp1132[0xbU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x26) 
                          >> 7U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x26 
                                             >> 0x20U)) 
                                    << 0x19U));
    __Vtemp1132[0xcU] = (0x34000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x25) 
                                         << 0x1eU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x26 
                                                    >> 0x20U)) 
                                           >> 7U)));
    __Vtemp1132[0xdU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x25) 
                          >> 2U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x25 
                                             >> 0x20U)) 
                                    << 0x1eU));
    __Vtemp1132[0xeU] = (0x40000000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x25 
                                                 >> 0x20U)) 
                                        >> 2U));
    __Vtemp1132[0xfU] = (6U | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x24) 
                               << 3U));
    __Vtemp1132[0x10U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x24) 
                           >> 0x1dU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x24 
                                                 >> 0x20U)) 
                                        << 3U));
    __Vtemp1132[0x11U] = (0xc0U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x23) 
                                    << 8U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x24 
                                                       >> 0x20U)) 
                                              >> 0x1dU)));
    __Vtemp1132[0x12U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x23) 
                           >> 0x18U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x23 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp1132[0x13U] = (0x1700U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x22) 
                                      << 0xdU) | ((IData)(
                                                          (vlSelf->top__DOT__regfile0__DOT__out_x23 
                                                           >> 0x20U)) 
                                                  >> 0x18U)));
    __Vtemp1132[0x14U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x22) 
                           >> 0x13U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x22 
                                                 >> 0x20U)) 
                                        << 0xdU));
    __Vtemp1132[0x15U] = (0x2c000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x21) 
                                       << 0x12U) | 
                                      ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x22 
                                                >> 0x20U)) 
                                       >> 0x13U)));
    __Vtemp1132[0x16U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x21) 
                           >> 0xeU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x21 
                                                >> 0x20U)) 
                                       << 0x12U));
    __Vtemp1132[0x17U] = (0x540000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x20) 
                                        << 0x17U) | 
                                       ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x21 
                                                 >> 0x20U)) 
                                        >> 0xeU)));
    __Vtemp1132[0x18U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x20) 
                           >> 9U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x20 
                                              >> 0x20U)) 
                                     << 0x17U));
    __Vtemp1132[0x19U] = (0xa000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x19) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x20 
                                                    >> 0x20U)) 
                                           >> 9U)));
    __Vtemp1132[0x1aU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x19) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x19 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp1132[0x1bU] = (0x30000000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x19 
                                                  >> 0x20U)) 
                                         >> 4U));
    __Vtemp1132[0x1cU] = (1U | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x18) 
                                << 1U));
    __Vtemp1132[0x1dU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x18) 
                           >> 0x1fU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x18 
                                                 >> 0x20U)) 
                                        << 1U));
    __Vtemp1132[0x1eU] = (0x24U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x17) 
                                    << 6U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x18 
                                                       >> 0x20U)) 
                                              >> 0x1fU)));
    __Vtemp1132[0x1fU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x17) 
                           >> 0x1aU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x17 
                                                 >> 0x20U)) 
                                        << 6U));
    __Vtemp1132[0x20U] = (0x440U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x16) 
                                     << 0xbU) | ((IData)(
                                                         (vlSelf->top__DOT__regfile0__DOT__out_x17 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
    __Vtemp1132[0x21U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x16) 
                           >> 0x15U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x16 
                                                 >> 0x20U)) 
                                        << 0xbU));
    __Vtemp1132[0x22U] = (0x8000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x15) 
                                      << 0x10U) | ((IData)(
                                                           (vlSelf->top__DOT__regfile0__DOT__out_x16 
                                                            >> 0x20U)) 
                                                   >> 0x15U)));
    __Vtemp1132[0x23U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x15) 
                           >> 0x10U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x15 
                                                 >> 0x20U)) 
                                        << 0x10U));
    __Vtemp1132[0x24U] = (0xf0000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x14) 
                                       << 0x15U) | 
                                      ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x15 
                                                >> 0x20U)) 
                                       >> 0x10U)));
    __Vtemp1132[0x25U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x14) 
                           >> 0xbU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x14 
                                                >> 0x20U)) 
                                       << 0x15U));
    __Vtemp1132[0x26U] = (0x1c00000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x13) 
                                         << 0x1aU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x14 
                                                    >> 0x20U)) 
                                           >> 0xbU)));
    __Vtemp1132[0x27U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x13) 
                           >> 6U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x13 
                                              >> 0x20U)) 
                                     << 0x1aU));
    __Vtemp1132[0x28U] = (0x34000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x12) 
                                          << 0x1fU) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__regfile0__DOT__out_x13 
                                                     >> 0x20U)) 
                                            >> 6U)));
    __Vtemp1132[0x29U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x12) 
                           >> 1U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x12 
                                              >> 0x20U)) 
                                     << 0x1fU));
    __Vtemp1132[0x2aU] = ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x12 
                                   >> 0x20U)) >> 1U);
    __Vtemp1132[0x2bU] = (6U | ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x11) 
                                << 4U));
    __Vtemp1132[0x2cU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x11) 
                           >> 0x1cU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x11 
                                                 >> 0x20U)) 
                                        << 4U));
    __Vtemp1132[0x2dU] = (0xb0U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x10) 
                                    << 9U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x11 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    __Vtemp1132[0x2eU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x10) 
                           >> 0x17U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x10 
                                                 >> 0x20U)) 
                                        << 9U));
    __Vtemp1132[0x2fU] = (0x1400U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x9) 
                                      << 0xeU) | ((IData)(
                                                          (vlSelf->top__DOT__regfile0__DOT__out_x10 
                                                           >> 0x20U)) 
                                                  >> 0x17U)));
    __Vtemp1132[0x30U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x9) 
                           >> 0x12U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x9 
                                                 >> 0x20U)) 
                                        << 0xeU));
    __Vtemp1132[0x31U] = (0x24000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x8) 
                                       << 0x13U) | 
                                      ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x9 
                                                >> 0x20U)) 
                                       >> 0x12U)));
    __Vtemp1132[0x32U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x8) 
                           >> 0xdU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x8 
                                                >> 0x20U)) 
                                       << 0x13U));
    __Vtemp1132[0x33U] = (0x400000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x7) 
                                        << 0x18U) | 
                                       ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x8 
                                                 >> 0x20U)) 
                                        >> 0xdU)));
    __Vtemp1132[0x34U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x7) 
                           >> 8U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x7 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp1132[0x35U] = (0x7000000U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x6) 
                                         << 0x1dU) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__regfile0__DOT__out_x7 
                                                    >> 0x20U)) 
                                           >> 8U)));
    __Vtemp1132[0x36U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x6) 
                           >> 3U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x6 
                                              >> 0x20U)) 
                                     << 0x1dU));
    __Vtemp1132[0x37U] = (0xc0000000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x6 
                                                  >> 0x20U)) 
                                         >> 3U));
    __Vtemp1132[0x38U] = ((IData)(vlSelf->top__DOT__regfile0__DOT__out_x5) 
                          << 2U);
    __Vtemp1132[0x39U] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x5) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x5 
                                                 >> 0x20U)) 
                                        << 2U));
    __Vtemp1132[0x3aU] = (0x14U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x4) 
                                    << 7U) | ((IData)(
                                                      (vlSelf->top__DOT__regfile0__DOT__out_x5 
                                                       >> 0x20U)) 
                                              >> 0x1eU)));
    __Vtemp1132[0x3bU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x4) 
                           >> 0x19U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x4 
                                                 >> 0x20U)) 
                                        << 7U));
    __Vtemp1132[0x3cU] = (0x200U | (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x3) 
                                     << 0xcU) | ((IData)(
                                                         (vlSelf->top__DOT__regfile0__DOT__out_x4 
                                                          >> 0x20U)) 
                                                 >> 0x19U)));
    __Vtemp1132[0x3dU] = (((IData)(vlSelf->top__DOT__regfile0__DOT__out_x3) 
                           >> 0x14U) | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x3 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp1132[0x3eU] = (0x3000U | ((IData)((vlSelf->top__DOT__regfile0__DOT__out_x3 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WQW(2065,64,2001, __Vtemp1133, vlSelf->top__DOT__regfile0__DOT__out_x2, __Vtemp1132);
    VL_CONCAT_WIW(2070,5,2065, __Vtemp1134, 2U, __Vtemp1133);
    VL_CONCAT_WQW(2134,64,2070, __Vtemp1135, vlSelf->top__DOT__regfile0__DOT__out_x1, __Vtemp1134);
    VL_CONCAT_WIW(2139,5,2134, __Vtemp1136, 1U, __Vtemp1135);
    VL_ASSIGN_W(2139,vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4, __Vtemp1136);
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_wb_to_regfile_wdata = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))) {
        vlSelf->top__DOT__mem_wb_to_regfile_wdata = vlSelf->top__DOT__mem_to_mem_wb_wdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_wb_to_regfile_we = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))) {
        vlSelf->top__DOT__mem_wb_to_regfile_we = vlSelf->top__DOT__ex_mem_to_mem_wreg;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_wb_to_regfile_waddr = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))) {
        vlSelf->top__DOT__mem_wb_to_regfile_waddr = vlSelf->top__DOT__ex_mem_to_mem_rd_addr;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_funct3 = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_funct3 = ((2U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (7U 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xcU))
                                                  : 0U));
    }
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0U];
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[1U];
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[3U] 
            << 0x14U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[2U] 
                         >> 0xcU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[4U] 
            << 0x14U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[3U] 
                         >> 0xcU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffU & (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[4U] 
                     >> 0xcU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[5U] 
            << 8U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[4U] 
                      >> 0x18U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[6U] 
            << 8U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[5U] 
                      >> 0x18U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffU & ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[7U] 
                      << 8U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[6U] 
                                >> 0x18U)));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[8U] 
            << 0x1cU) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[7U] 
                         >> 4U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[9U] 
            << 0x1cU) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[8U] 
                         >> 4U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffU & (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[9U] 
                     >> 4U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xbU] 
            << 0x10U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xaU] 
                         >> 0x10U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffU & (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xbU] 
                     >> 0x10U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xcU] 
            << 4U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xbU] 
                      >> 0x1cU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xdU] 
            << 4U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xcU] 
                      >> 0x1cU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffU & ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xeU] 
                      << 4U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xdU] 
                                >> 0x1cU)));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xfU] 
            << 0x18U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xeU] 
                         >> 8U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x10U] 
            << 0x18U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0xfU] 
                         >> 8U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffU & (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x10U] 
                     >> 8U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x11U] 
            << 0xcU) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x10U] 
                        >> 0x14U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x12U] 
            << 0xcU) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x11U] 
                        >> 0x14U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x12U] 
           >> 0x14U);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x13U];
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x14U];
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x15U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x16U] 
            << 0x14U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x15U] 
                         >> 0xcU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x17U] 
            << 0x14U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x16U] 
                         >> 0xcU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffU & (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x17U] 
                     >> 0xcU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x18U] 
            << 8U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x17U] 
                      >> 0x18U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x19U] 
            << 8U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x18U] 
                      >> 0x18U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0xfffU & ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1aU] 
                      << 8U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x19U] 
                                >> 0x18U)));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1bU] 
            << 0x1cU) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1aU] 
                         >> 4U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1cU] 
            << 0x1cU) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1bU] 
                         >> 4U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0xfffU & (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1cU] 
                     >> 4U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1dU] 
            << 0x10U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1cU] 
                         >> 0x10U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1eU] 
            << 0x10U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1dU] 
                         >> 0x10U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0xfffU & (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1eU] 
                     >> 0x10U));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1fU] 
            << 4U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1eU] 
                      >> 0x1cU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x20U] 
            << 4U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x1fU] 
                      >> 0x1cU));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0xfffU & ((vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x21U] 
                      << 4U) | (vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4[0x20U] 
                                >> 0x1cU)));
    vlSelf->diff_regs_o[0U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0U];
    vlSelf->diff_regs_o[1U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [1U];
    vlSelf->diff_regs_o[2U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [2U];
    vlSelf->diff_regs_o[3U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [3U];
    vlSelf->diff_regs_o[4U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [4U];
    vlSelf->diff_regs_o[5U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [5U];
    vlSelf->diff_regs_o[6U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [6U];
    vlSelf->diff_regs_o[7U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [7U];
    vlSelf->diff_regs_o[8U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [8U];
    vlSelf->diff_regs_o[9U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [9U];
    vlSelf->diff_regs_o[0xaU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0xaU];
    vlSelf->diff_regs_o[0xbU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0xbU];
    vlSelf->diff_regs_o[0xcU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0xcU];
    vlSelf->diff_regs_o[0xdU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0xdU];
    vlSelf->diff_regs_o[0xeU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0xeU];
    vlSelf->diff_regs_o[0xfU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0xfU];
    vlSelf->diff_regs_o[0x10U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x10U];
    vlSelf->diff_regs_o[0x11U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x11U];
    vlSelf->diff_regs_o[0x12U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x12U];
    vlSelf->diff_regs_o[0x13U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x13U];
    vlSelf->diff_regs_o[0x14U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x14U];
    vlSelf->diff_regs_o[0x15U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x15U];
    vlSelf->diff_regs_o[0x16U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x16U];
    vlSelf->diff_regs_o[0x17U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x17U];
    vlSelf->diff_regs_o[0x18U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x18U];
    vlSelf->diff_regs_o[0x19U] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x19U];
    vlSelf->diff_regs_o[0x1aU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x1aU];
    vlSelf->diff_regs_o[0x1bU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x1bU];
    vlSelf->diff_regs_o[0x1cU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x1cU];
    vlSelf->diff_regs_o[0x1dU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x1dU];
    vlSelf->diff_regs_o[0x1eU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x1eU];
    vlSelf->diff_regs_o[0x1fU] = vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o
        [0x1fU];
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0U];
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[1U];
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[2U] 
                         >> 5U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[3U] 
                         >> 5U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[4U] 
                    >> 5U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[5U] 
            << 0x16U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[6U] 
            << 0x16U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[7U] 
            << 0x11U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[8U] 
            << 0x11U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[9U] 
            << 0xcU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xbU] 
            << 7U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xcU] 
            << 7U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xdU] 
            << 2U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xeU] 
            << 2U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x18U] 
            << 9U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x19U] 
            << 9U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x21U] 
            << 0x15U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x22U] 
            << 0x15U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x22U] 
                    >> 0xbU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x23U] 
            << 0x10U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x22U] 
                         >> 0x10U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x24U] 
            << 0x10U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x23U] 
                         >> 0x10U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x24U] 
                    >> 0x10U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x25U] 
            << 0xbU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x24U] 
                        >> 0x15U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x26U] 
            << 0xbU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x25U] 
                        >> 0x15U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x26U] 
                    >> 0x15U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x27U] 
            << 6U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x26U] 
                      >> 0x1aU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x28U] 
            << 6U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x27U] 
                      >> 0x1aU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x28U] 
                    >> 0x1aU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x29U] 
            << 1U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x28U] 
                      >> 0x1fU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2aU] 
            << 1U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x29U] 
                      >> 0x1fU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2bU] 
                     << 1U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2aU] 
                               >> 0x1fU)));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2cU] 
            << 0x1cU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2bU] 
                         >> 4U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2dU] 
            << 0x1cU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2cU] 
                         >> 4U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2dU] 
                    >> 4U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2eU] 
            << 0x17U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2dU] 
                         >> 9U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2fU] 
            << 0x17U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2eU] 
                         >> 9U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2fU] 
                    >> 9U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x30U] 
            << 0x12U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x2fU] 
                         >> 0xeU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x31U] 
            << 0x12U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x30U] 
                         >> 0xeU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x31U] 
                    >> 0xeU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x17U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x32U] 
            << 0xdU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x31U] 
                        >> 0x13U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x17U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x33U] 
            << 0xdU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x32U] 
                        >> 0x13U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x17U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x33U] 
                    >> 0x13U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x18U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x34U] 
            << 8U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x33U] 
                      >> 0x18U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x18U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x35U] 
            << 8U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x34U] 
                      >> 0x18U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x18U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x35U] 
                    >> 0x18U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x19U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x36U] 
            << 3U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x35U] 
                      >> 0x1dU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x19U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x37U] 
            << 3U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x36U] 
                      >> 0x1dU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x19U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x38U] 
                     << 3U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x37U] 
                               >> 0x1dU)));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x39U] 
            << 0x1eU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x38U] 
                         >> 2U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3aU] 
            << 0x1eU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x39U] 
                         >> 2U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3aU] 
                    >> 2U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3bU] 
            << 0x19U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3aU] 
                         >> 7U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3cU] 
            << 0x19U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3bU] 
                         >> 7U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3cU] 
                    >> 7U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3dU] 
            << 0x14U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3cU] 
                         >> 0xcU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3eU] 
            << 0x14U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3dU] 
                         >> 0xcU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3eU] 
                    >> 0xcU));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3fU] 
            << 0xfU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3eU] 
                        >> 0x11U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x40U] 
            << 0xfU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x3fU] 
                        >> 0x11U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x40U] 
                    >> 0x11U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x41U] 
            << 0xaU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x40U] 
                        >> 0x16U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x42U] 
            << 0xaU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x41U] 
                        >> 0x16U));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4[0x42U] 
                    >> 0x16U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0U];
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[1U];
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[2U] 
                         >> 5U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[3U] 
                         >> 5U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[4U] 
                    >> 5U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[5U] 
            << 0x16U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[6U] 
            << 0x16U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[7U] 
            << 0x11U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[8U] 
            << 0x11U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[9U] 
            << 0xcU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xbU] 
            << 7U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xcU] 
            << 7U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xdU] 
            << 2U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xeU] 
            << 2U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x18U] 
            << 9U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x19U] 
            << 9U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x21U] 
            << 0x15U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x22U] 
            << 0x15U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x22U] 
                    >> 0xbU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x23U] 
            << 0x10U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x22U] 
                         >> 0x10U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x24U] 
            << 0x10U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x23U] 
                         >> 0x10U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x24U] 
                    >> 0x10U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x25U] 
            << 0xbU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x24U] 
                        >> 0x15U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x26U] 
            << 0xbU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x25U] 
                        >> 0x15U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x26U] 
                    >> 0x15U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x27U] 
            << 6U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x26U] 
                      >> 0x1aU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x28U] 
            << 6U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x27U] 
                      >> 0x1aU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x28U] 
                    >> 0x1aU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x29U] 
            << 1U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x28U] 
                      >> 0x1fU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2aU] 
            << 1U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x29U] 
                      >> 0x1fU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2bU] 
                     << 1U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2aU] 
                               >> 0x1fU)));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2cU] 
            << 0x1cU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2bU] 
                         >> 4U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2dU] 
            << 0x1cU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2cU] 
                         >> 4U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2dU] 
                    >> 4U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2eU] 
            << 0x17U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2dU] 
                         >> 9U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2fU] 
            << 0x17U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2eU] 
                         >> 9U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2fU] 
                    >> 9U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x30U] 
            << 0x12U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x2fU] 
                         >> 0xeU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x31U] 
            << 0x12U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x30U] 
                         >> 0xeU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x31U] 
                    >> 0xeU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x17U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x32U] 
            << 0xdU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x31U] 
                        >> 0x13U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x17U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x33U] 
            << 0xdU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x32U] 
                        >> 0x13U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x17U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x33U] 
                    >> 0x13U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x18U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x34U] 
            << 8U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x33U] 
                      >> 0x18U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x18U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x35U] 
            << 8U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x34U] 
                      >> 0x18U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x18U][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x35U] 
                    >> 0x18U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x19U][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x36U] 
            << 3U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x35U] 
                      >> 0x1dU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x19U][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x37U] 
            << 3U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x36U] 
                      >> 0x1dU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x19U][2U] 
        = (0x1fU & ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x38U] 
                     << 3U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x37U] 
                               >> 0x1dU)));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x39U] 
            << 0x1eU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x38U] 
                         >> 2U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3aU] 
            << 0x1eU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x39U] 
                         >> 2U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3aU] 
                    >> 2U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3bU] 
            << 0x19U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3aU] 
                         >> 7U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3cU] 
            << 0x19U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3bU] 
                         >> 7U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3cU] 
                    >> 7U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3dU] 
            << 0x14U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3cU] 
                         >> 0xcU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3eU] 
            << 0x14U) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3dU] 
                         >> 0xcU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3eU] 
                    >> 0xcU));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3fU] 
            << 0xfU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3eU] 
                        >> 0x11U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x40U] 
            << 0xfU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x3fU] 
                        >> 0x11U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x40U] 
                    >> 0x11U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x41U] 
            << 0xaU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x40U] 
                        >> 0x16U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = ((vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x42U] 
            << 0xaU) | (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x41U] 
                        >> 0x16U));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = (0x1fU & (vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4[0x42U] 
                    >> 0x16U));
    vlSelf->diff_ex_mem_to_mem_pc_o = vlSelf->top__DOT__ex_mem_to_mem_pc;
    vlSelf->diff_mem_to_mem_wb_pc_o = vlSelf->top__DOT__ex_mem_to_mem_pc;
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_pc = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_pc = ((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                             ? 0ULL
                                             : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                 ? vlSelf->top__DOT__if_id_to_id_pc
                                                 : 0ULL));
    }
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[3U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[4U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[5U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[6U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[7U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[8U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[9U] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffU & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_csr_wdata = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_csr_wdata = 
            ((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
              ? 0ULL : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                         ? vlSelf->top__DOT__ex0__DOT__csr_wdata_t
                         : 0ULL));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_csr_waddr = 0xf12U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_csr_waddr = 
            ((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
              ? 0xf12U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                           ? (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_waddr)
                           : 0xf12U));
    }
    vlSelf->top__DOT__csr0__DOT__wen_mcause = ((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                               & (0x342U 
                                                  == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)));
    vlSelf->top__DOT__csr0__DOT__wen_mie = ((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                            & (0x304U 
                                               == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)));
    vlSelf->top__DOT__csr0__DOT__wen_mip = ((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                            & (0x344U 
                                               == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)));
    vlSelf->top__DOT__csr0__DOT__wen_mstatus = ((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                                & (0x300U 
                                                   == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_csr_wreg = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_csr_wreg = 
            ((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
             | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                | (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_wreg)));
    }
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0xfU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x10U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x11U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x12U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x13U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x14U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x15U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x16U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x17U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x17U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x18U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x18U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x19U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x19U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x1aU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x1aU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x1bU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x1bU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x1cU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x1cU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x1dU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x1dU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0x1eU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list
           [0x1eU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0xfU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x10U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x11U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x12U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x13U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x14U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x15U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x16U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x17U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x17U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x18U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x18U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x19U] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x19U][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x1aU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x1aU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x1bU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x1bU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x1cU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x1cU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x1dU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x1dU][2U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0x1eU] 
        = (0x1fU & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list
           [0x1eU][2U]);
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_wreg = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_wreg = ((2U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                                | ((0U 
                                                    != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                                   | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex_mem_to_mem_rd_addr = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))) {
        vlSelf->top__DOT__ex_mem_to_mem_rd_addr = (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                     ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                                     : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__if_id_to_id_pc = 0ULL;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))) {
        vlSelf->top__DOT__if_id_to_id_pc = vlSelf->top__DOT__if_id0__DOT__pc_t;
    }
    vlSelf->diff_id_ex_to_ex_pc_o = vlSelf->top__DOT__id_ex_to_ex_pc;
    vlSelf->diff_ex_to_ex_mem_pc_o = vlSelf->top__DOT__id_ex_to_ex_pc;
    vlSelf->top__DOT__ex_to_ctrl_pc_new = ((IData)(vlSelf->top__DOT__id_ex_to_ex_imm_sel)
                                            ? (vlSelf->top__DOT__id_ex_to_ex_pc 
                                               + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                          >> 0x13U))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                     << 1U)))))
                                            : (vlSelf->top__DOT__id_ex_to_ex_pc 
                                               + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                          >> 0xbU))))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    (0x1ffeU 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        << 1U)))))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_csr_waddr = 0xf12U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_csr_waddr = (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 0xf12U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                     ? 
                                                    (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0x14U)
                                                     : 0xf12U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_csr_wreg = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_csr_wreg = ((2U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                                     | (0x73U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__if_id_to_id_inst))));
    }
    vlSelf->top__DOT__ex0__DOT__csr_data = ((((IData)(vlSelf->top__DOT__id_ex_to_ex_csr_raddr) 
                                              == (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_waddr)) 
                                             & (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_wreg))
                                             ? vlSelf->top__DOT__ex_mem_to_mem_csr_wdata
                                             : vlSelf->top__DOT__id_ex_to_ex_csr_data);
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_wreg = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_wreg = ((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                                 | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_ex_to_ex_rd_addr = 0U;
    } else if ((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))) {
        vlSelf->top__DOT__id_ex_to_ex_rd_addr = ((2U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 7U))
                                                   : 0U));
    }
    VL_EXTEND_WQ(66,64, __Vtemp1521, (4ULL + vlSelf->top__DOT__pc0__DOT__pc_ram_t));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__ex_to_ctrl_pc_new);
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__ex_to_ctrl_pc_new 
                   >> 0x20U));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[2U] 
        = (3U | (__Vtemp1521[0U] << 2U));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[3U] 
        = ((__Vtemp1521[0U] >> 0x1eU) | (__Vtemp1521[1U] 
                                         << 2U));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[4U] 
        = ((__Vtemp1521[1U] >> 0x1eU) | (__Vtemp1521[2U] 
                                         << 2U));
    VL_EXTEND_WQ(66,64, __Vtemp1524, (4ULL + vlSelf->top__DOT__pc_to_if_id_pc));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__ex_to_ctrl_pc_new);
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__ex_to_ctrl_pc_new 
                   >> 0x20U));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[2U] 
        = (3U | (__Vtemp1524[0U] << 2U));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[3U] 
        = ((__Vtemp1524[0U] >> 0x1eU) | (__Vtemp1524[1U] 
                                         << 2U));
    vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[4U] 
        = ((__Vtemp1524[1U] >> 0x1eU) | (__Vtemp1524[2U] 
                                         << 2U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0U] 
        = (IData)((QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[1U] 
        = (IData)(((QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)) 
                   >> 0x20U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[2U] 
        = (5U | ((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_data) 
                 << 3U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_data) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__id_ex_to_ex_rs1_data 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[4U] 
        = (8U | (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                           | (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))) 
                  << 6U) | ((IData)((vlSelf->top__DOT__id_ex_to_ex_rs1_data 
                                     >> 0x20U)) >> 0x1dU)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[5U] 
        = (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                     | (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))) 
            >> 0x1aU) | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                   | (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[6U] 
        = (0x180U | (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                               | vlSelf->top__DOT__id_ex_to_ex_rs1_data)) 
                      << 9U) | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                          | (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))) 
                                         >> 0x20U)) 
                                >> 0x1aU)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[7U] 
        = (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                     | vlSelf->top__DOT__id_ex_to_ex_rs1_data)) 
            >> 0x17U) | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                   | vlSelf->top__DOT__id_ex_to_ex_rs1_data) 
                                  >> 0x20U)) << 9U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[8U] 
        = (0x400U | (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                               & (~ (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))))) 
                      << 0xcU) | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                            | vlSelf->top__DOT__id_ex_to_ex_rs1_data) 
                                           >> 0x20U)) 
                                  >> 0x17U)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[9U] 
        = (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                     & (~ (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))))) 
            >> 0x14U) | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                   & (~ (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xaU] 
        = (0x7000U | (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                                & (~ vlSelf->top__DOT__id_ex_to_ex_rs1_data))) 
                       << 0xfU) | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                             & (~ (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))) 
                                            >> 0x20U)) 
                                   >> 0x14U)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xbU] 
        = (((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                     & (~ vlSelf->top__DOT__id_ex_to_ex_rs1_data))) 
            >> 0x11U) | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                   & (~ vlSelf->top__DOT__id_ex_to_ex_rs1_data)) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xcU] 
        = (0x18000U | ((IData)(((vlSelf->top__DOT__ex0__DOT__csr_data 
                                 & (~ vlSelf->top__DOT__id_ex_to_ex_rs1_data)) 
                                >> 0x20U)) >> 0x11U));
    vlSelf->diff_if_id_to_id_pc_o = vlSelf->top__DOT__if_id_to_id_pc;
    vlSelf->diff_id_to_id_ex_pc_o = vlSelf->top__DOT__if_id_to_id_pc;
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[0U];
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[1U];
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[2U]);
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[2U] 
                         >> 2U));
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[3U] 
                         >> 2U));
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4[4U] 
                 >> 2U));
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[0U];
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[1U];
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[2U]);
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[2U] 
                         >> 2U));
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[3U] 
                         >> 2U));
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4[4U] 
                 >> 2U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0U];
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[1U];
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[8U] 
                 >> 9U));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[9U] 
            << 0x14U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xbU] 
            << 0x11U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xaU] 
                         >> 0xfU));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xcU] 
            << 0x11U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xbU] 
                         >> 0xfU));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4[0xcU] 
                 >> 0xfU));
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                               == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
           == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
              == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
              == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
              == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
              == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
              == vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ex0__DOT__csr_wdata_t = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit)
                                                ? vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out
                                                : 0ULL);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1598;
    VlWide<3>/*95:0*/ __Vtemp1669;
    VlWide<3>/*95:0*/ __Vtemp1684;
    VlWide<3>/*95:0*/ __Vtemp1685;
    VlWide<5>/*159:0*/ __Vtemp1686;
    VlWide<5>/*159:0*/ __Vtemp1687;
    VlWide<4>/*127:0*/ __Vtemp1837;
    VlWide<3>/*95:0*/ __Vtemp1950;
    // Body
    if (vlSelf->dcache_data_valid_i) {
        vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2U] = 0U;
        vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2U] = 0U;
    } else {
        vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2U] = 1U;
        vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2U] = 1U;
    }
    VL_EXTEND_WQ(67,64, __Vtemp1598, (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->dcache_data_i 
                                                                      >> 7U)))))) 
                                       << 8U) | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->dcache_data_i))))));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0U] 
        = (IData)((QData)((IData)(vlSelf->dcache_data_i)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[1U] 
        = (IData)(((QData)((IData)(vlSelf->dcache_data_i)) 
                   >> 0x20U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[2U] 
        = (6U | ((IData)((((QData)((IData)((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->dcache_data_i 
                                                                  >> 0x1fU))))))) 
                           << 0x20U) | (QData)((IData)(vlSelf->dcache_data_i)))) 
                 << 3U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[3U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->dcache_data_i 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->dcache_data_i)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dcache_data_i 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->dcache_data_i))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[4U] 
        = (0x10U | (((IData)((QData)((IData)((0xffffU 
                                              & (IData)(vlSelf->dcache_data_i))))) 
                     << 6U) | ((IData)(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->dcache_data_i 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->dcache_data_i))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[5U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->dcache_data_i))))) 
            >> 0x1aU) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->dcache_data_i)))) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[6U] 
        = (0x140U | (((IData)((((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->dcache_data_i 
                                                               >> 0xfU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->dcache_data_i)))))) 
                      << 9U) | ((IData)(((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->dcache_data_i)))) 
                                         >> 0x20U)) 
                                >> 0x1aU)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[7U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->dcache_data_i 
                                                        >> 0xfU)))))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->dcache_data_i)))))) 
            >> 0x17U) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->dcache_data_i 
                                                                   >> 0xfU)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->dcache_data_i))))) 
                                  >> 0x20U)) << 9U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[8U] 
        = (0x200U | (((IData)(vlSelf->dcache_data_i) 
                      << 0xcU) | ((IData)(((((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dcache_data_i 
                                                                            >> 0xfU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->dcache_data_i))))) 
                                           >> 0x20U)) 
                                  >> 0x17U)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[9U] 
        = (((IData)(vlSelf->dcache_data_i) >> 0x14U) 
           | ((IData)((vlSelf->dcache_data_i >> 0x20U)) 
              << 0xcU));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xaU] 
        = (0x3000U | (((IData)((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->dcache_data_i))))) 
                       << 0xfU) | ((IData)((vlSelf->dcache_data_i 
                                            >> 0x20U)) 
                                   >> 0x14U)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xbU] 
        = (((IData)((QData)((IData)((0xffU & (IData)(vlSelf->dcache_data_i))))) 
            >> 0x11U) | ((IData)(((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->dcache_data_i)))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xcU] 
        = (0x20000U | ((__Vtemp1598[0U] << 0x12U) | 
                       ((IData)(((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->dcache_data_i)))) 
                                 >> 0x20U)) >> 0x11U)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xdU] 
        = ((__Vtemp1598[0U] >> 0xeU) | (__Vtemp1598[1U] 
                                        << 0x12U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xeU] 
        = ((__Vtemp1598[1U] >> 0xeU) | (__Vtemp1598[2U] 
                                        << 0x12U));
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list
                   [0U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list
                   [1U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list
                   [2U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list
                   [0U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list
                   [1U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list
                   [2U] >> 2U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0U];
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[1U];
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[8U] 
                 >> 9U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[9U] 
            << 0x14U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xbU] 
            << 0x11U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xaU] 
                         >> 0xfU));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xcU] 
            << 0x11U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xbU] 
                         >> 0xfU));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xcU] 
                 >> 0xfU));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xdU] 
            << 0xeU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xcU] 
                        >> 0x12U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xeU] 
            << 0xeU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xdU] 
                        >> 0x12U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4[0xeU] 
                 >> 0x12U));
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                       == vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
           == vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal = 
        ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out)
          : 0U);
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                       == vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
           == vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal = 
        ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out)
          : 0U);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
                               == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
           == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
                                  == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
              == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
                                  == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
              == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
                                  == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
              == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
                                  == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
              == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
                                  == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
              == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
                                  == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ex_mem_to_mem_funct3) 
              == vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__mem0__DOT__wdata_t_load = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit)
                                                  ? vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out
                                                  : 0ULL);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->top__DOT__mem0__DOT__wdata_t_load);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->top__DOT__mem0__DOT__wdata_t_load 
                   >> 0x20U));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list[0U][2U] = 3U;
    vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ex_mem_to_mem_opcode) 
                               == vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex_mem_to_mem_opcode) 
           == vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__mem_to_mem_wb_wdata = ((IData)(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__hit)
                                              ? vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__lut_out
                                              : vlSelf->top__DOT__ex_mem_to_mem_wdata);
    vlSelf->top__DOT__ex0__DOT__rs2_data = (((((IData)(vlSelf->top__DOT__id_ex_to_ex_rs2_addr) 
                                               == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                              & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg)) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))
                                             ? vlSelf->top__DOT__mem_to_mem_wb_wdata
                                             : vlSelf->top__DOT__id_ex_to_ex_rs2_data);
    vlSelf->top__DOT__ex0__DOT__rs1_data = (((((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr) 
                                               == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                              & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg)) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))
                                             ? vlSelf->top__DOT__mem_to_mem_wb_wdata
                                             : vlSelf->top__DOT__id_ex_to_ex_rs1_data);
    vlSelf->top__DOT__ex0__DOT__branch_flag_t_beq = 
        (vlSelf->top__DOT__ex0__DOT__rs1_data == vlSelf->top__DOT__ex0__DOT__rs2_data);
    vlSelf->top__DOT__ex0__DOT__wdata_addiw = (IData)(
                                                      ((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                                        + 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                                >> 0xbU))))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (0xfffU 
                                                                            & vlSelf->top__DOT__id_ex_to_ex_imm))))) 
                                                       >> 0x20U));
    VL_EXTEND_WQ(71,64, __Vtemp1669, (vlSelf->top__DOT__ex0__DOT__rs1_data 
                                      + vlSelf->top__DOT__ex0__DOT__rs2_data));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[0U] 
        = (IData)((vlSelf->top__DOT__ex0__DOT__rs1_data 
                   - vlSelf->top__DOT__ex0__DOT__rs2_data));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[1U] 
        = (IData)(((vlSelf->top__DOT__ex0__DOT__rs1_data 
                    - vlSelf->top__DOT__ex0__DOT__rs2_data) 
                   >> 0x20U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[2U] 
        = (0x20U | (__Vtemp1669[0U] << 7U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[3U] 
        = ((__Vtemp1669[0U] >> 0x19U) | (__Vtemp1669[1U] 
                                         << 7U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[4U] 
        = ((__Vtemp1669[1U] >> 0x19U) | (__Vtemp1669[2U] 
                                         << 7U));
    vlSelf->top__DOT__ex0__DOT__branch_flag_t = (((
                                                   ((((0x63U 
                                                       == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                                     & (IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t_beq)) 
                                                    | (((0x63U 
                                                         == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                                        & (5U 
                                                           == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                                       & VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data))) 
                                                   | (((0x63U 
                                                        == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                                       & (1U 
                                                          == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                                      & (~ (IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t_beq)))) 
                                                  | (0x67U 
                                                     == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode))) 
                                                 | (0x6fU 
                                                    == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)));
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[0U];
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[1U];
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[2U]);
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[3U] 
            << 0x19U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[2U] 
                         >> 7U));
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[4U] 
            << 0x19U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[3U] 
                         >> 7U));
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4[4U] 
                    >> 7U));
    vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1 
        = ((IData)(vlSelf->dcache_data_valid_i) ? ((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t)
                                                    ? 2U
                                                    : 0U)
            : 1U);
    vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux1____pinNumber4 
        = (0x1020U | ((((IData)(vlSelf->dcache_data_valid_i)
                         ? ((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t)
                             ? 2U : 0U) : 1U) << 0x10U) 
                      | (((IData)(vlSelf->dcache_ready_i)
                           ? 0U : 1U) << 8U)));
    if (vlSelf->dcache_data_valid_i) {
        vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1 
            = ((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t)
                ? 3U : 0U);
        vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1 
            = ((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t)
                ? 2U : 0U);
    } else {
        vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1 = 1U;
        vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1 = 1U;
    }
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[2U] 
        = vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1;
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (0xffU & vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux1____pinNumber4);
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1U] 
        = (0xffU & (vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux1____pinNumber4 
                    >> 8U));
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[2U] 
        = (0xffU & (vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux1____pinNumber4 
                    >> 0x10U));
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[2U] 
        = vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1;
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[2U] 
        = vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1;
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct7) 
                               == vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct7) 
           == vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct7) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct7) 
              == vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list
                   [0U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list
                   [1U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list
                   [2U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (0xfU & vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list
                   [0U] >> 4U));
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (0xfU & vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list
                   [1U] >> 4U));
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (0xfU & vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list
                   [2U] >> 4U));
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list
                   [0U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list
                   [1U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list
                   [2U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list
                   [0U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list
                   [1U] >> 2U));
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list
                   [2U] >> 2U));
    VL_EXTEND_WQ(67,64, __Vtemp1684, vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul);
    VL_EXTEND_WQ(67,64, __Vtemp1685, (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw))));
    __Vtemp1686[0U] = __Vtemp1685[0U];
    __Vtemp1686[1U] = __Vtemp1685[1U];
    __Vtemp1686[2U] = (((IData)((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                 + (((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (0xfffU 
                                                                 & vlSelf->top__DOT__id_ex_to_ex_imm)))))) 
                        << 3U) | __Vtemp1685[2U]);
    __Vtemp1686[3U] = (((IData)((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                 + (((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (0xfffU 
                                                                 & vlSelf->top__DOT__id_ex_to_ex_imm)))))) 
                        >> 0x1dU) | ((IData)(((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                               + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                          >> 0xbU))))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & vlSelf->top__DOT__id_ex_to_ex_imm))))) 
                                              >> 0x20U)) 
                                     << 3U));
    __Vtemp1686[4U] = ((IData)(((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                 + (((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (0xfffU 
                                                                 & vlSelf->top__DOT__id_ex_to_ex_imm))))) 
                                >> 0x20U)) >> 0x1dU);
    VL_EXTEND_WW(134,131, __Vtemp1687, __Vtemp1686);
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[0U] 
        = __Vtemp1687[0U];
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[1U] 
        = __Vtemp1687[1U];
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[2U] 
        = __Vtemp1687[2U];
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[3U] 
        = __Vtemp1687[3U];
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[4U] 
        = ((__Vtemp1684[0U] << 6U) | __Vtemp1687[4U]);
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[5U] 
        = ((__Vtemp1684[0U] >> 0x1aU) | (__Vtemp1684[1U] 
                                         << 6U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[6U] 
        = ((__Vtemp1684[1U] >> 0x1aU) | (__Vtemp1684[2U] 
                                         << 6U));
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                       == vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
           == vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out)
                                                    : 0U);
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                       == vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
           == vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ctrl0__DOT__FSM_next_state = 
        ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out)
          : 0U);
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                       == vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
           == vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ctrl_to_pc_ctrl_signal = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit)
                                                 ? (IData)(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out)
                                                 : 0U);
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                       == vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
           == vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
                          == vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t) 
              == vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal = ((IData)(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out)
                                                    : 0U);
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[0U];
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[1U];
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[2U]);
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
                               == vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
           == vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
                                  == vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
              == vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->icache_addr_o = ((IData)(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit)
                              ? vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out
                              : 0ULL);
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
                               == vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
           == vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
                                  == vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal) 
              == vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__pc0__DOT__pc_pipeline_t = ((IData)(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit)
                                                  ? vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out
                                                  : 0ULL);
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal) 
                               == vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal) 
           == vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal) 
                                  == vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal) 
              == vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__if_id0__DOT__pc_t = ((IData)(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit)
                                            ? vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out
                                            : 0ULL);
    vlSelf->top__DOT__if_id_to_id_inst = (((- (IData)(
                                                      (0U 
                                                       == (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal)))) 
                                           & ((2U == (IData)(vlSelf->top__DOT__if_id0__DOT__state))
                                               ? 0x13U
                                               : vlSelf->icache_data_i)) 
                                          | (0x13U 
                                             & (- (IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))))));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->dcache_wen_o = (0x23U == (0x7fU & vlSelf->top__DOT__if_id_to_id_inst));
    vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__lut_out 
        = (((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
            == vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
           == vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__lut_out) 
           | (((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
               == vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
              == vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->dcache_req_valid_o = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__hit) 
                                  & (IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
            == vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
           == vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out) 
           | (((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
               == vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
              == vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__id_to_id_ex_wreg = (1U & ((~ (IData)(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit)) 
                                                | (IData)(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out)));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
           == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x14U) == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((vlSelf->top__DOT__if_id_to_id_inst >> 0x14U) 
              == vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__csr_to_id_csr_data = ((IData)(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit)
                                             ? vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out
                                             : 0ULL);
    vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store 
        = ((0xfe0U & (vlSelf->top__DOT__if_id_to_id_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 7U)));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                              >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                  >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__id0__DOT__dcache_wlen_t_load 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                              >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                  >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                 >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__id0__DOT__dcache_wlen_t_store 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0xfU)) 
                               == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xfU)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0xfU)) == vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__regfile0__DOT__rdata1_t = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit)
                                                  ? vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out
                                                  : 0ULL);
    __Vtemp1837[3U] = (((IData)((0x318000000ULL | (QData)((IData)(
                                                                  (0x6fU 
                                                                   | ((0x40000U 
                                                                       & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                          >> 0xdU)) 
                                                                      | ((0x20000U 
                                                                          & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                             << 0xaU)) 
                                                                         | ((0x1f800U 
                                                                             & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                                >> 0xeU)) 
                                                                            | (0x780U 
                                                                               & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                                >> 1U)))))))))) 
                        >> 0x16U) | ((IData)(((0x318000000ULL 
                                               | (QData)((IData)(
                                                                 (0x6fU 
                                                                  | ((0x40000U 
                                                                      & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                         >> 0xdU)) 
                                                                     | ((0x20000U 
                                                                         & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                            << 0xaU)) 
                                                                        | ((0x1f800U 
                                                                            & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                               >> 0xeU)) 
                                                                           | (0x780U 
                                                                              & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                                >> 1U))))))))) 
                                              >> 0x20U)) 
                                     << 0xaU));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[0U] 
        = (IData)((0xb800000000000ULL | (((QData)((IData)(
                                                          (0x3ffU 
                                                           & (vlSelf->top__DOT__if_id_to_id_inst 
                                                              >> 0x15U)))) 
                                          << 0x36U) 
                                         | (((QData)((IData)(
                                                             (vlSelf->top__DOT__if_id_to_id_inst 
                                                              >> 0xcU))) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              (0x3700000U 
                                                               | (vlSelf->top__DOT__if_id_to_id_inst 
                                                                  >> 0xcU))))))));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[1U] 
        = (IData)(((0xb800000000000ULL | (((QData)((IData)(
                                                           (0x3ffU 
                                                            & (vlSelf->top__DOT__if_id_to_id_inst 
                                                               >> 0x15U)))) 
                                           << 0x36U) 
                                          | (((QData)((IData)(
                                                              (vlSelf->top__DOT__if_id_to_id_inst 
                                                               >> 0xcU))) 
                                              << 0x1bU) 
                                             | (QData)((IData)(
                                                               (0x3700000U 
                                                                | (vlSelf->top__DOT__if_id_to_id_inst 
                                                                   >> 0xcU))))))) 
                   >> 0x20U));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[2U] 
        = (((IData)((0x318000000ULL | (QData)((IData)(
                                                      (0x6fU 
                                                       | ((0x40000U 
                                                           & (vlSelf->top__DOT__if_id_to_id_inst 
                                                              >> 0xdU)) 
                                                          | ((0x20000U 
                                                              & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                 << 0xaU)) 
                                                             | ((0x1f800U 
                                                                 & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                    >> 0xeU)) 
                                                                | (0x780U 
                                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                      >> 1U)))))))))) 
            << 0xaU) | ((0x200U & (vlSelf->top__DOT__if_id_to_id_inst 
                                   >> 0x16U)) | ((0x1feU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xbU)) 
                                                 | (1U 
                                                    & (vlSelf->top__DOT__if_id_to_id_inst 
                                                       >> 0x14U)))));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[3U] 
        = __Vtemp1837[3U];
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0x14U)) 
                               == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U)) 
                                  == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                        >> 0x14U)) == vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__regfile0__DOT__rdata2_t = ((IData)(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit)
                                                  ? vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out
                                                  : 0ULL);
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                               == vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
           == vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
              == vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_funct3) 
              == vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ex0__DOT__wdata_opcode_R = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit)
                                                   ? vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out
                                                   : 0ULL);
    vlSelf->dcache_wlen_o = ((0x23U == (0x7fU & vlSelf->top__DOT__if_id_to_id_inst))
                              ? (IData)(vlSelf->top__DOT__id0__DOT__dcache_wlen_t_store)
                              : (IData)(vlSelf->top__DOT__id0__DOT__dcache_wlen_t_load));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffffffU & vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[0U]);
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffffffU & ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[1U] 
                          << 5U) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[0U] 
                                    >> 0x1bU)));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffffffU & ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[2U] 
                          << 0xaU) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[1U] 
                                      >> 0x16U)));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffffffU & ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[3U] 
                          << 0xfU) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4[2U] 
                                      >> 0x11U)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                   >> 0x13U)))))) 
                    << 0x20U) | (QData)((IData)((vlSelf->top__DOT__id_ex_to_ex_imm 
                                                 << 0xcU)))));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                    >> 0x13U)))))) 
                     << 0x20U) | (QData)((IData)((vlSelf->top__DOT__id_ex_to_ex_imm 
                                                  << 0xcU)))) 
                   >> 0x20U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[2U] 
        = (0x37U | ((IData)((vlSelf->top__DOT__id_ex_to_ex_pc 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0x13U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                              << 0xcU)))))) 
                    << 7U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[3U] 
        = (((IData)((vlSelf->top__DOT__id_ex_to_ex_pc 
                     + (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                        >> 0x13U)))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                      << 0xcU)))))) 
            >> 0x19U) | ((IData)(((vlSelf->top__DOT__id_ex_to_ex_pc 
                                   + (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                      >> 0x13U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                    << 0xcU))))) 
                                  >> 0x20U)) << 7U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[4U] 
        = (0xb80U | (((IData)(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R) 
                      << 0xeU) | ((IData)(((vlSelf->top__DOT__id_ex_to_ex_pc 
                                            + (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                               >> 0x13U)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                  << 0xcU))))) 
                                           >> 0x20U)) 
                                  >> 0x19U)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R) 
            >> 0x12U) | ((IData)((vlSelf->top__DOT__ex0__DOT__wdata_opcode_R 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[6U] 
        = (0xcc000U | (((IData)((4ULL + vlSelf->top__DOT__id_ex_to_ex_pc)) 
                        << 0x15U) | ((IData)((vlSelf->top__DOT__ex0__DOT__wdata_opcode_R 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[7U] 
        = (((IData)((4ULL + vlSelf->top__DOT__id_ex_to_ex_pc)) 
            >> 0xbU) | ((IData)(((4ULL + vlSelf->top__DOT__id_ex_to_ex_pc) 
                                 >> 0x20U)) << 0x15U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[8U] 
        = (0xde00000U | (((IData)(vlSelf->top__DOT__ex0__DOT__csr_data) 
                          << 0x1cU) | ((IData)(((4ULL 
                                                 + vlSelf->top__DOT__id_ex_to_ex_pc) 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[9U] 
        = (((IData)(vlSelf->top__DOT__ex0__DOT__csr_data) 
            >> 4U) | ((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[0xaU] 
        = (0x30000000U | ((IData)((vlSelf->top__DOT__ex0__DOT__csr_data 
                                   >> 0x20U)) >> 4U));
    vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[0xbU] = 7U;
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = (0xfffffU & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
                    [0U] >> 0x14U));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = (0xfffffU & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
                    [1U] >> 0x14U));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = (0xfffffU & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
                    [2U] >> 0x14U));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[3U] 
        = (0xfffffU & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list
                    [3U] >> 0x14U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[0U];
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[1U];
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[2U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[3U] 
            << 0x19U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[2U] 
                         >> 7U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[4U] 
            << 0x19U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[3U] 
                         >> 7U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[4U] 
                    >> 7U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[5U] 
            << 0x12U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[4U] 
                         >> 0xeU));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[6U] 
            << 0x12U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[6U] 
                    >> 0xeU));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[7U] 
            << 0xbU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[6U] 
                        >> 0x15U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[8U] 
            << 0xbU) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[7U] 
                        >> 0x15U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[8U] 
                    >> 0x15U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[9U] 
            << 4U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[8U] 
                      >> 0x1cU));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[0xaU] 
            << 4U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[9U] 
                      >> 0x1cU));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[0xbU] 
                     << 4U) | (vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4[0xaU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
                       == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
           == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
                          == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
              == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
                          == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
              == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
                          == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__if_id_to_id_inst) 
              == vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__id_to_id_ex_imm = ((IData)(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit)
                                          ? vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out
                                          : (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0x14U));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
                               == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
           == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
              == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
              == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
              == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
                                  == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__id_ex_to_ex_opcode) 
              == vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ex0__DOT__wdata_t = ((IData)(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit)
                                            ? vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out
                                            : 0ULL);
    vlSelf->top__DOT__id_to_id_ex_rs1_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__if_id_to_id_inst 
                                                   >> 0xfU)))
                                               ? 0ULL
                                               : ((
                                                   ((0x1fU 
                                                     & (vlSelf->top__DOT__if_id_to_id_inst 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                   & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                   ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                   : 
                                                  ((((0x1fU 
                                                      & (vlSelf->top__DOT__if_id_to_id_inst 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                    & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                    ? vlSelf->top__DOT__mem_to_mem_wb_wdata
                                                    : 
                                                   ((((0x1fU 
                                                       & (vlSelf->top__DOT__if_id_to_id_inst 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)) 
                                                     & (IData)(vlSelf->top__DOT__mem_wb_to_regfile_we))
                                                     ? vlSelf->top__DOT__mem_wb_to_regfile_wdata
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                          & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                                >> 0xfU))))))) 
                                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                     | ((~ 
                                                         (- (QData)((IData)(
                                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                                >> 0xfU)))))))) 
                                                        & vlSelf->top__DOT__regfile0__DOT__rdata1_t))))));
    vlSelf->top__DOT__id_to_id_ex_rs2_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__if_id_to_id_inst 
                                                   >> 0x14U)))
                                               ? 0ULL
                                               : ((
                                                   ((0x1fU 
                                                     & (vlSelf->top__DOT__if_id_to_id_inst 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                   & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                   ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                   : 
                                                  ((((0x1fU 
                                                      & (vlSelf->top__DOT__if_id_to_id_inst 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                    & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                    ? vlSelf->top__DOT__mem_to_mem_wb_wdata
                                                    : 
                                                   ((((0x1fU 
                                                       & (vlSelf->top__DOT__if_id_to_id_inst 
                                                          >> 0x14U)) 
                                                      == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)) 
                                                     & (IData)(vlSelf->top__DOT__mem_wb_to_regfile_we))
                                                     ? vlSelf->top__DOT__mem_wb_to_regfile_wdata
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                          & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                                >> 0x14U))))))) 
                                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                     | ((~ 
                                                         (- (QData)((IData)(
                                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                                >> 0x14U)))))))) 
                                                        & vlSelf->top__DOT__regfile0__DOT__rdata2_t))))));
    vlSelf->dcache_addr_o = ((0x23U == (0x7fU & vlSelf->top__DOT__if_id_to_id_inst))
                              ? (vlSelf->top__DOT__id_to_id_ex_rs1_data 
                                 + (((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store))))
                              : (vlSelf->top__DOT__id_to_id_ex_rs1_data 
                                 + (((- (QData)((IData)(
                                                        (vlSelf->top__DOT__if_id_to_id_inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->top__DOT__if_id_to_id_inst 
                                                                 >> 0x14U))))));
    VL_EXTEND_WI(67,8, __Vtemp1950, (0xffU & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data)));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[0U] 
        = (IData)((QData)((IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data)));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[1U] 
        = (IData)(((QData)((IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data)) 
                   >> 0x20U));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[2U] 
        = (2U | ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))))) 
                 << 3U));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[3U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))))) 
            >> 0x1dU) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data)))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[4U] 
        = (8U | (((IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data) 
                  << 6U) | ((IData)(((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data)))) 
                                     >> 0x20U)) >> 0x1dU)));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data) 
            >> 0x1aU) | ((IData)((vlSelf->top__DOT__id_to_id_ex_rs2_data 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[6U] 
        = (0xc0U | ((__Vtemp1950[0U] << 9U) | ((IData)(
                                                       (vlSelf->top__DOT__id_to_id_ex_rs2_data 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[7U] 
        = ((__Vtemp1950[0U] >> 0x17U) | (__Vtemp1950[1U] 
                                         << 9U));
    vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[8U] 
        = ((__Vtemp1950[1U] >> 0x17U) | (__Vtemp1950[2U] 
                                         << 9U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[0U];
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[1U];
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[2U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4[8U] 
                 >> 9U));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                      >> 0xcU)) == 
                               vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                  >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                     >> 0xcU)) == vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->dcache_wdata_o = ((IData)(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit)
                               ? vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out
                               : 0ULL);
}
