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
    VlWide<3>/*95:0*/ __Vtemp1372;
    VlWide<5>/*159:0*/ __Vtemp1374;
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
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__if_id_to_id_pc),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__id_ex_to_ex_wreg));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
            tracep->chgIData(oldp+41,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__id_ex_to_ex_imm_sel));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__mem_wb_to_regfile_we));
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__ex0__DOT__branch_flag_t));
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__pc_to_if_id_pc),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
            tracep->chgBit(oldp+57,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
            tracep->chgWData(oldp+60,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
            tracep->chgWData(oldp+65,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+68,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+80,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4),132);
            tracep->chgWData(oldp+85,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+88,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+92,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__if_id0__DOT__pc_t),64);
            tracep->chgBit(oldp+102,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
            tracep->chgCData(oldp+103,(vlSelf->top__DOT__if_id0__DOT__state),2);
            VL_EXTEND_WQ(66,64, __Vtemp1372, vlSelf->top__DOT__pc_to_if_id_pc);
            __Vtemp1374[0U] = 0U;
            __Vtemp1374[1U] = 0U;
            __Vtemp1374[2U] = (2U | (__Vtemp1372[0U] 
                                     << 2U));
            __Vtemp1374[3U] = ((__Vtemp1372[0U] >> 0x1eU) 
                               | (__Vtemp1372[1U] << 2U));
            __Vtemp1374[4U] = ((__Vtemp1372[1U] >> 0x1eU) 
                               | (__Vtemp1372[2U] << 2U));
            tracep->chgWData(oldp+104,(__Vtemp1374),132);
            tracep->chgWData(oldp+109,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+112,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+115,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+116,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+124,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
            tracep->chgBit(oldp+250,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+251,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+252,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+253,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+254,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+255,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+256,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+257,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+258,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+259,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+260,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+261,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+262,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+263,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+264,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+265,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+266,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+267,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+268,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+269,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+270,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+271,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+272,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+273,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+274,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+275,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+276,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+277,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+278,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+279,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+280,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgWData(oldp+281,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
            tracep->chgWData(oldp+348,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+351,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+354,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+357,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+360,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+363,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+366,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+369,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+372,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+375,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+378,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+381,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+384,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+387,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+390,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+393,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+396,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+399,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+402,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+405,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+408,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+411,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+414,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+417,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+420,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+423,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+426,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+429,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+432,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+435,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+438,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+441,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+442,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+443,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+444,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+445,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+446,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+447,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+448,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+449,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+450,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+451,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+452,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+453,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+454,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+455,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+456,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+457,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+458,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+459,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+460,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+461,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+462,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+463,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+464,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+465,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+466,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+467,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+468,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+469,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+470,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+471,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+472,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+474,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+476,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+478,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+480,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+482,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+484,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+486,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+502,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
            tracep->chgWData(oldp+534,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
            tracep->chgWData(oldp+601,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+604,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+607,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+610,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+613,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+616,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+619,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+622,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+625,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+628,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+631,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+634,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+637,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+640,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+643,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+646,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+649,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+652,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+655,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+658,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+661,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+664,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+667,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+670,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+673,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+676,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+679,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+682,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+685,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+688,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+691,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+694,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+695,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+696,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+697,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+698,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+699,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+700,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+701,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+702,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+703,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+704,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+705,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+706,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+707,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+708,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+709,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+710,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+711,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+712,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+713,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+714,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+715,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+716,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+717,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+718,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+719,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+720,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+721,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+722,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+723,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+724,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+725,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+727,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+729,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+731,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+733,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+735,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+737,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+739,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+741,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+743,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+745,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+747,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+749,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+751,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+753,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+755,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+757,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+759,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+761,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+763,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+765,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+767,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+769,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+773,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+775,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+777,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+779,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+781,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+783,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+785,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
            tracep->chgBit(oldp+787,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
            tracep->chgQData(oldp+788,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? vlSelf->top__DOT__if_id_to_id_pc
                                                    : 0ULL))),64);
            tracep->chgQData(oldp+790,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
            tracep->chgQData(oldp+792,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
            tracep->chgIData(oldp+794,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
            tracep->chgQData(oldp+795,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+797,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   >> 0xbU))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
            tracep->chgQData(oldp+799,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
            tracep->chgQData(oldp+801,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                        + (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                           >> 0x13U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                              << 0xcU)))))),64);
            tracep->chgQData(oldp+803,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        >> 0x13U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+805,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+807,((4ULL + vlSelf->top__DOT__id_ex_to_ex_pc)),64);
            tracep->chgQData(oldp+809,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
            tracep->chgQData(oldp+811,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
            tracep->chgBit(oldp+813,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                      == vlSelf->top__DOT__ex0__DOT__rs2_data)));
            tracep->chgBit(oldp+814,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
            tracep->chgQData(oldp+815,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   >> 0x13U))))) 
                                            << 0x15U) 
                                           | (QData)((IData)(
                                                             (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                              << 1U)))))),64);
            tracep->chgWData(oldp+817,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4),284);
            tracep->chgWData(oldp+826,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+829,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+832,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+835,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgCData(oldp+838,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+839,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+840,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+841,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[3]),7);
            tracep->chgQData(oldp+842,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+844,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+846,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+848,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+850,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+852,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+853,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4),201);
            tracep->chgWData(oldp+860,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+863,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+866,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+869,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+870,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+871,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+872,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+874,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+876,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+878,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+880,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+881,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4),142);
            tracep->chgWData(oldp+886,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+889,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+892,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+893,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+894,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+896,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+898,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+900,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+901,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                  ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                                  : 0U))),5);
            tracep->chgBit(oldp+902,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
            tracep->chgBit(oldp+903,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                      | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                         | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
            tracep->chgQData(oldp+904,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                    ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                    : 0ULL))),64);
            tracep->chgBit(oldp+906,((0U == (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
            tracep->chgCData(oldp+907,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
            tracep->chgCData(oldp+908,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
            tracep->chgCData(oldp+909,((3U & (- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))))),2);
            tracep->chgCData(oldp+910,((2U & (- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))))),2);
            tracep->chgSData(oldp+911,((0xcU | (0xc0U 
                                                & ((- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))) 
                                                   << 6U)))),12);
            tracep->chgCData(oldp+912,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+913,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+914,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+915,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+916,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+917,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+918,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+919,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+920,((0xcU | (0x80U 
                                                & ((- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))) 
                                                   << 6U)))),12);
            tracep->chgCData(oldp+921,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+922,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+923,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+924,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+925,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+926,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+927,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+928,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+929,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+930,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+931,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+932,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+933,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+934,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+935,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+936,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+937,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+938,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+939,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+940,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+941,((((- (QData)((IData)(
                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                    >> 0xfU))))))) 
                                         & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                        | ((~ (- (QData)((IData)(
                                                                 ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                  & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                         >> 0xfU)))))))) 
                                           & vlSelf->top__DOT__regfile0__DOT__rdata1_t))),64);
            tracep->chgQData(oldp+943,((((- (QData)((IData)(
                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                    >> 0x14U))))))) 
                                         & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                        | ((~ (- (QData)((IData)(
                                                                 ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                  & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->top__DOT__if_id_to_id_inst 
                                                                         >> 0x14U)))))))) 
                                           & vlSelf->top__DOT__regfile0__DOT__rdata2_t))),64);
            tracep->chgQData(oldp+945,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__if_id_to_id_inst 
                                                   >> 0xfU)))
                                         ? 0ULL : (
                                                   (((0x1fU 
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
                                                     ? vlSelf->top__DOT__ex_mem_to_mem_wdata
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
                                                         & vlSelf->top__DOT__regfile0__DOT__rdata1_t))))))),64);
            tracep->chgQData(oldp+947,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__if_id_to_id_inst 
                                                   >> 0x14U)))
                                         ? 0ULL : (
                                                   (((0x1fU 
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
                                                     ? vlSelf->top__DOT__ex_mem_to_mem_wdata
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
                                                         & vlSelf->top__DOT__regfile0__DOT__rdata2_t))))))),64);
            tracep->chgCData(oldp+949,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xfU))
                                                  : 0U))),5);
            tracep->chgCData(oldp+950,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0x14U))
                                                  : 0U))),5);
            tracep->chgCData(oldp+951,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0x13U : 
                                        ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? (0x7fU 
                                             & vlSelf->top__DOT__if_id_to_id_inst)
                                          : 0U))),7);
            tracep->chgCData(oldp+952,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (7U 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xcU))
                                                  : 0U))),3);
            tracep->chgCData(oldp+953,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 0x19U)
                                                  : 0U))),7);
            tracep->chgQData(oldp+954,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__if_id_to_id_inst 
                                                         >> 0xfU)))
                                                     ? 0ULL
                                                     : 
                                                    ((((0x1fU 
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
                                                       ? vlSelf->top__DOT__ex_mem_to_mem_wdata
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
                                                           & vlSelf->top__DOT__regfile0__DOT__rdata1_t))))))
                                                    : 0ULL))),64);
            tracep->chgQData(oldp+956,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__if_id_to_id_inst 
                                                         >> 0x14U)))
                                                     ? 0ULL
                                                     : 
                                                    ((((0x1fU 
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
                                                       ? vlSelf->top__DOT__ex_mem_to_mem_wdata
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
                                                           & vlSelf->top__DOT__regfile0__DOT__rdata2_t))))))
                                                    : 0ULL))),64);
            tracep->chgCData(oldp+958,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 7U))
                                                  : 0U))),5);
            tracep->chgBit(oldp+959,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                         | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
            tracep->chgIData(oldp+960,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? vlSelf->top__DOT__id_to_id_ex_imm
                                                  : 0U))),20);
            tracep->chgBit(oldp+961,(((2U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      & ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                         & (((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst))) 
                                            | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__if_id_to_id_inst)))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+962,(vlSelf->top__DOT__if_id_to_id_inst),32);
            tracep->chgCData(oldp+963,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+964,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+965,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+966,((0x7fU & vlSelf->top__DOT__if_id_to_id_inst)),7);
            tracep->chgCData(oldp+967,((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+968,((vlSelf->top__DOT__if_id_to_id_inst 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+969,(vlSelf->top__DOT__id_to_id_ex_wreg));
            tracep->chgIData(oldp+970,(vlSelf->top__DOT__id_to_id_ex_imm),20);
            tracep->chgBit(oldp+971,((((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst)) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->top__DOT__if_id_to_id_inst))) 
                                      | (0x37U == (0x7fU 
                                                   & vlSelf->top__DOT__if_id_to_id_inst)))));
            tracep->chgBit(oldp+972,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+973,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+974,((vlSelf->top__DOT__if_id_to_id_inst 
                                        >> 0x14U)),20);
            tracep->chgWData(oldp+975,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),81);
            tracep->chgIData(oldp+978,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
            tracep->chgIData(oldp+979,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
            tracep->chgIData(oldp+980,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
            tracep->chgCData(oldp+981,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+982,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+983,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
            tracep->chgIData(oldp+984,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
            tracep->chgIData(oldp+985,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
            tracep->chgIData(oldp+986,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
            tracep->chgIData(oldp+987,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
            tracep->chgBit(oldp+988,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+989,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
            tracep->chgQData(oldp+991,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
            tracep->chgQData(oldp+993,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+995,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+996,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+998,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+999,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
            tracep->chgCData(oldp+1000,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1),4);
            tracep->chgSData(oldp+1001,((0x30U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1) 
                                                  << 8U))),16);
            tracep->chgCData(oldp+1002,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+1003,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+1004,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1005,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1006,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+1007,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+1008,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+1009,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+1010,(vlSelf->clk));
        tracep->chgBit(oldp+1011,(vlSelf->rst));
        tracep->chgBit(oldp+1012,(vlSelf->icache_data_valid_i));
        tracep->chgIData(oldp+1013,(vlSelf->icache_data_i),32);
        tracep->chgQData(oldp+1014,(vlSelf->icache_addr_o),64);
        tracep->chgBit(oldp+1016,(vlSelf->icache_req_valid_o));
        tracep->chgBit(oldp+1017,(vlSelf->icache_data_wen_o));
        tracep->chgQData(oldp+1018,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->chgQData(oldp+1020,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->chgQData(oldp+1022,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->chgQData(oldp+1024,(vlSelf->diff_regs_o[0]),64);
        tracep->chgQData(oldp+1026,(vlSelf->diff_regs_o[1]),64);
        tracep->chgQData(oldp+1028,(vlSelf->diff_regs_o[2]),64);
        tracep->chgQData(oldp+1030,(vlSelf->diff_regs_o[3]),64);
        tracep->chgQData(oldp+1032,(vlSelf->diff_regs_o[4]),64);
        tracep->chgQData(oldp+1034,(vlSelf->diff_regs_o[5]),64);
        tracep->chgQData(oldp+1036,(vlSelf->diff_regs_o[6]),64);
        tracep->chgQData(oldp+1038,(vlSelf->diff_regs_o[7]),64);
        tracep->chgQData(oldp+1040,(vlSelf->diff_regs_o[8]),64);
        tracep->chgQData(oldp+1042,(vlSelf->diff_regs_o[9]),64);
        tracep->chgQData(oldp+1044,(vlSelf->diff_regs_o[10]),64);
        tracep->chgQData(oldp+1046,(vlSelf->diff_regs_o[11]),64);
        tracep->chgQData(oldp+1048,(vlSelf->diff_regs_o[12]),64);
        tracep->chgQData(oldp+1050,(vlSelf->diff_regs_o[13]),64);
        tracep->chgQData(oldp+1052,(vlSelf->diff_regs_o[14]),64);
        tracep->chgQData(oldp+1054,(vlSelf->diff_regs_o[15]),64);
        tracep->chgQData(oldp+1056,(vlSelf->diff_regs_o[16]),64);
        tracep->chgQData(oldp+1058,(vlSelf->diff_regs_o[17]),64);
        tracep->chgQData(oldp+1060,(vlSelf->diff_regs_o[18]),64);
        tracep->chgQData(oldp+1062,(vlSelf->diff_regs_o[19]),64);
        tracep->chgQData(oldp+1064,(vlSelf->diff_regs_o[20]),64);
        tracep->chgQData(oldp+1066,(vlSelf->diff_regs_o[21]),64);
        tracep->chgQData(oldp+1068,(vlSelf->diff_regs_o[22]),64);
        tracep->chgQData(oldp+1070,(vlSelf->diff_regs_o[23]),64);
        tracep->chgQData(oldp+1072,(vlSelf->diff_regs_o[24]),64);
        tracep->chgQData(oldp+1074,(vlSelf->diff_regs_o[25]),64);
        tracep->chgQData(oldp+1076,(vlSelf->diff_regs_o[26]),64);
        tracep->chgQData(oldp+1078,(vlSelf->diff_regs_o[27]),64);
        tracep->chgQData(oldp+1080,(vlSelf->diff_regs_o[28]),64);
        tracep->chgQData(oldp+1082,(vlSelf->diff_regs_o[29]),64);
        tracep->chgQData(oldp+1084,(vlSelf->diff_regs_o[30]),64);
        tracep->chgQData(oldp+1086,(vlSelf->diff_regs_o[31]),64);
        tracep->chgBit(oldp+1088,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgIData(oldp+1089,(((2U == (IData)(vlSelf->top__DOT__if_id0__DOT__state))
                                      ? 0x13U : vlSelf->icache_data_i)),32);
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
