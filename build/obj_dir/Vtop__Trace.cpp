// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[1]));
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[2]),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1),4);
            tracep->chgIData(oldp+17,((0x1220U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1) 
                                                  << 0x10U))),24);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__if_id_to_id_pc),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
            tracep->chgIData(oldp+33,(vlSelf->top__DOT__if_id0__DOT__dout),32);
            tracep->chgQData(oldp+34,((((- (QData)((IData)(
                                                           ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                            & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                   >> 0xfU))))))) 
                                        & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                       | ((~ (- (QData)((IData)(
                                                                ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                 & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                        >> 0xfU)))))))) 
                                          & vlSelf->top__DOT__regfile0__DOT__rdata1_t))),64);
            tracep->chgQData(oldp+36,((((- (QData)((IData)(
                                                           ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                            & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                   >> 0x14U))))))) 
                                        & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                       | ((~ (- (QData)((IData)(
                                                                ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                 & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                        >> 0x14U)))))))) 
                                          & vlSelf->top__DOT__regfile0__DOT__rdata2_t))),64);
            tracep->chgQData(oldp+38,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                  >> 0xfU)))
                                        ? 0ULL : ((
                                                   ((0x1fU 
                                                     & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                   & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                   ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                   : 
                                                  ((((0x1fU 
                                                      & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                    & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                    ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                    : 
                                                   ((((0x1fU 
                                                       & (vlSelf->top__DOT__if_id0__DOT__dout 
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
                                                                              & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0xfU))))))) 
                                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                     | ((~ 
                                                         (- (QData)((IData)(
                                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0xfU)))))))) 
                                                        & vlSelf->top__DOT__regfile0__DOT__rdata1_t))))))),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
            tracep->chgQData(oldp+42,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                  >> 0x14U)))
                                        ? 0ULL : ((
                                                   ((0x1fU 
                                                     & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                   & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                   ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                   : 
                                                  ((((0x1fU 
                                                      & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                    & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                    ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                    : 
                                                   ((((0x1fU 
                                                       & (vlSelf->top__DOT__if_id0__DOT__dout 
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
                                                                              & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0x14U))))))) 
                                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                     | ((~ 
                                                         (- (QData)((IData)(
                                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0x14U)))))))) 
                                                        & vlSelf->top__DOT__regfile0__DOT__rdata2_t))))))),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
            tracep->chgCData(oldp+46,((0x1fU & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+47,((0x1fU & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
            tracep->chgCData(oldp+50,((0x1fU & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                >> 7U))),5);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__ex_to_ex_mem_wdata),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
            tracep->chgCData(oldp+59,((0x7fU & vlSelf->top__DOT__if_id0__DOT__dout)),7);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
            tracep->chgCData(oldp+61,((7U & (vlSelf->top__DOT__if_id0__DOT__dout 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
            tracep->chgCData(oldp+63,((vlSelf->top__DOT__if_id0__DOT__dout 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__id_to_id_ex_wreg));
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__id_ex_to_ex_wreg));
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
            tracep->chgIData(oldp+68,(vlSelf->top__DOT__id_to_id_ex_imm),20);
            tracep->chgIData(oldp+69,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
            tracep->chgSData(oldp+70,(vlSelf->top__DOT__id_to_id_ex_offset12),12);
            tracep->chgSData(oldp+71,(vlSelf->top__DOT__id_ex_to_ex_offset12),12);
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__mem_wb_to_regfile_we));
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__ex_branch_flag));
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
            tracep->chgCData(oldp+80,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__ctrl_to_pc_pc_new),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__pc_to_if_id_pc),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
            tracep->chgBit(oldp+90,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
            tracep->chgWData(oldp+93,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
            tracep->chgWData(oldp+98,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+101,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+104,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+105,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+113,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux2____pinNumber4),132);
            tracep->chgWData(oldp+118,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+121,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+124,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+133,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+136,((vlSelf->top__DOT__if_id0__DOT__dout 
                                        >> 0x14U)),20);
            tracep->chgWData(oldp+137,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),81);
            tracep->chgIData(oldp+140,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
            tracep->chgIData(oldp+141,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
            tracep->chgIData(oldp+142,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+144,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+145,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
            tracep->chgIData(oldp+146,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
            tracep->chgIData(oldp+147,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
            tracep->chgIData(oldp+148,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
            tracep->chgIData(oldp+149,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+151,((vlSelf->top__DOT__if_id0__DOT__dout 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux3____pinNumber4),38);
            tracep->chgIData(oldp+154,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[0]),19);
            tracep->chgIData(oldp+155,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[1]),19);
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+157,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgSData(oldp+158,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[0]),12);
            tracep->chgSData(oldp+159,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[1]),12);
            tracep->chgSData(oldp+160,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__lut_out),12);
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+162,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
            tracep->chgBit(oldp+288,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+289,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+290,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+291,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+292,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+293,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+294,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+295,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+296,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+297,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+298,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+299,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+300,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+301,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+302,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+303,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+304,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+305,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+306,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+307,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+308,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+309,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+310,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+311,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+312,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+313,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+314,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+315,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+316,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+317,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+318,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
            tracep->chgWData(oldp+323,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
            tracep->chgWData(oldp+390,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+393,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+396,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+399,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+402,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+405,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+408,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+411,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+414,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+417,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+420,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+423,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+426,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+429,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+432,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+435,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+438,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+441,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+444,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+447,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+450,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+453,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+456,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+459,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+462,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+465,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+468,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+471,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+474,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+477,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+480,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+483,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+484,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+485,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+486,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+487,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+488,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+489,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+490,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+491,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+492,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+493,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+494,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+495,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+496,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+497,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+498,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+499,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+500,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+501,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+502,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+503,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+504,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+505,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+506,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+507,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+508,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+509,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+510,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+511,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+512,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+513,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+560,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+566,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+568,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+570,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+578,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+579,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
            tracep->chgWData(oldp+646,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+649,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+652,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+655,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+658,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+661,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+664,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+667,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+670,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+673,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+676,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+679,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+682,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+685,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+688,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+691,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+694,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+697,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+700,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+703,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+706,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+709,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+712,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+715,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+718,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+721,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+724,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+727,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+730,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+733,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+736,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+739,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+740,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+741,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+742,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+743,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+744,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+745,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+746,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+747,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+748,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+749,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+750,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+751,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+752,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+753,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+754,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+755,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+756,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+757,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+758,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+759,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+760,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+761,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+762,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+763,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+764,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+765,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+766,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+767,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+768,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+769,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+770,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+772,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+774,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+776,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+778,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+780,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+782,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+784,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+786,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+788,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+790,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+792,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+794,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+796,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+798,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+800,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+802,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+804,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+806,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+808,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+810,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+812,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+814,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+816,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+818,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+820,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+822,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+824,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+826,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+828,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+830,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+832,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+834,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+835,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                     >> 0xfU))
                                                  : 0U))),5);
            tracep->chgBit(oldp+836,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
            tracep->chgCData(oldp+837,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                     >> 0x14U))
                                                  : 0U))),5);
            tracep->chgCData(oldp+838,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0x13U : 
                                        ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? (0x7fU 
                                             & vlSelf->top__DOT__if_id0__DOT__dout)
                                          : 0U))),7);
            tracep->chgCData(oldp+839,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (7U 
                                                  & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                     >> 0xcU))
                                                  : 0U))),3);
            tracep->chgCData(oldp+840,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (vlSelf->top__DOT__if_id0__DOT__dout 
                                                  >> 0x19U)
                                                  : 0U))),7);
            tracep->chgQData(oldp+841,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                         >> 0xfU)))
                                                     ? 0ULL
                                                     : 
                                                    ((((0x1fU 
                                                        & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                      & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                      ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                      : 
                                                     ((((0x1fU 
                                                         & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                            >> 0xfU)) 
                                                        == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                       & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                       ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                       : 
                                                      ((((0x1fU 
                                                          & (vlSelf->top__DOT__if_id0__DOT__dout 
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
                                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0xfU))))))) 
                                                         & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                        | ((~ 
                                                            (- (QData)((IData)(
                                                                               ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                                & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0xfU)))))))) 
                                                           & vlSelf->top__DOT__regfile0__DOT__rdata1_t))))))
                                                    : 0ULL))),64);
            tracep->chgQData(oldp+843,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                         >> 0x14U)))
                                                     ? 0ULL
                                                     : 
                                                    ((((0x1fU 
                                                        & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                           >> 0x14U)) 
                                                       == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                      & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                      ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                      : 
                                                     ((((0x1fU 
                                                         & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                            >> 0x14U)) 
                                                        == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                       & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                       ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                       : 
                                                      ((((0x1fU 
                                                          & (vlSelf->top__DOT__if_id0__DOT__dout 
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
                                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0x14U))))))) 
                                                         & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                        | ((~ 
                                                            (- (QData)((IData)(
                                                                               ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                                & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                                                >> 0x14U)))))))) 
                                                           & vlSelf->top__DOT__regfile0__DOT__rdata2_t))))))
                                                    : 0ULL))),64);
            tracep->chgCData(oldp+845,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if_id0__DOT__dout 
                                                     >> 7U))
                                                  : 0U))),5);
            tracep->chgBit(oldp+846,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                         | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
            tracep->chgIData(oldp+847,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? vlSelf->top__DOT__id_to_id_ex_imm
                                                  : 0U))),20);
            tracep->chgSData(oldp+848,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? (IData)(vlSelf->top__DOT__id_to_id_ex_offset12)
                                                  : 0U))),12);
            tracep->chgQData(oldp+849,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
            tracep->chgQData(oldp+851,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
            tracep->chgIData(oldp+853,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
            tracep->chgQData(oldp+854,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+856,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   >> 0xbU))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
            tracep->chgQData(oldp+858,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
            tracep->chgQData(oldp+860,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                        + (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                           >> 0x13U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                              << 0xcU)))))),64);
            tracep->chgQData(oldp+862,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+864,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
            tracep->chgQData(oldp+866,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
            tracep->chgBit(oldp+868,(((((((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                          & (0U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                         & (vlSelf->top__DOT__ex0__DOT__rs1_data 
                                            == vlSelf->top__DOT__ex0__DOT__rs2_data)) 
                                        | (((0x63U 
                                             == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                            & (5U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                           & VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data))) 
                                       | (0x67U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode))) 
                                      | (0x6fU == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)))));
            tracep->chgBit(oldp+869,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                      == vlSelf->top__DOT__ex0__DOT__rs2_data)));
            tracep->chgBit(oldp+870,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
            tracep->chgWData(oldp+871,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux1____pinNumber4),142);
            tracep->chgWData(oldp+876,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+879,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+882,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+883,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+884,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+886,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+888,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+890,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+891,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux2____pinNumber4),201);
            tracep->chgWData(oldp+898,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+901,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+904,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+907,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+908,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+909,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+910,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+912,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+914,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+916,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+918,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+919,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux3____pinNumber4),142);
            tracep->chgWData(oldp+924,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+927,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+930,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+931,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+932,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+934,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+936,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+938,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+939,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                  ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                                  : 0U))),5);
            tracep->chgBit(oldp+940,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
            tracep->chgBit(oldp+941,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                      | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                         | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
            tracep->chgQData(oldp+942,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                    ? vlSelf->top__DOT__ex_to_ex_mem_wdata
                                                    : 0ULL))),64);
            tracep->chgBit(oldp+944,((0U == (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
            tracep->chgCData(oldp+945,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
            tracep->chgCData(oldp+946,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
            tracep->chgCData(oldp+947,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1),2);
            tracep->chgCData(oldp+948,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1),2);
            tracep->chgCData(oldp+949,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1),2);
            tracep->chgCData(oldp+950,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_ex_mem_t_1),2);
            tracep->chgIData(oldp+951,((0x1c8U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1) 
                                                  << 0xcU))),18);
            tracep->chgCData(oldp+952,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+953,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+954,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+955,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+956,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+957,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+958,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+959,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+960,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+961,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+962,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+963,((0x18aU | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1) 
                                                  << 0xcU))),18);
            tracep->chgCData(oldp+964,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+965,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+966,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+967,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+968,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+969,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+970,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+971,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+972,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+973,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+974,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+975,((0x188U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1) 
                                                  << 0xcU))),18);
            tracep->chgCData(oldp+976,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+977,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+978,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+979,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+980,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+981,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+982,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+983,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+984,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+985,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+986,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+987,((0x108U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_ex_mem_t_1) 
                                                  << 0xcU))),18);
            tracep->chgCData(oldp+988,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+989,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+990,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+991,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+992,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+993,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+994,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+995,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+996,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+997,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+998,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+999,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1000,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1001,(vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux7____pinNumber4),204);
            tracep->chgWData(oldp+1008,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+1011,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+1014,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+1017,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1018,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1019,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+1020,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1022,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1024,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1026,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1028,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+1029,(vlSelf->clk));
        tracep->chgBit(oldp+1030,(vlSelf->rst));
        tracep->chgBit(oldp+1031,(vlSelf->icache_data_valid_i));
        tracep->chgIData(oldp+1032,(vlSelf->icache_data_i),32);
        tracep->chgQData(oldp+1033,(vlSelf->icache_addr_o),64);
        tracep->chgBit(oldp+1035,(vlSelf->icache_req_valid_o));
        tracep->chgBit(oldp+1036,(vlSelf->icache_data_wen_o));
        tracep->chgQData(oldp+1037,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->chgQData(oldp+1039,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->chgQData(oldp+1041,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->chgQData(oldp+1043,(vlSelf->diff_regs_o[0]),64);
        tracep->chgQData(oldp+1045,(vlSelf->diff_regs_o[1]),64);
        tracep->chgQData(oldp+1047,(vlSelf->diff_regs_o[2]),64);
        tracep->chgQData(oldp+1049,(vlSelf->diff_regs_o[3]),64);
        tracep->chgQData(oldp+1051,(vlSelf->diff_regs_o[4]),64);
        tracep->chgQData(oldp+1053,(vlSelf->diff_regs_o[5]),64);
        tracep->chgQData(oldp+1055,(vlSelf->diff_regs_o[6]),64);
        tracep->chgQData(oldp+1057,(vlSelf->diff_regs_o[7]),64);
        tracep->chgQData(oldp+1059,(vlSelf->diff_regs_o[8]),64);
        tracep->chgQData(oldp+1061,(vlSelf->diff_regs_o[9]),64);
        tracep->chgQData(oldp+1063,(vlSelf->diff_regs_o[10]),64);
        tracep->chgQData(oldp+1065,(vlSelf->diff_regs_o[11]),64);
        tracep->chgQData(oldp+1067,(vlSelf->diff_regs_o[12]),64);
        tracep->chgQData(oldp+1069,(vlSelf->diff_regs_o[13]),64);
        tracep->chgQData(oldp+1071,(vlSelf->diff_regs_o[14]),64);
        tracep->chgQData(oldp+1073,(vlSelf->diff_regs_o[15]),64);
        tracep->chgQData(oldp+1075,(vlSelf->diff_regs_o[16]),64);
        tracep->chgQData(oldp+1077,(vlSelf->diff_regs_o[17]),64);
        tracep->chgQData(oldp+1079,(vlSelf->diff_regs_o[18]),64);
        tracep->chgQData(oldp+1081,(vlSelf->diff_regs_o[19]),64);
        tracep->chgQData(oldp+1083,(vlSelf->diff_regs_o[20]),64);
        tracep->chgQData(oldp+1085,(vlSelf->diff_regs_o[21]),64);
        tracep->chgQData(oldp+1087,(vlSelf->diff_regs_o[22]),64);
        tracep->chgQData(oldp+1089,(vlSelf->diff_regs_o[23]),64);
        tracep->chgQData(oldp+1091,(vlSelf->diff_regs_o[24]),64);
        tracep->chgQData(oldp+1093,(vlSelf->diff_regs_o[25]),64);
        tracep->chgQData(oldp+1095,(vlSelf->diff_regs_o[26]),64);
        tracep->chgQData(oldp+1097,(vlSelf->diff_regs_o[27]),64);
        tracep->chgQData(oldp+1099,(vlSelf->diff_regs_o[28]),64);
        tracep->chgQData(oldp+1101,(vlSelf->diff_regs_o[29]),64);
        tracep->chgQData(oldp+1103,(vlSelf->diff_regs_o[30]),64);
        tracep->chgQData(oldp+1105,(vlSelf->diff_regs_o[31]),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
