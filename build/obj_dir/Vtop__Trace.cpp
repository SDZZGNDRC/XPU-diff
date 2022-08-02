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
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[2]),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__id_to_id_ex_wreg));
            tracep->chgIData(oldp+61,(vlSelf->top__DOT__id_to_id_ex_imm),20);
            tracep->chgSData(oldp+62,(vlSelf->top__DOT__id_to_id_ex_offset12),12);
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+65,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),81);
            tracep->chgIData(oldp+68,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
            tracep->chgIData(oldp+69,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
            tracep->chgIData(oldp+70,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
            tracep->chgIData(oldp+74,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
            tracep->chgIData(oldp+75,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
            tracep->chgIData(oldp+76,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
            tracep->chgIData(oldp+77,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux3____pinNumber4),38);
            tracep->chgIData(oldp+81,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[0]),19);
            tracep->chgIData(oldp+82,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[1]),19);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgSData(oldp+85,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[0]),12);
            tracep->chgSData(oldp+86,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[1]),12);
            tracep->chgSData(oldp+87,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__lut_out),12);
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__if_id_to_id_pc),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
            tracep->chgCData(oldp+107,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
            tracep->chgCData(oldp+108,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
            tracep->chgCData(oldp+109,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
            tracep->chgCData(oldp+110,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__ex_to_ex_mem_wdata),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
            tracep->chgCData(oldp+117,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
            tracep->chgCData(oldp+118,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
            tracep->chgCData(oldp+119,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__id_ex_to_ex_wreg));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
            tracep->chgIData(oldp+122,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
            tracep->chgSData(oldp+123,(vlSelf->top__DOT__id_ex_to_ex_offset12),12);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__mem_wb_to_regfile_we));
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__ex_branch_flag));
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
            tracep->chgCData(oldp+131,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
            tracep->chgCData(oldp+132,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
            tracep->chgCData(oldp+133,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
            tracep->chgCData(oldp+134,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__ctrl_to_pc_pc_new),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__pc_to_if_id_pc),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
            tracep->chgBit(oldp+142,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
            tracep->chgWData(oldp+145,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
            tracep->chgWData(oldp+150,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+153,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+157,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+165,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux2____pinNumber4),132);
            tracep->chgWData(oldp+170,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+173,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+176,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+177,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+184,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+185,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
            tracep->chgQData(oldp+186,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
            tracep->chgBit(oldp+312,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+313,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+314,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+315,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+316,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+317,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+318,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+319,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+320,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+321,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+322,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+323,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+324,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+325,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+326,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+327,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+328,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+329,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+330,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+331,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+332,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+333,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+334,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+335,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+336,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+337,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+338,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+339,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+340,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+341,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+342,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgWData(oldp+343,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
            tracep->chgWData(oldp+410,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+413,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+416,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+419,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+422,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+425,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+428,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+431,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+434,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+437,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+440,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+443,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+446,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+449,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+452,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+455,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+458,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+461,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+464,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+467,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+470,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+473,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+476,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+479,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+482,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+485,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+488,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+491,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+494,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+497,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+500,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+503,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+504,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+505,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+506,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+507,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+508,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+509,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+510,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+511,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+512,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+513,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+514,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+515,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+516,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+517,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+518,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+519,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+520,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+521,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+522,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+523,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+524,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+525,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+526,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+527,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+528,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+529,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+530,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+531,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+532,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+533,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+560,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+566,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+568,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+570,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+578,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+582,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+588,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+590,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+592,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+594,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
            tracep->chgWData(oldp+596,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
            tracep->chgWData(oldp+663,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+666,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+669,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+672,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+675,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+678,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+681,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+684,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+687,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+690,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+693,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+696,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+699,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+702,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+705,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+708,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+711,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+714,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+717,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+720,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+723,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+726,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+729,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+732,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+735,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+738,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+741,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+744,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+747,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+750,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+753,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+756,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+757,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+758,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+759,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+760,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+761,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+762,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+763,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+764,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+765,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+766,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+767,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+768,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+769,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+770,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+771,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+772,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+773,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+774,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+775,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+776,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+777,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+778,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+779,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+780,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+781,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+782,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+783,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+784,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+785,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+786,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+787,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+789,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+791,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+793,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+795,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+797,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+799,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+801,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+803,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+805,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+807,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+809,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+811,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+813,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+815,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+817,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+819,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+821,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+823,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+825,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+827,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+829,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+831,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+833,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+835,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+837,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+839,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+841,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+843,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+845,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+847,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
            tracep->chgBit(oldp+849,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
            tracep->chgQData(oldp+850,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
            tracep->chgQData(oldp+852,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
            tracep->chgIData(oldp+854,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
            tracep->chgQData(oldp+855,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+857,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   >> 0xbU))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
            tracep->chgQData(oldp+859,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
            tracep->chgQData(oldp+861,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                        + (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                           >> 0x13U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                              << 0xcU)))))),64);
            tracep->chgQData(oldp+863,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                        - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+865,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
            tracep->chgQData(oldp+867,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
            tracep->chgBit(oldp+869,(((((((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                          & (0U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                         & (vlSelf->top__DOT__ex0__DOT__rs1_data 
                                            == vlSelf->top__DOT__ex0__DOT__rs2_data)) 
                                        | (((0x63U 
                                             == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                            & (5U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                           & VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data))) 
                                       | (0x67U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode))) 
                                      | (0x6fU == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)))));
            tracep->chgBit(oldp+870,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                      == vlSelf->top__DOT__ex0__DOT__rs2_data)));
            tracep->chgBit(oldp+871,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
            tracep->chgWData(oldp+872,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux1____pinNumber4),142);
            tracep->chgWData(oldp+877,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+880,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+883,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+884,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+885,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+887,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+889,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+891,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+892,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux2____pinNumber4),201);
            tracep->chgWData(oldp+899,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+902,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+905,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+908,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+909,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+910,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+911,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+913,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+915,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+917,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+919,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+920,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux3____pinNumber4),142);
            tracep->chgWData(oldp+925,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+928,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+931,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+932,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+933,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+935,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+937,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+939,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+940,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                  ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                                  : 0U))),5);
            tracep->chgBit(oldp+941,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
            tracep->chgBit(oldp+942,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                      | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                         | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
            tracep->chgQData(oldp+943,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                         ? 0ULL : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                    ? vlSelf->top__DOT__ex_to_ex_mem_wdata
                                                    : 0ULL))),64);
            tracep->chgBit(oldp+945,((0U == (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
            tracep->chgCData(oldp+946,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
            tracep->chgCData(oldp+947,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
            tracep->chgCData(oldp+948,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
            tracep->chgCData(oldp+949,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+950,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+951,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+952,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+953,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+954,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+955,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+956,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+957,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+958,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+959,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+960,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+961,(vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux7____pinNumber4),204);
            tracep->chgWData(oldp+968,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+971,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+974,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+977,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+978,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+979,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+980,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+982,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+984,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+986,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+988,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+989,(vlSelf->clk));
        tracep->chgBit(oldp+990,(vlSelf->rst));
        tracep->chgBit(oldp+991,(vlSelf->icache_data_valid_i));
        tracep->chgIData(oldp+992,(vlSelf->icache_data_i),32);
        tracep->chgQData(oldp+993,(vlSelf->icache_addr_o),64);
        tracep->chgBit(oldp+995,(vlSelf->icache_req_valid_o));
        tracep->chgBit(oldp+996,(vlSelf->icache_data_wen_o));
        tracep->chgQData(oldp+997,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->chgQData(oldp+999,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->chgQData(oldp+1001,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->chgQData(oldp+1003,(vlSelf->diff_regs_o[0]),64);
        tracep->chgQData(oldp+1005,(vlSelf->diff_regs_o[1]),64);
        tracep->chgQData(oldp+1007,(vlSelf->diff_regs_o[2]),64);
        tracep->chgQData(oldp+1009,(vlSelf->diff_regs_o[3]),64);
        tracep->chgQData(oldp+1011,(vlSelf->diff_regs_o[4]),64);
        tracep->chgQData(oldp+1013,(vlSelf->diff_regs_o[5]),64);
        tracep->chgQData(oldp+1015,(vlSelf->diff_regs_o[6]),64);
        tracep->chgQData(oldp+1017,(vlSelf->diff_regs_o[7]),64);
        tracep->chgQData(oldp+1019,(vlSelf->diff_regs_o[8]),64);
        tracep->chgQData(oldp+1021,(vlSelf->diff_regs_o[9]),64);
        tracep->chgQData(oldp+1023,(vlSelf->diff_regs_o[10]),64);
        tracep->chgQData(oldp+1025,(vlSelf->diff_regs_o[11]),64);
        tracep->chgQData(oldp+1027,(vlSelf->diff_regs_o[12]),64);
        tracep->chgQData(oldp+1029,(vlSelf->diff_regs_o[13]),64);
        tracep->chgQData(oldp+1031,(vlSelf->diff_regs_o[14]),64);
        tracep->chgQData(oldp+1033,(vlSelf->diff_regs_o[15]),64);
        tracep->chgQData(oldp+1035,(vlSelf->diff_regs_o[16]),64);
        tracep->chgQData(oldp+1037,(vlSelf->diff_regs_o[17]),64);
        tracep->chgQData(oldp+1039,(vlSelf->diff_regs_o[18]),64);
        tracep->chgQData(oldp+1041,(vlSelf->diff_regs_o[19]),64);
        tracep->chgQData(oldp+1043,(vlSelf->diff_regs_o[20]),64);
        tracep->chgQData(oldp+1045,(vlSelf->diff_regs_o[21]),64);
        tracep->chgQData(oldp+1047,(vlSelf->diff_regs_o[22]),64);
        tracep->chgQData(oldp+1049,(vlSelf->diff_regs_o[23]),64);
        tracep->chgQData(oldp+1051,(vlSelf->diff_regs_o[24]),64);
        tracep->chgQData(oldp+1053,(vlSelf->diff_regs_o[25]),64);
        tracep->chgQData(oldp+1055,(vlSelf->diff_regs_o[26]),64);
        tracep->chgQData(oldp+1057,(vlSelf->diff_regs_o[27]),64);
        tracep->chgQData(oldp+1059,(vlSelf->diff_regs_o[28]),64);
        tracep->chgQData(oldp+1061,(vlSelf->diff_regs_o[29]),64);
        tracep->chgQData(oldp+1063,(vlSelf->diff_regs_o[30]),64);
        tracep->chgQData(oldp+1065,(vlSelf->diff_regs_o[31]),64);
        tracep->chgQData(oldp+1067,((((- (QData)((IData)(
                                                         ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                          & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->icache_data_i 
                                                                 >> 0xfU))))))) 
                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                     | ((~ (- (QData)((IData)(
                                                              ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                               & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->icache_data_i 
                                                                      >> 0xfU)))))))) 
                                        & vlSelf->top__DOT__regfile0__DOT__rdata1_t))),64);
        tracep->chgQData(oldp+1069,((((- (QData)((IData)(
                                                         ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                          & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->icache_data_i 
                                                                 >> 0x14U))))))) 
                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                     | ((~ (- (QData)((IData)(
                                                              ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                               & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->icache_data_i 
                                                                      >> 0x14U)))))))) 
                                        & vlSelf->top__DOT__regfile0__DOT__rdata2_t))),64);
        tracep->chgQData(oldp+1071,(((0U == (0x1fU 
                                             & (vlSelf->icache_data_i 
                                                >> 0xfU)))
                                      ? 0ULL : ((((0x1fU 
                                                   & (vlSelf->icache_data_i 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                 & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                 ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                 : 
                                                ((((0x1fU 
                                                    & (vlSelf->icache_data_i 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                  & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                  ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                  : 
                                                 ((((0x1fU 
                                                     & (vlSelf->icache_data_i 
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
                                                                            & (vlSelf->icache_data_i 
                                                                               >> 0xfU))))))) 
                                                    & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                   | ((~ 
                                                       (- (QData)((IData)(
                                                                          ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                           & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelf->icache_data_i 
                                                                                >> 0xfU)))))))) 
                                                      & vlSelf->top__DOT__regfile0__DOT__rdata1_t))))))),64);
        tracep->chgQData(oldp+1073,(((0U == (0x1fU 
                                             & (vlSelf->icache_data_i 
                                                >> 0x14U)))
                                      ? 0ULL : ((((0x1fU 
                                                   & (vlSelf->icache_data_i 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                 & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                 ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                 : 
                                                ((((0x1fU 
                                                    & (vlSelf->icache_data_i 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                  & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                  ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                  : 
                                                 ((((0x1fU 
                                                     & (vlSelf->icache_data_i 
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
                                                                            & (vlSelf->icache_data_i 
                                                                               >> 0x14U))))))) 
                                                    & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                   | ((~ 
                                                       (- (QData)((IData)(
                                                                          ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                           & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelf->icache_data_i 
                                                                                >> 0x14U)))))))) 
                                                      & vlSelf->top__DOT__regfile0__DOT__rdata2_t))))))),64);
        tracep->chgCData(oldp+1075,((0x1fU & (vlSelf->icache_data_i 
                                              >> 0xfU))),5);
        tracep->chgCData(oldp+1076,((0x1fU & (vlSelf->icache_data_i 
                                              >> 0x14U))),5);
        tracep->chgCData(oldp+1077,((0x1fU & (vlSelf->icache_data_i 
                                              >> 7U))),5);
        tracep->chgCData(oldp+1078,((0x7fU & vlSelf->icache_data_i)),7);
        tracep->chgCData(oldp+1079,((7U & (vlSelf->icache_data_i 
                                           >> 0xcU))),3);
        tracep->chgCData(oldp+1080,((vlSelf->icache_data_i 
                                     >> 0x19U)),7);
        tracep->chgIData(oldp+1081,((vlSelf->icache_data_i 
                                     >> 0x14U)),20);
        tracep->chgSData(oldp+1082,((vlSelf->icache_data_i 
                                     >> 0x14U)),12);
        tracep->chgCData(oldp+1083,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->icache_data_i 
                                                     >> 0xfU))
                                               : 0U))),5);
        tracep->chgCData(oldp+1084,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->icache_data_i 
                                                     >> 0x14U))
                                               : 0U))),5);
        tracep->chgCData(oldp+1085,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0x13U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x7fU 
                                                  & vlSelf->icache_data_i)
                                                  : 0U))),7);
        tracep->chgCData(oldp+1086,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (7U 
                                                  & (vlSelf->icache_data_i 
                                                     >> 0xcU))
                                               : 0U))),3);
        tracep->chgCData(oldp+1087,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (vlSelf->icache_data_i 
                                                  >> 0x19U)
                                               : 0U))),7);
        tracep->chgQData(oldp+1088,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->icache_data_i 
                                                      >> 0xfU)))
                                                  ? 0ULL
                                                  : 
                                                 ((((0x1fU 
                                                     & (vlSelf->icache_data_i 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                   & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                   ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                   : 
                                                  ((((0x1fU 
                                                      & (vlSelf->icache_data_i 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                    & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                    ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                    : 
                                                   ((((0x1fU 
                                                       & (vlSelf->icache_data_i 
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
                                                                              & (vlSelf->icache_data_i 
                                                                                >> 0xfU))))))) 
                                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                     | ((~ 
                                                         (- (QData)((IData)(
                                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->icache_data_i 
                                                                                >> 0xfU)))))))) 
                                                        & vlSelf->top__DOT__regfile0__DOT__rdata1_t))))))
                                                 : 0ULL))),64);
        tracep->chgQData(oldp+1090,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->icache_data_i 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : 
                                                 ((((0x1fU 
                                                     & (vlSelf->icache_data_i 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                   & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                   ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                   : 
                                                  ((((0x1fU 
                                                      & (vlSelf->icache_data_i 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->top__DOT__ex_mem_to_mem_rd_addr)) 
                                                    & (IData)(vlSelf->top__DOT__ex_mem_to_mem_wreg))
                                                    ? vlSelf->top__DOT__ex_mem_to_mem_wdata
                                                    : 
                                                   ((((0x1fU 
                                                       & (vlSelf->icache_data_i 
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
                                                                              & (vlSelf->icache_data_i 
                                                                                >> 0x14U))))))) 
                                                      & vlSelf->top__DOT__mem_wb_to_regfile_wdata) 
                                                     | ((~ 
                                                         (- (QData)((IData)(
                                                                            ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                                                             & ((IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr) 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->icache_data_i 
                                                                                >> 0x14U)))))))) 
                                                        & vlSelf->top__DOT__regfile0__DOT__rdata2_t))))))
                                                 : 0ULL))),64);
        tracep->chgCData(oldp+1092,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->icache_data_i 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->chgBit(oldp+1093,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
        tracep->chgIData(oldp+1094,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? vlSelf->top__DOT__id_to_id_ex_imm
                                               : 0U))),20);
        tracep->chgSData(oldp+1095,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (IData)(vlSelf->top__DOT__id_to_id_ex_offset12)
                                               : 0U))),12);
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
