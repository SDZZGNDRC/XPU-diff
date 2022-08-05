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
    VlWide<3>/*95:0*/ __Vtemp1987;
    VlWide<5>/*159:0*/ __Vtemp1989;
    VlWide<3>/*95:0*/ __Vtemp1990;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list[1]),7);
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__data_list[1]));
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[5]),5);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[6]),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[5]),3);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[6]),3);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[3]),2);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[4]),2);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[5]),2);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[6]),2);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[3]),2);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[1]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__if_id_to_id_pc),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__id_ex_to_ex_csr_data),64);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
            tracep->chgSData(oldp+57,(vlSelf->top__DOT__id_ex_to_ex_csr_raddr),12);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
            tracep->chgSData(oldp+59,(vlSelf->top__DOT__id_ex_to_ex_csr_waddr),12);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
            tracep->chgSData(oldp+61,(vlSelf->top__DOT__ex_mem_to_mem_csr_waddr),12);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__mem_wb_to_csr_wdata),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__ex0__DOT__csr_wdata_t),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__ex_mem_to_mem_csr_wdata),64);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__ex_mem_to_mem_opcode),7);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__ex_mem_to_mem_funct3),3);
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__id_ex_to_ex_wreg));
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__id_ex_to_ex_csr_wreg));
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__ex_mem_to_mem_csr_wreg));
            tracep->chgIData(oldp+81,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__id_ex_to_ex_imm_sel));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__mem_wb_to_regfile_we));
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__mem_wb_to_csr_we));
            tracep->chgSData(oldp+86,(vlSelf->top__DOT__mem_wb_to_csr_waddr),12);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__pc_to_if_id_pc),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
            tracep->chgWData(oldp+93,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
            tracep->chgWData(oldp+98,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+101,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+104,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+105,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgWData(oldp+110,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4),132);
            tracep->chgWData(oldp+115,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+118,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__if_id0__DOT__state),2);
            VL_EXTEND_WQ(66,64, __Vtemp1987, vlSelf->top__DOT__pc_to_if_id_pc);
            __Vtemp1989[0U] = 0U;
            __Vtemp1989[1U] = 0U;
            __Vtemp1989[2U] = (2U | (__Vtemp1987[0U] 
                                     << 2U));
            __Vtemp1989[3U] = ((__Vtemp1987[0U] >> 0x1eU) 
                               | (__Vtemp1987[1U] << 2U));
            __Vtemp1989[4U] = ((__Vtemp1987[1U] >> 0x1eU) 
                               | (__Vtemp1987[2U] << 2U));
            tracep->chgWData(oldp+128,(__Vtemp1989),132);
            tracep->chgWData(oldp+133,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+136,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
            tracep->chgBit(oldp+271,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+272,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+273,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+274,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+275,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+276,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+277,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+278,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+279,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+280,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+281,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+282,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+283,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+284,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+285,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+286,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+287,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+288,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+289,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+290,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+291,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+292,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+293,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+294,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+295,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+296,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+297,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+298,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+299,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+300,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgBit(oldp+301,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                      & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
            tracep->chgWData(oldp+302,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
            tracep->chgWData(oldp+369,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+372,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+375,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+378,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+381,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+384,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+387,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+390,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+393,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+396,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+399,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+402,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+405,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+408,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+411,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+414,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+417,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+420,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+423,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+426,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+429,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+432,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+435,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+438,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+441,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+444,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+447,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+450,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+453,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+456,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+459,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+462,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+463,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+464,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+465,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+466,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+467,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+468,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+469,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+470,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+471,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+472,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+473,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+474,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+475,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+476,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+477,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+478,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+479,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+480,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+481,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+482,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+483,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+484,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+485,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+486,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+487,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+488,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+489,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+490,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+491,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+492,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+493,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+495,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+497,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+499,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+501,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+503,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+505,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+509,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+511,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+513,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+515,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+517,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+519,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+521,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+523,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+525,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+527,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+529,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+531,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+533,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+535,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+537,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+539,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+541,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+543,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+545,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+547,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+549,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+551,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+553,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
            tracep->chgWData(oldp+555,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
            tracep->chgWData(oldp+622,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+625,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+628,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+631,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+634,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+637,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+640,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+643,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+646,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+649,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+652,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+655,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+658,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+661,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+664,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+667,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+670,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+673,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+676,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+679,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+682,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+685,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+688,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+691,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+694,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+697,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+700,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+703,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
            tracep->chgWData(oldp+706,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
            tracep->chgWData(oldp+709,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
            tracep->chgWData(oldp+712,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
            tracep->chgCData(oldp+715,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+716,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+717,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+718,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+719,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+720,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+721,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+722,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+723,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+724,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+725,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+726,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+727,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+728,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+729,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+730,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+731,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+732,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+733,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+734,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+735,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
            tracep->chgCData(oldp+736,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
            tracep->chgCData(oldp+737,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
            tracep->chgCData(oldp+738,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
            tracep->chgCData(oldp+739,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
            tracep->chgCData(oldp+740,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
            tracep->chgCData(oldp+741,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
            tracep->chgCData(oldp+742,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
            tracep->chgCData(oldp+743,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
            tracep->chgCData(oldp+744,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
            tracep->chgCData(oldp+745,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
            tracep->chgQData(oldp+746,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+748,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+750,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+752,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+754,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+756,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+758,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+760,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+762,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+764,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+766,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+768,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+770,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+772,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+774,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+776,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+778,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+780,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+782,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+784,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+786,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+788,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+790,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+792,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
            tracep->chgQData(oldp+794,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
            tracep->chgQData(oldp+796,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
            tracep->chgQData(oldp+798,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
            tracep->chgQData(oldp+800,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
            tracep->chgQData(oldp+802,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
            tracep->chgQData(oldp+804,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
            tracep->chgQData(oldp+806,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
            tracep->chgQData(oldp+808,(vlSelf->top__DOT__csr0__DOT__out_mtval),64);
            tracep->chgQData(oldp+810,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                                         << 0x3fU) 
                                        | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code)))),64);
            tracep->chgQData(oldp+812,((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                                        << 2U)),64);
            tracep->chgQData(oldp+814,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_mtie)) 
                                         << 7U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_msie) 
                                                                   << 3U))))),64);
            tracep->chgQData(oldp+816,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_mtip)) 
                                         << 7U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_msip) 
                                                                   << 3U))))),64);
            tracep->chgQData(oldp+818,(vlSelf->top__DOT__csr0__DOT__out_mscratch),64);
            tracep->chgQData(oldp+820,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1)) 
                                         << 3U) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie)))),64);
            tracep->chgBit(oldp+822,(((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                      & (0x343U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))));
            tracep->chgBit(oldp+823,(vlSelf->top__DOT__csr0__DOT__wen_mcause));
            tracep->chgBit(oldp+824,(((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                      & (0x341U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))));
            tracep->chgBit(oldp+825,(vlSelf->top__DOT__csr0__DOT__wen_mie));
            tracep->chgBit(oldp+826,(vlSelf->top__DOT__csr0__DOT__wen_mip));
            tracep->chgBit(oldp+827,(((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                      & (0x340U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))));
            tracep->chgBit(oldp+828,(vlSelf->top__DOT__csr0__DOT__wen_mstatus));
            tracep->chgBit(oldp+829,(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt));
            tracep->chgCData(oldp+830,(vlSelf->top__DOT__csr0__DOT__out_mcause_code),5);
            tracep->chgQData(oldp+831,(vlSelf->top__DOT__csr0__DOT__out_mepc_H62),62);
            tracep->chgBit(oldp+833,(vlSelf->top__DOT__csr0__DOT__out_mie_mtie));
            tracep->chgBit(oldp+834,(vlSelf->top__DOT__csr0__DOT__out_mie_msie));
            tracep->chgBit(oldp+835,(vlSelf->top__DOT__csr0__DOT__out_mip_mtip));
            tracep->chgBit(oldp+836,(vlSelf->top__DOT__csr0__DOT__out_mip_msip));
            tracep->chgBit(oldp+837,(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1));
            tracep->chgBit(oldp+838,(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie));
            tracep->chgBit(oldp+839,((1U & (IData)(
                                                   (vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                    >> 0x3fU)))));
            tracep->chgCData(oldp+840,((0x1fU & (IData)(vlSelf->top__DOT__mem_wb_to_csr_wdata))),5);
            tracep->chgQData(oldp+841,((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                        >> 2U)),62);
            tracep->chgBit(oldp+843,((1U & (IData)(
                                                   (vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                    >> 7U)))));
            tracep->chgBit(oldp+844,((1U & (IData)(
                                                   (vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                    >> 3U)))));
            tracep->chgBit(oldp+845,((1U & (IData)(
                                                   (vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                    >> 2U)))));
            tracep->chgBit(oldp+846,((1U & (IData)(vlSelf->top__DOT__mem_wb_to_csr_wdata))));
            tracep->chgWData(oldp+847,(vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4),1064);
            tracep->chgWData(oldp+881,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0]),76);
            tracep->chgWData(oldp+884,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[1]),76);
            tracep->chgWData(oldp+887,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[2]),76);
            tracep->chgWData(oldp+890,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[3]),76);
            tracep->chgWData(oldp+893,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[4]),76);
            tracep->chgWData(oldp+896,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[5]),76);
            tracep->chgWData(oldp+899,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[6]),76);
            tracep->chgWData(oldp+902,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[7]),76);
            tracep->chgWData(oldp+905,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[8]),76);
            tracep->chgWData(oldp+908,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[9]),76);
            tracep->chgWData(oldp+911,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[10]),76);
            tracep->chgWData(oldp+914,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[11]),76);
            tracep->chgWData(oldp+917,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[12]),76);
            tracep->chgWData(oldp+920,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[13]),76);
            tracep->chgSData(oldp+923,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+924,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+925,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+926,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+927,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+928,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+929,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+930,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+931,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+932,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[9]),12);
            tracep->chgSData(oldp+933,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[10]),12);
            tracep->chgSData(oldp+934,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[11]),12);
            tracep->chgSData(oldp+935,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[12]),12);
            tracep->chgSData(oldp+936,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[13]),12);
            tracep->chgQData(oldp+937,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+939,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+941,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+943,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+945,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+947,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+949,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+951,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+953,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+955,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+957,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+959,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+961,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+963,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+965,(vlSelf->top__DOT__ex0__DOT__csr_data),64);
            tracep->chgQData(oldp+967,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                        + (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                           >> 0x13U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                              << 0xcU)))))),64);
            tracep->chgQData(oldp+969,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        >> 0x13U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+971,((4ULL + vlSelf->top__DOT__id_ex_to_ex_pc)),64);
            tracep->chgQData(oldp+973,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                        & (~ vlSelf->top__DOT__id_ex_to_ex_rs1_data))),64);
            tracep->chgQData(oldp+975,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                        & (~ (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))))),64);
            tracep->chgQData(oldp+977,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                        | vlSelf->top__DOT__id_ex_to_ex_rs1_data)),64);
            tracep->chgQData(oldp+979,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                        | (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))),64);
            tracep->chgQData(oldp+981,((QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))),64);
            tracep->chgQData(oldp+983,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   >> 0xbU))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             (0x1ffeU 
                                                              & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                 << 1U))))))),64);
            tracep->chgQData(oldp+985,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   >> 0x13U))))) 
                                            << 0x15U) 
                                           | (QData)((IData)(
                                                             (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                              << 1U)))))),64);
            tracep->chgWData(oldp+987,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4),402);
            tracep->chgWData(oldp+1000,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+1003,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+1006,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+1009,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+1012,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+1015,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+1018,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1019,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1020,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+1021,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+1022,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+1023,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[5]),3);
            tracep->chgQData(oldp+1024,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1026,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1028,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1030,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1032,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1034,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1036,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1038,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1039,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
            tracep->chgCData(oldp+1040,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+1041,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+1043,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+1045,(((((vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0x14U) 
                                           == (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_waddr)) 
                                          & (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_wreg))
                                          ? vlSelf->top__DOT__ex0__DOT__csr_wdata_t
                                          : ((((vlSelf->top__DOT__if_id_to_id_inst 
                                                >> 0x14U) 
                                               == (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_waddr)) 
                                              & (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_wreg))
                                              ? vlSelf->top__DOT__ex_mem_to_mem_csr_wdata
                                              : (((
                                                   (vlSelf->top__DOT__if_id_to_id_inst 
                                                    >> 0x14U) 
                                                   == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)) 
                                                  & (IData)(vlSelf->top__DOT__mem_wb_to_csr_we))
                                                  ? vlSelf->top__DOT__mem_wb_to_csr_wdata
                                                  : vlSelf->top__DOT__csr_to_id_csr_data)))),64);
            tracep->chgQData(oldp+1047,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0ULL : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                           ? ((((vlSelf->top__DOT__if_id_to_id_inst 
                                                 >> 0x14U) 
                                                == (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_waddr)) 
                                               & (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_wreg))
                                               ? vlSelf->top__DOT__ex0__DOT__csr_wdata_t
                                               : ((
                                                   ((vlSelf->top__DOT__if_id_to_id_inst 
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
                                           : 0ULL))),64);
            tracep->chgQData(oldp+1049,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0ULL : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                           ? vlSelf->top__DOT__if_id_to_id_pc
                                           : 0ULL))),64);
            tracep->chgQData(oldp+1051,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                         + (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (0xfffU 
                                                               & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
            tracep->chgCData(oldp+1053,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                   ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                                   : 0U))),5);
            tracep->chgSData(oldp+1054,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                          ? 0xf12U : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                           ? (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_waddr)
                                           : 0xf12U))),12);
            tracep->chgBit(oldp+1055,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                       | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                          | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
            tracep->chgBit(oldp+1056,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                       | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                          | (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_wreg)))));
            tracep->chgQData(oldp+1057,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                          ? 0ULL : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                           ? vlSelf->top__DOT__ex0__DOT__csr_wdata_t
                                           : 0ULL))),64);
            tracep->chgCData(oldp+1059,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                          ? 0x13U : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                           ? (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)
                                           : 0x13U))),7);
            tracep->chgCData(oldp+1060,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                   ? (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3)
                                                   : 0U))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+1061,(vlSelf->top__DOT__if_id_to_id_inst),32);
            tracep->chgQData(oldp+1062,(vlSelf->top__DOT__csr_to_id_csr_data),64);
            tracep->chgQData(oldp+1064,(vlSelf->top__DOT__id_to_id_ex_rs1_data),64);
            tracep->chgQData(oldp+1066,(vlSelf->top__DOT__id_to_id_ex_rs2_data),64);
            tracep->chgCData(oldp+1068,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 0xfU))),5);
            tracep->chgCData(oldp+1069,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 0x14U))),5);
            tracep->chgSData(oldp+1070,((vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0x14U)),12);
            tracep->chgCData(oldp+1071,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 7U))),5);
            tracep->chgQData(oldp+1072,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
            tracep->chgQData(oldp+1074,(vlSelf->top__DOT__mem_to_mem_wb_wdata),64);
            tracep->chgCData(oldp+1076,((0x7fU & vlSelf->top__DOT__if_id_to_id_inst)),7);
            tracep->chgCData(oldp+1077,((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1078,((vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0x19U)),7);
            tracep->chgBit(oldp+1079,(vlSelf->top__DOT__id_to_id_ex_wreg));
            tracep->chgBit(oldp+1080,((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst))));
            tracep->chgIData(oldp+1081,(vlSelf->top__DOT__id_to_id_ex_imm),20);
            tracep->chgBit(oldp+1082,((((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__if_id_to_id_inst)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->top__DOT__if_id_to_id_inst))) 
                                       | (0x37U == 
                                          (0x7fU & vlSelf->top__DOT__if_id_to_id_inst)))));
            tracep->chgBit(oldp+1083,(vlSelf->top__DOT__ex0__DOT__branch_flag_t));
            tracep->chgCData(oldp+1084,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
            tracep->chgCData(oldp+1085,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
            tracep->chgCData(oldp+1086,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
            tracep->chgCData(oldp+1087,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
            tracep->chgCData(oldp+1088,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
            tracep->chgBit(oldp+1089,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
            tracep->chgQData(oldp+1090,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
            tracep->chgQData(oldp+1092,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1094,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1095,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1097,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1098,(vlSelf->top__DOT__if_id0__DOT__pc_t),64);
            tracep->chgBit(oldp+1100,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
            tracep->chgQData(oldp+1101,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1103,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1104,((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))))),64);
            tracep->chgQData(oldp+1106,((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))))),64);
            tracep->chgQData(oldp+1108,((QData)((IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))),64);
            tracep->chgSData(oldp+1110,(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store),12);
            tracep->chgQData(oldp+1111,((vlSelf->top__DOT__id_to_id_ex_rs1_data 
                                         + (((- (QData)((IData)(
                                                                (vlSelf->top__DOT__if_id_to_id_inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (vlSelf->top__DOT__if_id_to_id_inst 
                                                               >> 0x14U)))))),64);
            tracep->chgQData(oldp+1113,((vlSelf->top__DOT__id_to_id_ex_rs1_data 
                                         + (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store) 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store))))),64);
            tracep->chgCData(oldp+1115,(vlSelf->top__DOT__id0__DOT__dcache_wlen_t_load),2);
            tracep->chgCData(oldp+1116,(vlSelf->top__DOT__id0__DOT__dcache_wlen_t_store),2);
            tracep->chgBit(oldp+1117,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+1118,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1119,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4),268);
            tracep->chgWData(oldp+1128,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+1131,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+1134,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+1137,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgCData(oldp+1140,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1141,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1142,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+1143,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[3]),3);
            tracep->chgQData(oldp+1144,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1146,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1148,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1150,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1152,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1154,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1155,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1156,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1157,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1158,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+1159,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+1160,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1161,((vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0x14U)),20);
            tracep->chgWData(oldp+1162,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),108);
            tracep->chgIData(oldp+1166,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
            tracep->chgIData(oldp+1167,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
            tracep->chgIData(oldp+1168,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
            tracep->chgIData(oldp+1169,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[3]),27);
            tracep->chgCData(oldp+1170,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+1171,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+1172,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+1173,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[3]),7);
            tracep->chgIData(oldp+1174,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
            tracep->chgIData(oldp+1175,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
            tracep->chgIData(oldp+1176,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
            tracep->chgIData(oldp+1177,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[3]),20);
            tracep->chgIData(oldp+1178,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
            tracep->chgBit(oldp+1179,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1180,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
            tracep->chgQData(oldp+1182,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
            tracep->chgQData(oldp+1184,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1186,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1187,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1189,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1190,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1192,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1193,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 0xfU))
                                                   : 0U))),5);
            tracep->chgBit(oldp+1194,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
            tracep->chgCData(oldp+1195,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 0x14U))
                                                   : 0U))),5);
            tracep->chgSData(oldp+1196,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0xf12U : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                           ? (vlSelf->top__DOT__if_id_to_id_inst 
                                              >> 0x14U)
                                           : 0xf12U))),12);
            tracep->chgCData(oldp+1197,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0x13U : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                           ? (0x7fU 
                                              & vlSelf->top__DOT__if_id_to_id_inst)
                                           : 0U))),7);
            tracep->chgCData(oldp+1198,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (7U 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 0xcU))
                                                   : 0U))),3);
            tracep->chgCData(oldp+1199,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (vlSelf->top__DOT__if_id_to_id_inst 
                                                   >> 0x19U)
                                                   : 0U))),7);
            tracep->chgQData(oldp+1200,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0ULL : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                           ? vlSelf->top__DOT__id_to_id_ex_rs1_data
                                           : 0ULL))),64);
            tracep->chgQData(oldp+1202,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0ULL : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                           ? vlSelf->top__DOT__id_to_id_ex_rs2_data
                                           : 0ULL))),64);
            tracep->chgCData(oldp+1204,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 7U))
                                                   : 0U))),5);
            tracep->chgBit(oldp+1205,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                       | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                          | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
            tracep->chgBit(oldp+1206,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                       | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                          | (0x73U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst))))));
            tracep->chgIData(oldp+1207,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                          ? 0U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? vlSelf->top__DOT__id_to_id_ex_imm
                                                   : 0U))),20);
            tracep->chgBit(oldp+1208,(((2U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                       & ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                          & (((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__if_id_to_id_inst)) 
                                              | (0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst))) 
                                             | (0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst)))))));
            tracep->chgQData(oldp+1209,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
            tracep->chgQData(oldp+1211,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
            tracep->chgIData(oldp+1213,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
            tracep->chgQData(oldp+1214,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                         + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+1216,((((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
            tracep->chgQData(oldp+1218,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                         - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
            tracep->chgQData(oldp+1220,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
            tracep->chgQData(oldp+1222,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
            tracep->chgBit(oldp+1224,(vlSelf->top__DOT__ex0__DOT__branch_flag_t_beq));
            tracep->chgBit(oldp+1225,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
            tracep->chgBit(oldp+1226,((1U & (~ (IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t_beq)))));
            tracep->chgWData(oldp+1227,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4),355);
            tracep->chgWData(oldp+1239,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+1242,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+1245,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+1248,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+1251,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgCData(oldp+1254,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+1255,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+1256,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+1257,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+1258,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[4]),7);
            tracep->chgQData(oldp+1259,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1261,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1263,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1265,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1267,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1269,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1271,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1272,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4),201);
            tracep->chgWData(oldp+1279,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+1282,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+1285,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+1288,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1289,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1290,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+1291,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1293,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1295,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1297,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1299,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1300,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4),142);
            tracep->chgWData(oldp+1305,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+1308,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+1311,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+1312,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+1313,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1315,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1317,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1319,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+1320,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
            tracep->chgQData(oldp+1321,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                          ? 0ULL : 
                                         ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                           ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                           : 0ULL))),64);
            tracep->chgQData(oldp+1323,(vlSelf->top__DOT__mem0__DOT__wdata_t_load),64);
            __Vtemp1990[0U] = (IData)(vlSelf->top__DOT__mem0__DOT__wdata_t_load);
            __Vtemp1990[1U] = (IData)((vlSelf->top__DOT__mem0__DOT__wdata_t_load 
                                       >> 0x20U));
            __Vtemp1990[2U] = 3U;
            tracep->chgWData(oldp+1325,(__Vtemp1990),71);
            tracep->chgWData(oldp+1328,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgCData(oldp+1331,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__key_list[0]),7);
            tracep->chgQData(oldp+1332,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1334,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1336,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1337,(vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4),469);
            tracep->chgWData(oldp+1352,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+1355,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+1358,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+1361,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+1364,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+1367,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[5]),67);
            tracep->chgWData(oldp+1370,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[6]),67);
            tracep->chgCData(oldp+1373,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1374,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1375,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+1376,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+1377,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+1378,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[5]),3);
            tracep->chgCData(oldp+1379,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[6]),3);
            tracep->chgQData(oldp+1380,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1382,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1384,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1386,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1388,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1390,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1392,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1394,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1396,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+1397,((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
            tracep->chgCData(oldp+1398,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
            tracep->chgCData(oldp+1399,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1),2);
            tracep->chgCData(oldp+1400,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1),2);
            tracep->chgCData(oldp+1401,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1),2);
            tracep->chgIData(oldp+1402,(vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux1____pinNumber4),24);
            tracep->chgCData(oldp+1403,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+1404,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+1405,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+1406,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1407,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1408,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1409,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+1410,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+1411,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+1412,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+1413,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1414,((0x148U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1) 
                                                   << 0xcU))),18);
            tracep->chgCData(oldp+1415,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+1416,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+1417,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+1418,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1419,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1420,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1421,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+1422,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+1423,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+1424,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1425,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1426,((0x148U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1) 
                                                   << 0xcU))),18);
            tracep->chgCData(oldp+1427,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+1428,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+1429,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+1430,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1431,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1432,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1433,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+1434,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+1435,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+1436,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1437,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1438,((0x148U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1) 
                                                   << 0xcU))),18);
            tracep->chgCData(oldp+1439,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+1440,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+1441,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+1442,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1443,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1444,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1445,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+1446,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+1447,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+1448,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1449,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1450,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+1451,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+1452,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+1453,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1454,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1455,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1456,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+1457,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+1458,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+1459,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1460,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1461,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
            tracep->chgCData(oldp+1462,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
            tracep->chgCData(oldp+1463,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2]),6);
            tracep->chgCData(oldp+1464,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1465,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1466,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1467,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+1468,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+1469,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+1470,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+1471,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+1472,(vlSelf->clk));
        tracep->chgBit(oldp+1473,(vlSelf->rst));
        tracep->chgBit(oldp+1474,(vlSelf->dcache_ready_i));
        tracep->chgBit(oldp+1475,(vlSelf->icache_data_valid_i));
        tracep->chgBit(oldp+1476,(vlSelf->dcache_data_valid_i));
        tracep->chgIData(oldp+1477,(vlSelf->icache_data_i),32);
        tracep->chgQData(oldp+1478,(vlSelf->dcache_data_i),64);
        tracep->chgQData(oldp+1480,(vlSelf->icache_addr_o),64);
        tracep->chgQData(oldp+1482,(vlSelf->dcache_addr_o),64);
        tracep->chgBit(oldp+1484,(vlSelf->icache_req_valid_o));
        tracep->chgBit(oldp+1485,(vlSelf->dcache_req_valid_o));
        tracep->chgBit(oldp+1486,(vlSelf->icache_wen_o));
        tracep->chgBit(oldp+1487,(vlSelf->dcache_wen_o));
        tracep->chgQData(oldp+1488,(vlSelf->dcache_wdata_o),64);
        tracep->chgCData(oldp+1490,(vlSelf->dcache_wlen_o),2);
        tracep->chgQData(oldp+1491,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->chgQData(oldp+1493,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->chgQData(oldp+1495,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->chgQData(oldp+1497,(vlSelf->diff_regs_o[0]),64);
        tracep->chgQData(oldp+1499,(vlSelf->diff_regs_o[1]),64);
        tracep->chgQData(oldp+1501,(vlSelf->diff_regs_o[2]),64);
        tracep->chgQData(oldp+1503,(vlSelf->diff_regs_o[3]),64);
        tracep->chgQData(oldp+1505,(vlSelf->diff_regs_o[4]),64);
        tracep->chgQData(oldp+1507,(vlSelf->diff_regs_o[5]),64);
        tracep->chgQData(oldp+1509,(vlSelf->diff_regs_o[6]),64);
        tracep->chgQData(oldp+1511,(vlSelf->diff_regs_o[7]),64);
        tracep->chgQData(oldp+1513,(vlSelf->diff_regs_o[8]),64);
        tracep->chgQData(oldp+1515,(vlSelf->diff_regs_o[9]),64);
        tracep->chgQData(oldp+1517,(vlSelf->diff_regs_o[10]),64);
        tracep->chgQData(oldp+1519,(vlSelf->diff_regs_o[11]),64);
        tracep->chgQData(oldp+1521,(vlSelf->diff_regs_o[12]),64);
        tracep->chgQData(oldp+1523,(vlSelf->diff_regs_o[13]),64);
        tracep->chgQData(oldp+1525,(vlSelf->diff_regs_o[14]),64);
        tracep->chgQData(oldp+1527,(vlSelf->diff_regs_o[15]),64);
        tracep->chgQData(oldp+1529,(vlSelf->diff_regs_o[16]),64);
        tracep->chgQData(oldp+1531,(vlSelf->diff_regs_o[17]),64);
        tracep->chgQData(oldp+1533,(vlSelf->diff_regs_o[18]),64);
        tracep->chgQData(oldp+1535,(vlSelf->diff_regs_o[19]),64);
        tracep->chgQData(oldp+1537,(vlSelf->diff_regs_o[20]),64);
        tracep->chgQData(oldp+1539,(vlSelf->diff_regs_o[21]),64);
        tracep->chgQData(oldp+1541,(vlSelf->diff_regs_o[22]),64);
        tracep->chgQData(oldp+1543,(vlSelf->diff_regs_o[23]),64);
        tracep->chgQData(oldp+1545,(vlSelf->diff_regs_o[24]),64);
        tracep->chgQData(oldp+1547,(vlSelf->diff_regs_o[25]),64);
        tracep->chgQData(oldp+1549,(vlSelf->diff_regs_o[26]),64);
        tracep->chgQData(oldp+1551,(vlSelf->diff_regs_o[27]),64);
        tracep->chgQData(oldp+1553,(vlSelf->diff_regs_o[28]),64);
        tracep->chgQData(oldp+1555,(vlSelf->diff_regs_o[29]),64);
        tracep->chgQData(oldp+1557,(vlSelf->diff_regs_o[30]),64);
        tracep->chgQData(oldp+1559,(vlSelf->diff_regs_o[31]),64);
        tracep->chgBit(oldp+1561,((1U & (~ (IData)(vlSelf->dcache_data_valid_i)))));
        tracep->chgBit(oldp+1562,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgIData(oldp+1563,(((2U == (IData)(vlSelf->top__DOT__if_id0__DOT__state))
                                      ? 0x13U : vlSelf->icache_data_i)),32);
        tracep->chgQData(oldp+1564,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->dcache_data_i 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->dcache_data_i)))))),64);
        tracep->chgQData(oldp+1566,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->dcache_data_i))))),64);
        tracep->chgQData(oldp+1568,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->dcache_data_i 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->dcache_data_i)))))),64);
        tracep->chgQData(oldp+1570,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->dcache_data_i))))),64);
        tracep->chgQData(oldp+1572,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dcache_data_i 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->dcache_data_i)))),64);
        tracep->chgQData(oldp+1574,((QData)((IData)(vlSelf->dcache_data_i))),64);
        tracep->chgCData(oldp+1576,(((IData)(vlSelf->dcache_data_valid_i)
                                      ? ((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t)
                                          ? 2U : 0U)
                                      : 1U)),4);
        tracep->chgCData(oldp+1577,(((IData)(vlSelf->dcache_ready_i)
                                      ? 0U : 1U)),4);
        tracep->chgCData(oldp+1578,(((IData)(vlSelf->dcache_data_valid_i)
                                      ? 0U : 1U)),2);
        tracep->chgIData(oldp+1579,((0x148U | (((IData)(vlSelf->dcache_data_valid_i)
                                                 ? 0U
                                                 : 1U) 
                                               << 0xcU))),18);
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
