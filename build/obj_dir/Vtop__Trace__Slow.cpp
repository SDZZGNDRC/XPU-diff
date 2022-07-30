// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1030,"clk", false,-1);
        tracep->declBit(c+1031,"rst", false,-1);
        tracep->declBit(c+1032,"icache_data_valid_i", false,-1);
        tracep->declBus(c+1033,"icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1034,"icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1036,"icache_req_valid_o", false,-1);
        tracep->declBit(c+1037,"icache_data_wen_o", false,-1);
        tracep->declQuad(c+1038,"diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1040,"diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1042,"diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1044+i*2,"diff_regs_o", true,(i+0), 63,0);}}
        tracep->declBit(c+1030,"top clk", false,-1);
        tracep->declBit(c+1031,"top rst", false,-1);
        tracep->declBit(c+1032,"top icache_data_valid_i", false,-1);
        tracep->declBus(c+1033,"top icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1034,"top icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1036,"top icache_req_valid_o", false,-1);
        tracep->declBit(c+1037,"top icache_data_wen_o", false,-1);
        tracep->declQuad(c+1038,"top diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1040,"top diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1042,"top diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1044+i*2,"top diff_regs_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+30,"top if_id_to_id_pc", false,-1, 63,0);
        tracep->declQuad(c+30,"top id_to_id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+32,"top id_ex_to_ex_pc", false,-1, 63,0);
        tracep->declBus(c+34,"top if_id_to_id_inst", false,-1, 31,0);
        tracep->declQuad(c+35,"top regfile_to_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+37,"top regfile_to_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+39,"top id_to_id_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+41,"top id_ex_to_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+43,"top id_to_id_ex_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+45,"top id_ex_to_ex_rs2_data", false,-1, 63,0);
        tracep->declBus(c+47,"top id_to_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+48,"top id_to_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+49,"top id_ex_to_ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+50,"top id_ex_to_ex_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+51,"top id_to_id_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+52,"top id_ex_to_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+52,"top ex_to_ex_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+53,"top ex_mem_to_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+53,"top mem_to_mem_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+54,"top mem_wb_to_regfile_wdata", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex_to_ex_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_mem_to_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+58,"top mem_to_mem_wb_wdata", false,-1, 63,0);
        tracep->declBus(c+60,"top id_to_id_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+61,"top id_ex_to_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+62,"top id_to_id_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+63,"top id_ex_to_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+64,"top id_to_id_ex_funct7", false,-1, 6,0);
        tracep->declBus(c+65,"top id_ex_to_ex_funct7", false,-1, 6,0);
        tracep->declBit(c+66,"top id_to_id_ex_wreg", false,-1);
        tracep->declBit(c+67,"top id_ex_to_ex_wreg", false,-1);
        tracep->declBit(c+67,"top ex_to_ex_mem_wreg", false,-1);
        tracep->declBit(c+68,"top ex_mem_to_mem_wreg", false,-1);
        tracep->declBit(c+68,"top mem_to_mem_wb_wreg", false,-1);
        tracep->declBus(c+69,"top id_to_id_ex_imm", false,-1, 19,0);
        tracep->declBus(c+70,"top id_ex_to_ex_imm", false,-1, 19,0);
        tracep->declBus(c+71,"top id_to_id_ex_offset12", false,-1, 11,0);
        tracep->declBus(c+72,"top id_ex_to_ex_offset12", false,-1, 11,0);
        tracep->declBit(c+73,"top mem_wb_to_regfile_we", false,-1);
        tracep->declBus(c+74,"top mem_wb_to_regfile_waddr", false,-1, 4,0);
        tracep->declBus(c+52,"top ex_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+67,"top ex_to_id_back_wreg", false,-1);
        tracep->declQuad(c+75,"top ex_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+53,"top mem_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+68,"top mem_to_id_back_wreg", false,-1);
        tracep->declQuad(c+58,"top mem_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+74,"top mem_wb_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+73,"top mem_wb_to_id_back_wreg", false,-1);
        tracep->declQuad(c+54,"top mem_wb_to_id_back_wdata", false,-1, 63,0);
        tracep->declBit(c+77,"top ex_branch_flag", false,-1);
        tracep->declQuad(c+78,"top ex_to_ctrl_pc_new", false,-1, 63,0);
        tracep->declBus(c+80,"top ctrl_to_pc_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+81,"top ctrl_to_if_id_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+82,"top ctrl_to_id_ex_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+83,"top ctrl_to_ex_mem_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+84,"top ctrl_to_mem_wb_ctrl_signal", false,-1, 1,0);
        tracep->declQuad(c+85,"top ctrl_to_pc_pc_new", false,-1, 63,0);
        tracep->declQuad(c+87,"top pc_to_if_id_pc", false,-1, 63,0);
        tracep->declBit(c+1030,"top pc0 clk", false,-1);
        tracep->declBit(c+1031,"top pc0 rst", false,-1);
        tracep->declBus(c+80,"top pc0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+85,"top pc0 pc_new_i", false,-1, 63,0);
        tracep->declQuad(c+1034,"top pc0 pc_ram_o", false,-1, 63,0);
        tracep->declQuad(c+87,"top pc0 pc_pipeline_o", false,-1, 63,0);
        tracep->declBit(c+1037,"top pc0 icache_data_wen_o", false,-1);
        tracep->declBit(c+1036,"top pc0 icache_req_valid_o", false,-1);
        tracep->declQuad(c+89,"top pc0 pc_ram_t", false,-1, 63,0);
        tracep->declBit(c+91,"top pc0 pc_ram_wen", false,-1);
        tracep->declQuad(c+92,"top pc0 pc_pipeline_t", false,-1, 63,0);
        tracep->declBit(c+91,"top pc0 pc_pipeline_wen", false,-1);
        tracep->declBus(c+1109,"top pc0 pc_ram WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1110,"top pc0 pc_ram RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top pc0 pc_ram clk", false,-1);
        tracep->declBit(c+1031,"top pc0 pc_ram rst", false,-1);
        tracep->declQuad(c+89,"top pc0 pc_ram din", false,-1, 63,0);
        tracep->declQuad(c+1034,"top pc0 pc_ram dout", false,-1, 63,0);
        tracep->declBit(c+91,"top pc0 pc_ram wen", false,-1);
        tracep->declBus(c+1112,"top pc0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1112,"top pc0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top pc0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+89,"top pc0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+80,"top pc0 mux1 key", false,-1, 1,0);
        tracep->declQuad(c+1113,"top pc0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+94,"top pc0 mux1 lut", false,-1, 131,0);
        tracep->declBus(c+1112,"top pc0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1112,"top pc0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top pc0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top pc0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+89,"top pc0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+80,"top pc0 mux1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1113,"top pc0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+94,"top pc0 mux1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1116,"top pc0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+99+i*3,"top pc0 mux1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+105+i*1,"top pc0 mux1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+107+i*2,"top pc0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+111,"top pc0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+113,"top pc0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1117,"top pc0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1109,"top pc0 pc_pipeline WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1118,"top pc0 pc_pipeline RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top pc0 pc_pipeline clk", false,-1);
        tracep->declBit(c+1031,"top pc0 pc_pipeline rst", false,-1);
        tracep->declQuad(c+92,"top pc0 pc_pipeline din", false,-1, 63,0);
        tracep->declQuad(c+87,"top pc0 pc_pipeline dout", false,-1, 63,0);
        tracep->declBit(c+91,"top pc0 pc_pipeline wen", false,-1);
        tracep->declBus(c+1112,"top pc0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1112,"top pc0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top pc0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+92,"top pc0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+80,"top pc0 mux2 key", false,-1, 1,0);
        tracep->declQuad(c+1113,"top pc0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+114,"top pc0 mux2 lut", false,-1, 131,0);
        tracep->declBus(c+1112,"top pc0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1112,"top pc0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top pc0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top pc0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+92,"top pc0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+80,"top pc0 mux2 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1113,"top pc0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+114,"top pc0 mux2 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1116,"top pc0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+119+i*3,"top pc0 mux2 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+125+i*1,"top pc0 mux2 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+127+i*2,"top pc0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+131,"top pc0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+133,"top pc0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1117,"top pc0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1030,"top if_id0 clk", false,-1);
        tracep->declBit(c+1031,"top if_id0 rst", false,-1);
        tracep->declBus(c+1033,"top if_id0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+81,"top if_id0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+87,"top if_id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+34,"top if_id0 if_inst_o", false,-1, 31,0);
        tracep->declQuad(c+30,"top if_id0 pc_o", false,-1, 63,0);
        tracep->declBit(c+134,"top if_id0 pc_wen", false,-1);
        tracep->declBit(c+134,"top if_id0 if_inst_wen", false,-1);
        tracep->declBus(c+1108,"top if_id0 if_inst_t", false,-1, 31,0);
        tracep->declBus(c+1109,"top if_id0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top if_id0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top if_id0 reg1 clk", false,-1);
        tracep->declBit(c+1031,"top if_id0 reg1 rst", false,-1);
        tracep->declQuad(c+87,"top if_id0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+30,"top if_id0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+134,"top if_id0 reg1 wen", false,-1);
        tracep->declBus(c+1120,"top if_id0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1121,"top if_id0 reg2 RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1030,"top if_id0 reg2 clk", false,-1);
        tracep->declBit(c+1031,"top if_id0 reg2 rst", false,-1);
        tracep->declBus(c+1108,"top if_id0 reg2 din", false,-1, 31,0);
        tracep->declBus(c+34,"top if_id0 reg2 dout", false,-1, 31,0);
        tracep->declBit(c+134,"top if_id0 reg2 wen", false,-1);
        tracep->declBus(c+34,"top id0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+35,"top id0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+37,"top id0 rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+75,"top id0 ex_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+52,"top id0 ex_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+67,"top id0 ex_back_wreg_i", false,-1);
        tracep->declQuad(c+58,"top id0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+53,"top id0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+68,"top id0 mem_back_wreg_i", false,-1);
        tracep->declQuad(c+54,"top id0 mem_wb_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+74,"top id0 mem_wb_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+73,"top id0 mem_wb_back_wreg_i", false,-1);
        tracep->declQuad(c+30,"top id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+47,"top id0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+48,"top id0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+60,"top id0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+62,"top id0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+64,"top id0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+39,"top id0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+43,"top id0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+51,"top id0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+66,"top id0 wreg_o", false,-1);
        tracep->declBus(c+69,"top id0 imm_o", false,-1, 19,0);
        tracep->declBus(c+71,"top id0 offset12_o", false,-1, 11,0);
        tracep->declQuad(c+30,"top id0 pc_o", false,-1, 63,0);
        tracep->declBus(c+1112,"top id0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top id0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top id0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+66,"top id0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+60,"top id0 mux1 key", false,-1, 6,0);
        tracep->declBus(c+1123,"top id0 mux1 default_out", false,-1, 0,0);
        tracep->declBus(c+1124,"top id0 mux1 lut", false,-1, 15,0);
        tracep->declBus(c+1112,"top id0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top id0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top id0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top id0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+66,"top id0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+60,"top id0 mux1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1123,"top id0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1124,"top id0 mux1 i0 lut", false,-1, 15,0);
        tracep->declBus(c+1125,"top id0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1+i*1,"top id0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+3+i*1,"top id0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"top id0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+135,"top id0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+136,"top id0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1117,"top id0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top id0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top id0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1127,"top id0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+69,"top id0 mux2 out", false,-1, 19,0);
        tracep->declBus(c+60,"top id0 mux2 key", false,-1, 6,0);
        tracep->declBus(c+137,"top id0 mux2 default_out", false,-1, 19,0);
        tracep->declArray(c+138,"top id0 mux2 lut", false,-1, 80,0);
        tracep->declBus(c+1126,"top id0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top id0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1127,"top id0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top id0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+69,"top id0 mux2 i0 out", false,-1, 19,0);
        tracep->declBus(c+60,"top id0 mux2 i0 key", false,-1, 6,0);
        tracep->declBus(c+137,"top id0 mux2 i0 default_out", false,-1, 19,0);
        tracep->declArray(c+138,"top id0 mux2 i0 lut", false,-1, 80,0);
        tracep->declBus(c+1128,"top id0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+141+i*1,"top id0 mux2 i0 pair_list", true,(i+0), 26,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+144+i*1,"top id0 mux2 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+147+i*1,"top id0 mux2 i0 data_list", true,(i+0), 19,0);}}
        tracep->declBus(c+150,"top id0 mux2 i0 lut_out", false,-1, 19,0);
        tracep->declBit(c+151,"top id0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1129,"top id0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top id0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top id0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1130,"top id0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+71,"top id0 mux3 out", false,-1, 11,0);
        tracep->declBus(c+60,"top id0 mux3 key", false,-1, 6,0);
        tracep->declBus(c+152,"top id0 mux3 default_out", false,-1, 11,0);
        tracep->declQuad(c+153,"top id0 mux3 lut", false,-1, 37,0);
        tracep->declBus(c+1112,"top id0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top id0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1130,"top id0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top id0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+71,"top id0 mux3 i0 out", false,-1, 11,0);
        tracep->declBus(c+60,"top id0 mux3 i0 key", false,-1, 6,0);
        tracep->declBus(c+152,"top id0 mux3 i0 default_out", false,-1, 11,0);
        tracep->declQuad(c+153,"top id0 mux3 i0 lut", false,-1, 37,0);
        tracep->declBus(c+1131,"top id0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+155+i*1,"top id0 mux3 i0 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+157+i*1,"top id0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+159+i*1,"top id0 mux3 i0 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+161,"top id0 mux3 i0 lut_out", false,-1, 11,0);
        tracep->declBit(c+162,"top id0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1117,"top id0 mux3 i0 i", false,-1, 31,0);
        tracep->declBit(c+1030,"top regfile0 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 rst", false,-1);
        tracep->declBit(c+73,"top regfile0 we_i", false,-1);
        tracep->declBus(c+74,"top regfile0 waddr_i", false,-1, 4,0);
        tracep->declQuad(c+54,"top regfile0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+47,"top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declQuad(c+35,"top regfile0 rdata1_o", false,-1, 63,0);
        tracep->declBus(c+48,"top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declQuad(c+37,"top regfile0 rdata2_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+163+i*2,"top regfile0 diff_reg_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+227,"top regfile0 out_x1", false,-1, 63,0);
        tracep->declQuad(c+229,"top regfile0 out_x2", false,-1, 63,0);
        tracep->declQuad(c+231,"top regfile0 out_x3", false,-1, 63,0);
        tracep->declQuad(c+233,"top regfile0 out_x4", false,-1, 63,0);
        tracep->declQuad(c+235,"top regfile0 out_x5", false,-1, 63,0);
        tracep->declQuad(c+237,"top regfile0 out_x6", false,-1, 63,0);
        tracep->declQuad(c+239,"top regfile0 out_x7", false,-1, 63,0);
        tracep->declQuad(c+241,"top regfile0 out_x8", false,-1, 63,0);
        tracep->declQuad(c+243,"top regfile0 out_x9", false,-1, 63,0);
        tracep->declQuad(c+245,"top regfile0 out_x10", false,-1, 63,0);
        tracep->declQuad(c+247,"top regfile0 out_x11", false,-1, 63,0);
        tracep->declQuad(c+249,"top regfile0 out_x12", false,-1, 63,0);
        tracep->declQuad(c+251,"top regfile0 out_x13", false,-1, 63,0);
        tracep->declQuad(c+253,"top regfile0 out_x14", false,-1, 63,0);
        tracep->declQuad(c+255,"top regfile0 out_x15", false,-1, 63,0);
        tracep->declQuad(c+257,"top regfile0 out_x16", false,-1, 63,0);
        tracep->declQuad(c+259,"top regfile0 out_x17", false,-1, 63,0);
        tracep->declQuad(c+261,"top regfile0 out_x18", false,-1, 63,0);
        tracep->declQuad(c+263,"top regfile0 out_x19", false,-1, 63,0);
        tracep->declQuad(c+265,"top regfile0 out_x20", false,-1, 63,0);
        tracep->declQuad(c+267,"top regfile0 out_x21", false,-1, 63,0);
        tracep->declQuad(c+269,"top regfile0 out_x22", false,-1, 63,0);
        tracep->declQuad(c+271,"top regfile0 out_x23", false,-1, 63,0);
        tracep->declQuad(c+273,"top regfile0 out_x24", false,-1, 63,0);
        tracep->declQuad(c+275,"top regfile0 out_x25", false,-1, 63,0);
        tracep->declQuad(c+277,"top regfile0 out_x26", false,-1, 63,0);
        tracep->declQuad(c+279,"top regfile0 out_x27", false,-1, 63,0);
        tracep->declQuad(c+281,"top regfile0 out_x28", false,-1, 63,0);
        tracep->declQuad(c+283,"top regfile0 out_x29", false,-1, 63,0);
        tracep->declQuad(c+285,"top regfile0 out_x30", false,-1, 63,0);
        tracep->declQuad(c+287,"top regfile0 out_x31", false,-1, 63,0);
        tracep->declBit(c+289,"top regfile0 wen_x1", false,-1);
        tracep->declBit(c+290,"top regfile0 wen_x2", false,-1);
        tracep->declBit(c+291,"top regfile0 wen_x3", false,-1);
        tracep->declBit(c+292,"top regfile0 wen_x4", false,-1);
        tracep->declBit(c+293,"top regfile0 wen_x5", false,-1);
        tracep->declBit(c+294,"top regfile0 wen_x6", false,-1);
        tracep->declBit(c+295,"top regfile0 wen_x7", false,-1);
        tracep->declBit(c+296,"top regfile0 wen_x8", false,-1);
        tracep->declBit(c+297,"top regfile0 wen_x9", false,-1);
        tracep->declBit(c+298,"top regfile0 wen_x10", false,-1);
        tracep->declBit(c+299,"top regfile0 wen_x11", false,-1);
        tracep->declBit(c+300,"top regfile0 wen_x12", false,-1);
        tracep->declBit(c+301,"top regfile0 wen_x13", false,-1);
        tracep->declBit(c+302,"top regfile0 wen_x14", false,-1);
        tracep->declBit(c+303,"top regfile0 wen_x15", false,-1);
        tracep->declBit(c+304,"top regfile0 wen_x16", false,-1);
        tracep->declBit(c+305,"top regfile0 wen_x17", false,-1);
        tracep->declBit(c+306,"top regfile0 wen_x18", false,-1);
        tracep->declBit(c+307,"top regfile0 wen_x19", false,-1);
        tracep->declBit(c+308,"top regfile0 wen_x20", false,-1);
        tracep->declBit(c+309,"top regfile0 wen_x21", false,-1);
        tracep->declBit(c+310,"top regfile0 wen_x22", false,-1);
        tracep->declBit(c+311,"top regfile0 wen_x23", false,-1);
        tracep->declBit(c+312,"top regfile0 wen_x24", false,-1);
        tracep->declBit(c+313,"top regfile0 wen_x25", false,-1);
        tracep->declBit(c+314,"top regfile0 wen_x26", false,-1);
        tracep->declBit(c+315,"top regfile0 wen_x27", false,-1);
        tracep->declBit(c+316,"top regfile0 wen_x28", false,-1);
        tracep->declBit(c+317,"top regfile0 wen_x29", false,-1);
        tracep->declBit(c+318,"top regfile0 wen_x30", false,-1);
        tracep->declBit(c+319,"top regfile0 wen_x31", false,-1);
        tracep->declQuad(c+320,"top regfile0 rdata1_t", false,-1, 63,0);
        tracep->declQuad(c+322,"top regfile0 rdata2_t", false,-1, 63,0);
        tracep->declBus(c+1109,"top regfile0 x1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x1 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x1 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x1 din", false,-1, 63,0);
        tracep->declQuad(c+227,"top regfile0 x1 dout", false,-1, 63,0);
        tracep->declBit(c+289,"top regfile0 x1 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x2 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x2 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x2 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x2 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x2 din", false,-1, 63,0);
        tracep->declQuad(c+229,"top regfile0 x2 dout", false,-1, 63,0);
        tracep->declBit(c+290,"top regfile0 x2 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x3 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x3 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x3 din", false,-1, 63,0);
        tracep->declQuad(c+231,"top regfile0 x3 dout", false,-1, 63,0);
        tracep->declBit(c+291,"top regfile0 x3 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x4 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x4 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x4 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x4 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x4 din", false,-1, 63,0);
        tracep->declQuad(c+233,"top regfile0 x4 dout", false,-1, 63,0);
        tracep->declBit(c+292,"top regfile0 x4 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x5 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x5 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x5 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x5 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x5 din", false,-1, 63,0);
        tracep->declQuad(c+235,"top regfile0 x5 dout", false,-1, 63,0);
        tracep->declBit(c+293,"top regfile0 x5 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x6 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x6 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x6 din", false,-1, 63,0);
        tracep->declQuad(c+237,"top regfile0 x6 dout", false,-1, 63,0);
        tracep->declBit(c+294,"top regfile0 x6 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x7 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x7 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x7 din", false,-1, 63,0);
        tracep->declQuad(c+239,"top regfile0 x7 dout", false,-1, 63,0);
        tracep->declBit(c+295,"top regfile0 x7 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x8 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x8 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x8 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x8 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x8 din", false,-1, 63,0);
        tracep->declQuad(c+241,"top regfile0 x8 dout", false,-1, 63,0);
        tracep->declBit(c+296,"top regfile0 x8 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x9 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x9 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x9 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x9 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x9 din", false,-1, 63,0);
        tracep->declQuad(c+243,"top regfile0 x9 dout", false,-1, 63,0);
        tracep->declBit(c+297,"top regfile0 x9 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x10 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x10 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x10 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x10 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x10 din", false,-1, 63,0);
        tracep->declQuad(c+245,"top regfile0 x10 dout", false,-1, 63,0);
        tracep->declBit(c+298,"top regfile0 x10 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x11 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x11 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x11 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x11 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x11 din", false,-1, 63,0);
        tracep->declQuad(c+247,"top regfile0 x11 dout", false,-1, 63,0);
        tracep->declBit(c+299,"top regfile0 x11 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x12 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x12 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x12 din", false,-1, 63,0);
        tracep->declQuad(c+249,"top regfile0 x12 dout", false,-1, 63,0);
        tracep->declBit(c+300,"top regfile0 x12 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x13 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x13 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x13 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x13 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x13 din", false,-1, 63,0);
        tracep->declQuad(c+251,"top regfile0 x13 dout", false,-1, 63,0);
        tracep->declBit(c+301,"top regfile0 x13 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x14 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x14 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x14 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x14 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x14 din", false,-1, 63,0);
        tracep->declQuad(c+253,"top regfile0 x14 dout", false,-1, 63,0);
        tracep->declBit(c+302,"top regfile0 x14 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x15 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x15 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x15 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x15 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x15 din", false,-1, 63,0);
        tracep->declQuad(c+255,"top regfile0 x15 dout", false,-1, 63,0);
        tracep->declBit(c+303,"top regfile0 x15 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x16 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x16 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x16 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x16 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x16 din", false,-1, 63,0);
        tracep->declQuad(c+257,"top regfile0 x16 dout", false,-1, 63,0);
        tracep->declBit(c+304,"top regfile0 x16 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x17 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x17 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x17 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x17 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x17 din", false,-1, 63,0);
        tracep->declQuad(c+259,"top regfile0 x17 dout", false,-1, 63,0);
        tracep->declBit(c+305,"top regfile0 x17 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x18 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x18 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x18 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x18 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x18 din", false,-1, 63,0);
        tracep->declQuad(c+261,"top regfile0 x18 dout", false,-1, 63,0);
        tracep->declBit(c+306,"top regfile0 x18 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x19 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x19 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x19 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x19 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x19 din", false,-1, 63,0);
        tracep->declQuad(c+263,"top regfile0 x19 dout", false,-1, 63,0);
        tracep->declBit(c+307,"top regfile0 x19 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x20 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x20 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x20 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x20 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x20 din", false,-1, 63,0);
        tracep->declQuad(c+265,"top regfile0 x20 dout", false,-1, 63,0);
        tracep->declBit(c+308,"top regfile0 x20 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x21 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x21 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x21 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x21 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x21 din", false,-1, 63,0);
        tracep->declQuad(c+267,"top regfile0 x21 dout", false,-1, 63,0);
        tracep->declBit(c+309,"top regfile0 x21 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x22 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x22 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x22 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x22 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x22 din", false,-1, 63,0);
        tracep->declQuad(c+269,"top regfile0 x22 dout", false,-1, 63,0);
        tracep->declBit(c+310,"top regfile0 x22 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x23 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x23 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x23 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x23 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x23 din", false,-1, 63,0);
        tracep->declQuad(c+271,"top regfile0 x23 dout", false,-1, 63,0);
        tracep->declBit(c+311,"top regfile0 x23 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x24 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x24 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x24 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x24 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x24 din", false,-1, 63,0);
        tracep->declQuad(c+273,"top regfile0 x24 dout", false,-1, 63,0);
        tracep->declBit(c+312,"top regfile0 x24 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x25 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x25 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x25 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x25 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x25 din", false,-1, 63,0);
        tracep->declQuad(c+275,"top regfile0 x25 dout", false,-1, 63,0);
        tracep->declBit(c+313,"top regfile0 x25 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x26 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x26 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x26 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x26 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x26 din", false,-1, 63,0);
        tracep->declQuad(c+277,"top regfile0 x26 dout", false,-1, 63,0);
        tracep->declBit(c+314,"top regfile0 x26 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x27 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x27 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x27 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x27 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x27 din", false,-1, 63,0);
        tracep->declQuad(c+279,"top regfile0 x27 dout", false,-1, 63,0);
        tracep->declBit(c+315,"top regfile0 x27 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x28 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x28 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x28 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x28 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x28 din", false,-1, 63,0);
        tracep->declQuad(c+281,"top regfile0 x28 dout", false,-1, 63,0);
        tracep->declBit(c+316,"top regfile0 x28 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x29 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x29 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x29 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x29 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x29 din", false,-1, 63,0);
        tracep->declQuad(c+283,"top regfile0 x29 dout", false,-1, 63,0);
        tracep->declBit(c+317,"top regfile0 x29 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x30 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x30 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x30 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x30 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x30 din", false,-1, 63,0);
        tracep->declQuad(c+285,"top regfile0 x30 dout", false,-1, 63,0);
        tracep->declBit(c+318,"top regfile0 x30 wen", false,-1);
        tracep->declBus(c+1109,"top regfile0 x31 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top regfile0 x31 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top regfile0 x31 clk", false,-1);
        tracep->declBit(c+1031,"top regfile0 x31 rst", false,-1);
        tracep->declQuad(c+54,"top regfile0 x31 din", false,-1, 63,0);
        tracep->declQuad(c+287,"top regfile0 x31 dout", false,-1, 63,0);
        tracep->declBit(c+319,"top regfile0 x31 wen", false,-1);
        tracep->declBus(c+1132,"top regfile0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1133,"top regfile0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top regfile0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+320,"top regfile0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+47,"top regfile0 mux1 key", false,-1, 4,0);
        tracep->declQuad(c+1113,"top regfile0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+324,"top regfile0 mux1 lut", false,-1, 2138,0);
        tracep->declBus(c+1132,"top regfile0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1133,"top regfile0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top regfile0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top regfile0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+320,"top regfile0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+47,"top regfile0 mux1 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1113,"top regfile0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+324,"top regfile0 mux1 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1134,"top regfile0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+391+i*3,"top regfile0 mux1 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+484+i*1,"top regfile0 mux1 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+515+i*2,"top regfile0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+577,"top regfile0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+579,"top regfile0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1135,"top regfile0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1132,"top regfile0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1133,"top regfile0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top regfile0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+322,"top regfile0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+48,"top regfile0 mux2 key", false,-1, 4,0);
        tracep->declQuad(c+1113,"top regfile0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+580,"top regfile0 mux2 lut", false,-1, 2138,0);
        tracep->declBus(c+1132,"top regfile0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1133,"top regfile0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top regfile0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top regfile0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+322,"top regfile0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+48,"top regfile0 mux2 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1113,"top regfile0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+580,"top regfile0 mux2 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1134,"top regfile0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+647+i*3,"top regfile0 mux2 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+740+i*1,"top regfile0 mux2 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+771+i*2,"top regfile0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+833,"top regfile0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+835,"top regfile0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1135,"top regfile0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1030,"top id_ex0 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 rst", false,-1);
        tracep->declBus(c+47,"top id_ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+48,"top id_ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+60,"top id_ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+62,"top id_ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+64,"top id_ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+39,"top id_ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+43,"top id_ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+51,"top id_ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+66,"top id_ex0 wreg_i", false,-1);
        tracep->declBus(c+69,"top id_ex0 imm_i", false,-1, 19,0);
        tracep->declBus(c+71,"top id_ex0 offset12_i", false,-1, 11,0);
        tracep->declQuad(c+30,"top id_ex0 pc_i", false,-1, 63,0);
        tracep->declBus(c+82,"top id_ex0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+49,"top id_ex0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+50,"top id_ex0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+61,"top id_ex0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+63,"top id_ex0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+65,"top id_ex0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+41,"top id_ex0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+45,"top id_ex0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+52,"top id_ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+67,"top id_ex0 wreg_o", false,-1);
        tracep->declBus(c+70,"top id_ex0 imm_o", false,-1, 19,0);
        tracep->declBus(c+72,"top id_ex0 offset12_o", false,-1, 11,0);
        tracep->declQuad(c+32,"top id_ex0 pc_o", false,-1, 63,0);
        tracep->declBus(c+836,"top id_ex0 rs1_addr_t", false,-1, 4,0);
        tracep->declBit(c+837,"top id_ex0 rs1_addr_wen", false,-1);
        tracep->declBus(c+838,"top id_ex0 rs2_addr_t", false,-1, 4,0);
        tracep->declBit(c+837,"top id_ex0 rs2_addr_wen", false,-1);
        tracep->declBus(c+839,"top id_ex0 opcode_t", false,-1, 6,0);
        tracep->declBit(c+837,"top id_ex0 opcode_wen", false,-1);
        tracep->declBus(c+840,"top id_ex0 funct3_t", false,-1, 2,0);
        tracep->declBit(c+837,"top id_ex0 funct3_wen", false,-1);
        tracep->declBus(c+841,"top id_ex0 funct7_t", false,-1, 6,0);
        tracep->declBit(c+837,"top id_ex0 funct7_wen", false,-1);
        tracep->declQuad(c+842,"top id_ex0 rs1_data_t", false,-1, 63,0);
        tracep->declBit(c+837,"top id_ex0 rs1_data_wen", false,-1);
        tracep->declQuad(c+844,"top id_ex0 rs2_data_t", false,-1, 63,0);
        tracep->declBit(c+837,"top id_ex0 rs2_data_wen", false,-1);
        tracep->declBus(c+846,"top id_ex0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+837,"top id_ex0 rd_addr_wen", false,-1);
        tracep->declBit(c+847,"top id_ex0 wreg_t", false,-1);
        tracep->declBit(c+837,"top id_ex0 wreg_wen", false,-1);
        tracep->declBus(c+848,"top id_ex0 imm_t", false,-1, 19,0);
        tracep->declBit(c+837,"top id_ex0 imm_wen", false,-1);
        tracep->declBus(c+849,"top id_ex0 offset12_t", false,-1, 11,0);
        tracep->declBit(c+837,"top id_ex0 offset12_wen", false,-1);
        tracep->declQuad(c+30,"top id_ex0 pc_t", false,-1, 63,0);
        tracep->declBit(c+837,"top id_ex0 pc_wen", false,-1);
        tracep->declBus(c+1133,"top id_ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1136,"top id_ex0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1030,"top id_ex0 reg1 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg1 rst", false,-1);
        tracep->declBus(c+836,"top id_ex0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+49,"top id_ex0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+837,"top id_ex0 reg1 wen", false,-1);
        tracep->declBus(c+1133,"top id_ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1136,"top id_ex0 reg2 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1030,"top id_ex0 reg2 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg2 rst", false,-1);
        tracep->declBus(c+838,"top id_ex0 reg2 din", false,-1, 4,0);
        tracep->declBus(c+50,"top id_ex0 reg2 dout", false,-1, 4,0);
        tracep->declBit(c+837,"top id_ex0 reg2 wen", false,-1);
        tracep->declBus(c+1122,"top id_ex0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1137,"top id_ex0 reg3 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1030,"top id_ex0 reg3 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg3 rst", false,-1);
        tracep->declBus(c+839,"top id_ex0 reg3 din", false,-1, 6,0);
        tracep->declBus(c+61,"top id_ex0 reg3 dout", false,-1, 6,0);
        tracep->declBit(c+837,"top id_ex0 reg3 wen", false,-1);
        tracep->declBus(c+1126,"top id_ex0 reg4 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1138,"top id_ex0 reg4 RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+1030,"top id_ex0 reg4 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg4 rst", false,-1);
        tracep->declBus(c+840,"top id_ex0 reg4 din", false,-1, 2,0);
        tracep->declBus(c+63,"top id_ex0 reg4 dout", false,-1, 2,0);
        tracep->declBit(c+837,"top id_ex0 reg4 wen", false,-1);
        tracep->declBus(c+1122,"top id_ex0 reg5 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1137,"top id_ex0 reg5 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1030,"top id_ex0 reg5 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg5 rst", false,-1);
        tracep->declBus(c+841,"top id_ex0 reg5 din", false,-1, 6,0);
        tracep->declBus(c+65,"top id_ex0 reg5 dout", false,-1, 6,0);
        tracep->declBit(c+837,"top id_ex0 reg5 wen", false,-1);
        tracep->declBus(c+1109,"top id_ex0 reg6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top id_ex0 reg6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top id_ex0 reg6 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg6 rst", false,-1);
        tracep->declQuad(c+842,"top id_ex0 reg6 din", false,-1, 63,0);
        tracep->declQuad(c+41,"top id_ex0 reg6 dout", false,-1, 63,0);
        tracep->declBit(c+837,"top id_ex0 reg6 wen", false,-1);
        tracep->declBus(c+1109,"top id_ex0 reg7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top id_ex0 reg7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top id_ex0 reg7 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg7 rst", false,-1);
        tracep->declQuad(c+844,"top id_ex0 reg7 din", false,-1, 63,0);
        tracep->declQuad(c+45,"top id_ex0 reg7 dout", false,-1, 63,0);
        tracep->declBit(c+837,"top id_ex0 reg7 wen", false,-1);
        tracep->declBus(c+1133,"top id_ex0 reg8 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1136,"top id_ex0 reg8 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1030,"top id_ex0 reg8 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg8 rst", false,-1);
        tracep->declBus(c+846,"top id_ex0 reg8 din", false,-1, 4,0);
        tracep->declBus(c+52,"top id_ex0 reg8 dout", false,-1, 4,0);
        tracep->declBit(c+837,"top id_ex0 reg8 wen", false,-1);
        tracep->declBus(c+1115,"top id_ex0 reg9 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1139,"top id_ex0 reg9 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1030,"top id_ex0 reg9 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg9 rst", false,-1);
        tracep->declBus(c+847,"top id_ex0 reg9 din", false,-1, 0,0);
        tracep->declBus(c+67,"top id_ex0 reg9 dout", false,-1, 0,0);
        tracep->declBit(c+837,"top id_ex0 reg9 wen", false,-1);
        tracep->declBus(c+1127,"top id_ex0 reg10 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1140,"top id_ex0 reg10 RESET_VAL", false,-1, 19,0);
        tracep->declBit(c+1030,"top id_ex0 reg10 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg10 rst", false,-1);
        tracep->declBus(c+848,"top id_ex0 reg10 din", false,-1, 19,0);
        tracep->declBus(c+70,"top id_ex0 reg10 dout", false,-1, 19,0);
        tracep->declBit(c+837,"top id_ex0 reg10 wen", false,-1);
        tracep->declBus(c+1130,"top id_ex0 reg11 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1141,"top id_ex0 reg11 RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+1030,"top id_ex0 reg11 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg11 rst", false,-1);
        tracep->declBus(c+849,"top id_ex0 reg11 din", false,-1, 11,0);
        tracep->declBus(c+72,"top id_ex0 reg11 dout", false,-1, 11,0);
        tracep->declBit(c+837,"top id_ex0 reg11 wen", false,-1);
        tracep->declBus(c+1109,"top id_ex0 reg12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top id_ex0 reg12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top id_ex0 reg12 clk", false,-1);
        tracep->declBit(c+1031,"top id_ex0 reg12 rst", false,-1);
        tracep->declQuad(c+30,"top id_ex0 reg12 din", false,-1, 63,0);
        tracep->declQuad(c+32,"top id_ex0 reg12 dout", false,-1, 63,0);
        tracep->declBit(c+837,"top id_ex0 reg12 wen", false,-1);
        tracep->declBit(c+1030,"top ex0 clk", false,-1);
        tracep->declBit(c+1031,"top ex0 rst", false,-1);
        tracep->declBus(c+49,"top ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+50,"top ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+61,"top ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+63,"top ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+65,"top ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+41,"top ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+45,"top ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+52,"top ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+67,"top ex0 wreg_i", false,-1);
        tracep->declBus(c+70,"top ex0 imm_i", false,-1, 19,0);
        tracep->declBus(c+72,"top ex0 offset12_i", false,-1, 11,0);
        tracep->declQuad(c+32,"top ex0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+53,"top ex0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+68,"top ex0 mem_back_wreg_i", false,-1);
        tracep->declBus(c+52,"top ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+67,"top ex0 wreg_o", false,-1);
        tracep->declQuad(c+56,"top ex0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+52,"top ex0 ex_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+67,"top ex0 ex_back_wreg_o", false,-1);
        tracep->declQuad(c+75,"top ex0 ex_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+77,"top ex0 branch_flag_o", false,-1);
        tracep->declQuad(c+78,"top ex0 pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+850,"top ex0 rs1_data", false,-1, 63,0);
        tracep->declQuad(c+852,"top ex0 rs2_data", false,-1, 63,0);
        tracep->declBus(c+854,"top ex0 wdata_addiw", false,-1, 31,0);
        tracep->declQuad(c+75,"top ex0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+1123,"top ex0 wdata_wen", false,-1);
        tracep->declQuad(c+855,"top ex0 wdata_t_add", false,-1, 63,0);
        tracep->declQuad(c+857,"top ex0 wdata_t_addi", false,-1, 63,0);
        tracep->declQuad(c+859,"top ex0 wdata_t_addiw", false,-1, 63,0);
        tracep->declQuad(c+861,"top ex0 wdata_t_auipc", false,-1, 63,0);
        tracep->declQuad(c+863,"top ex0 wdata_t_sub", false,-1, 63,0);
        tracep->declQuad(c+865,"top ex0 wdata_opcode_R", false,-1, 63,0);
        tracep->declQuad(c+861,"top ex0 wdata_opcode_U_auipc", false,-1, 63,0);
        tracep->declQuad(c+867,"top ex0 wdata_funct3_add_sub_mul", false,-1, 63,0);
        tracep->declBit(c+1123,"top ex0 branch_flag_wen", false,-1);
        tracep->declBit(c+869,"top ex0 branch_flag_t", false,-1);
        tracep->declBit(c+870,"top ex0 branch_flag_t_beq", false,-1);
        tracep->declBit(c+871,"top ex0 branch_flag_t_bge", false,-1);
        tracep->declBus(c+1109,"top ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top ex0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top ex0 reg1 clk", false,-1);
        tracep->declBit(c+1031,"top ex0 reg1 rst", false,-1);
        tracep->declQuad(c+75,"top ex0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+1123,"top ex0 reg1 wen", false,-1);
        tracep->declBus(c+1112,"top ex0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top ex0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ex0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+75,"top ex0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+61,"top ex0 mux1 key", false,-1, 6,0);
        tracep->declQuad(c+1113,"top ex0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+872,"top ex0 mux1 lut", false,-1, 141,0);
        tracep->declBus(c+1112,"top ex0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top ex0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ex0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ex0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+75,"top ex0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+61,"top ex0 mux1 i0 key", false,-1, 6,0);
        tracep->declQuad(c+1113,"top ex0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+872,"top ex0 mux1 i0 lut", false,-1, 141,0);
        tracep->declBus(c+1142,"top ex0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+877+i*3,"top ex0 mux1 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+883+i*1,"top ex0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+885+i*2,"top ex0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+889,"top ex0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+891,"top ex0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1117,"top ex0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top ex0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1126,"top ex0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ex0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+865,"top ex0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+63,"top ex0 mux2 key", false,-1, 2,0);
        tracep->declQuad(c+1113,"top ex0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+892,"top ex0 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+1126,"top ex0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1126,"top ex0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ex0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ex0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+865,"top ex0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+63,"top ex0 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+1113,"top ex0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+892,"top ex0 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+1143,"top ex0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+899+i*3,"top ex0 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+908+i*1,"top ex0 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+911+i*2,"top ex0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+917,"top ex0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+919,"top ex0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ex0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ex0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top ex0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ex0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+867,"top ex0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+65,"top ex0 mux3 key", false,-1, 6,0);
        tracep->declQuad(c+1113,"top ex0 mux3 default_out", false,-1, 63,0);
        tracep->declArray(c+920,"top ex0 mux3 lut", false,-1, 141,0);
        tracep->declBus(c+1112,"top ex0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top ex0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ex0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ex0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+867,"top ex0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+65,"top ex0 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+1113,"top ex0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+920,"top ex0 mux3 i0 lut", false,-1, 141,0);
        tracep->declBus(c+1142,"top ex0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+925+i*3,"top ex0 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+931+i*1,"top ex0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+933+i*2,"top ex0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+937,"top ex0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+939,"top ex0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1117,"top ex0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1139,"top ex0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1030,"top ex0 reg2 clk", false,-1);
        tracep->declBit(c+1031,"top ex0 reg2 rst", false,-1);
        tracep->declBus(c+869,"top ex0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+77,"top ex0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+1123,"top ex0 reg2 wen", false,-1);
        tracep->declBit(c+1030,"top ex_mem0 clk", false,-1);
        tracep->declBit(c+1031,"top ex_mem0 rst", false,-1);
        tracep->declBus(c+52,"top ex_mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+67,"top ex_mem0 wreg_i", false,-1);
        tracep->declQuad(c+56,"top ex_mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+83,"top ex_mem0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+53,"top ex_mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+68,"top ex_mem0 wreg_o", false,-1);
        tracep->declQuad(c+58,"top ex_mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+940,"top ex_mem0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+941,"top ex_mem0 rd_addr_wen", false,-1);
        tracep->declBit(c+942,"top ex_mem0 wreg_t", false,-1);
        tracep->declBit(c+941,"top ex_mem0 wreg_wen", false,-1);
        tracep->declQuad(c+943,"top ex_mem0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+941,"top ex_mem0 wdata_wen", false,-1);
        tracep->declBus(c+1133,"top ex_mem0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1136,"top ex_mem0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1030,"top ex_mem0 reg1 clk", false,-1);
        tracep->declBit(c+1031,"top ex_mem0 reg1 rst", false,-1);
        tracep->declBus(c+940,"top ex_mem0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+53,"top ex_mem0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+941,"top ex_mem0 reg1 wen", false,-1);
        tracep->declBus(c+1115,"top ex_mem0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1139,"top ex_mem0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1030,"top ex_mem0 reg2 clk", false,-1);
        tracep->declBit(c+1031,"top ex_mem0 reg2 rst", false,-1);
        tracep->declBus(c+942,"top ex_mem0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+68,"top ex_mem0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+941,"top ex_mem0 reg2 wen", false,-1);
        tracep->declBus(c+1109,"top ex_mem0 reg3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top ex_mem0 reg3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top ex_mem0 reg3 clk", false,-1);
        tracep->declBit(c+1031,"top ex_mem0 reg3 rst", false,-1);
        tracep->declQuad(c+943,"top ex_mem0 reg3 din", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_mem0 reg3 dout", false,-1, 63,0);
        tracep->declBit(c+941,"top ex_mem0 reg3 wen", false,-1);
        tracep->declBus(c+53,"top mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+68,"top mem0 wreg_i", false,-1);
        tracep->declQuad(c+58,"top mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+53,"top mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+68,"top mem0 wreg_o", false,-1);
        tracep->declQuad(c+58,"top mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+53,"top mem0 mem_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+68,"top mem0 mem_back_wreg_o", false,-1);
        tracep->declQuad(c+58,"top mem0 mem_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+1030,"top mem_wb0 clk", false,-1);
        tracep->declBit(c+1031,"top mem_wb0 rst", false,-1);
        tracep->declBus(c+53,"top mem_wb0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+68,"top mem_wb0 wreg_i", false,-1);
        tracep->declQuad(c+58,"top mem_wb0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+84,"top mem_wb0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+54,"top mem_wb0 wdata_o", false,-1, 63,0);
        tracep->declBit(c+73,"top mem_wb0 wreg_o", false,-1);
        tracep->declBus(c+74,"top mem_wb0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+74,"top mem_wb0 mem_wb_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+73,"top mem_wb0 mem_wb_back_wreg_o", false,-1);
        tracep->declQuad(c+54,"top mem_wb0 mem_wb_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+945,"top mem_wb0 wdata_wen", false,-1);
        tracep->declBit(c+945,"top mem_wb0 wreg_wen", false,-1);
        tracep->declBit(c+945,"top mem_wb0 rd_addr_wen", false,-1);
        tracep->declBus(c+1109,"top mem_wb0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1113,"top mem_wb0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1030,"top mem_wb0 reg1 clk", false,-1);
        tracep->declBit(c+1031,"top mem_wb0 reg1 rst", false,-1);
        tracep->declQuad(c+58,"top mem_wb0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+54,"top mem_wb0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+945,"top mem_wb0 reg1 wen", false,-1);
        tracep->declBus(c+1115,"top mem_wb0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1139,"top mem_wb0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1030,"top mem_wb0 reg2 clk", false,-1);
        tracep->declBit(c+1031,"top mem_wb0 reg2 rst", false,-1);
        tracep->declBus(c+68,"top mem_wb0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+73,"top mem_wb0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+945,"top mem_wb0 reg2 wen", false,-1);
        tracep->declBus(c+1133,"top mem_wb0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1136,"top mem_wb0 reg3 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1030,"top mem_wb0 reg3 clk", false,-1);
        tracep->declBit(c+1031,"top mem_wb0 reg3 rst", false,-1);
        tracep->declBus(c+53,"top mem_wb0 reg3 din", false,-1, 4,0);
        tracep->declBus(c+74,"top mem_wb0 reg3 dout", false,-1, 4,0);
        tracep->declBit(c+945,"top mem_wb0 reg3 wen", false,-1);
        tracep->declBit(c+1030,"top ctrl0 clk", false,-1);
        tracep->declBit(c+1031,"top ctrl0 rst", false,-1);
        tracep->declBit(c+1032,"top ctrl0 icache_data_valid_i", false,-1);
        tracep->declBus(c+61,"top ctrl0 ex_opcode_i", false,-1, 6,0);
        tracep->declBus(c+63,"top ctrl0 ex_funct3_i", false,-1, 2,0);
        tracep->declQuad(c+78,"top ctrl0 ex_pc_new_i", false,-1, 63,0);
        tracep->declBit(c+77,"top ctrl0 ex_branch_flag_i", false,-1);
        tracep->declBus(c+80,"top ctrl0 ctrl_signal_pc_o", false,-1, 1,0);
        tracep->declBus(c+81,"top ctrl0 ctrl_signal_if_id_o", false,-1, 1,0);
        tracep->declBus(c+82,"top ctrl0 ctrl_signal_id_ex_o", false,-1, 1,0);
        tracep->declBus(c+83,"top ctrl0 ctrl_signal_ex_mem_o", false,-1, 1,0);
        tracep->declBus(c+84,"top ctrl0 ctrl_signal_mem_wb_o", false,-1, 1,0);
        tracep->declQuad(c+85,"top ctrl0 ctrl_to_pc_new_o", false,-1, 63,0);
        tracep->declBus(c+16,"top ctrl0 FSM_next_state", false,-1, 3,0);
        tracep->declBus(c+17,"top ctrl0 FSM_next_state_1", false,-1, 3,0);
        tracep->declBus(c+946,"top ctrl0 FSM_next_state_t", false,-1, 3,0);
        tracep->declBus(c+947,"top ctrl0 FSM_pre_state_t", false,-1, 3,0);
        tracep->declBus(c+948,"top ctrl0 ctrl_signal_pc_t_1", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 ctrl_signal_if_id_t_1", false,-1, 1,0);
        tracep->declBus(c+950,"top ctrl0 ctrl_signal_id_ex_t_1", false,-1, 1,0);
        tracep->declBus(c+951,"top ctrl0 ctrl_signal_ex_mem_t_1", false,-1, 1,0);
        tracep->declBus(c+1144,"top ctrl0 ctrl_signal_mem_wb_t_1", false,-1, 1,0);
        tracep->declBus(c+1145,"top ctrl0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1146,"top ctrl0 reg1 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1030,"top ctrl0 reg1 clk", false,-1);
        tracep->declBit(c+1031,"top ctrl0 reg1 rst", false,-1);
        tracep->declBus(c+16,"top ctrl0 reg1 din", false,-1, 3,0);
        tracep->declBus(c+946,"top ctrl0 reg1 dout", false,-1, 3,0);
        tracep->declBit(c+1123,"top ctrl0 reg1 wen", false,-1);
        tracep->declBus(c+1145,"top ctrl0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1146,"top ctrl0 reg2 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1030,"top ctrl0 reg2 clk", false,-1);
        tracep->declBit(c+1031,"top ctrl0 reg2 rst", false,-1);
        tracep->declBus(c+946,"top ctrl0 reg2 din", false,-1, 3,0);
        tracep->declBus(c+947,"top ctrl0 reg2 dout", false,-1, 3,0);
        tracep->declBit(c+1123,"top ctrl0 reg2 wen", false,-1);
        tracep->declBus(c+1126,"top ctrl0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+16,"top ctrl0 mux1 out", false,-1, 3,0);
        tracep->declBus(c+947,"top ctrl0 mux1 key", false,-1, 3,0);
        tracep->declBus(c+1146,"top ctrl0 mux1 default_out", false,-1, 3,0);
        tracep->declBus(c+18,"top ctrl0 mux1 lut", false,-1, 23,0);
        tracep->declBus(c+1126,"top ctrl0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+16,"top ctrl0 mux1 i0 out", false,-1, 3,0);
        tracep->declBus(c+947,"top ctrl0 mux1 i0 key", false,-1, 3,0);
        tracep->declBus(c+1146,"top ctrl0 mux1 i0 default_out", false,-1, 3,0);
        tracep->declBus(c+18,"top ctrl0 mux1 i0 lut", false,-1, 23,0);
        tracep->declBus(c+1125,"top ctrl0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+19+i*1,"top ctrl0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+22+i*1,"top ctrl0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+25+i*1,"top ctrl0 mux1 i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+28,"top ctrl0 mux1 i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+29,"top ctrl0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ctrl0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top ctrl0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+80,"top ctrl0 mux2 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux2 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux2 default_out", false,-1, 1,0);
        tracep->declBus(c+952,"top ctrl0 mux2 lut", false,-1, 17,0);
        tracep->declBus(c+1126,"top ctrl0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+80,"top ctrl0 mux2 i0 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux2 i0 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux2 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+952,"top ctrl0 mux2 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1147,"top ctrl0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+953+i*1,"top ctrl0 mux2 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+956+i*1,"top ctrl0 mux2 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+959+i*1,"top ctrl0 mux2 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+962,"top ctrl0 mux2 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+963,"top ctrl0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ctrl0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top ctrl0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+81,"top ctrl0 mux3 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux3 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux3 default_out", false,-1, 1,0);
        tracep->declBus(c+964,"top ctrl0 mux3 lut", false,-1, 17,0);
        tracep->declBus(c+1126,"top ctrl0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+81,"top ctrl0 mux3 i0 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux3 i0 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux3 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+964,"top ctrl0 mux3 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1147,"top ctrl0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+965+i*1,"top ctrl0 mux3 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+968+i*1,"top ctrl0 mux3 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+971+i*1,"top ctrl0 mux3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+974,"top ctrl0 mux3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+975,"top ctrl0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ctrl0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top ctrl0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+82,"top ctrl0 mux4 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux4 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux4 default_out", false,-1, 1,0);
        tracep->declBus(c+976,"top ctrl0 mux4 lut", false,-1, 17,0);
        tracep->declBus(c+1126,"top ctrl0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+82,"top ctrl0 mux4 i0 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux4 i0 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux4 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+976,"top ctrl0 mux4 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1147,"top ctrl0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+977+i*1,"top ctrl0 mux4 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+980+i*1,"top ctrl0 mux4 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+983+i*1,"top ctrl0 mux4 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+986,"top ctrl0 mux4 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+987,"top ctrl0 mux4 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ctrl0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top ctrl0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+83,"top ctrl0 mux5 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux5 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux5 default_out", false,-1, 1,0);
        tracep->declBus(c+988,"top ctrl0 mux5 lut", false,-1, 17,0);
        tracep->declBus(c+1126,"top ctrl0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+83,"top ctrl0 mux5 i0 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux5 i0 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux5 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+988,"top ctrl0 mux5 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1147,"top ctrl0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+989+i*1,"top ctrl0 mux5 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+992+i*1,"top ctrl0 mux5 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+995+i*1,"top ctrl0 mux5 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+998,"top ctrl0 mux5 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+999,"top ctrl0 mux5 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ctrl0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top ctrl0 mux6 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux6 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux6 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+84,"top ctrl0 mux6 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux6 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux6 default_out", false,-1, 1,0);
        tracep->declBus(c+1148,"top ctrl0 mux6 lut", false,-1, 17,0);
        tracep->declBus(c+1126,"top ctrl0 mux6 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux6 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux6 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux6 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+84,"top ctrl0 mux6 i0 out", false,-1, 1,0);
        tracep->declBus(c+947,"top ctrl0 mux6 i0 key", false,-1, 3,0);
        tracep->declBus(c+1144,"top ctrl0 mux6 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1148,"top ctrl0 mux6 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1147,"top ctrl0 mux6 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top ctrl0 mux6 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"top ctrl0 mux6 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+13+i*1,"top ctrl0 mux6 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1000,"top ctrl0 mux6 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1001,"top ctrl0 mux6 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ctrl0 mux6 i0 i", false,-1, 31,0);
        tracep->declBus(c+1126,"top ctrl0 mux7 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux7 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ctrl0 mux7 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+85,"top ctrl0 mux7 out", false,-1, 63,0);
        tracep->declBus(c+947,"top ctrl0 mux7 key", false,-1, 3,0);
        tracep->declQuad(c+1110,"top ctrl0 mux7 default_out", false,-1, 63,0);
        tracep->declArray(c+1002,"top ctrl0 mux7 lut", false,-1, 203,0);
        tracep->declBus(c+1126,"top ctrl0 mux7 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"top ctrl0 mux7 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top ctrl0 mux7 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux7 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+85,"top ctrl0 mux7 i0 out", false,-1, 63,0);
        tracep->declBus(c+947,"top ctrl0 mux7 i0 key", false,-1, 3,0);
        tracep->declQuad(c+1110,"top ctrl0 mux7 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1002,"top ctrl0 mux7 i0 lut", false,-1, 203,0);
        tracep->declBus(c+1149,"top ctrl0 mux7 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1009+i*3,"top ctrl0 mux7 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1018+i*1,"top ctrl0 mux7 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1021+i*2,"top ctrl0 mux7 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1027,"top ctrl0 mux7 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1029,"top ctrl0 mux7 i0 hit", false,-1);
        tracep->declBus(c+1129,"top ctrl0 mux7 i0 i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[1]));
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1),4);
        tracep->fullIData(oldp+18,((0x1220U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1) 
                                               << 0x10U))),24);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__if_id_to_id_pc),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
        tracep->fullIData(oldp+34,(vlSelf->top__DOT__if_id_to_id_inst),32);
        tracep->fullQData(oldp+35,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+37,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+39,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0xfU)))
                                     ? 0ULL : ((((0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                : (
                                                   (((0x1fU 
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
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
        tracep->fullQData(oldp+43,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0x14U)))
                                     ? 0ULL : ((((0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0x14U)) 
                                                 == (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)) 
                                                & (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg))
                                                ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                : (
                                                   (((0x1fU 
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
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
        tracep->fullCData(oldp+47,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+48,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
        tracep->fullCData(oldp+51,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ex_to_ex_mem_wdata),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
        tracep->fullCData(oldp+60,((0x7fU & vlSelf->top__DOT__if_id_to_id_inst)),7);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
        tracep->fullCData(oldp+62,((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
        tracep->fullCData(oldp+64,((vlSelf->top__DOT__if_id_to_id_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__id_to_id_ex_wreg));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__id_ex_to_ex_wreg));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
        tracep->fullIData(oldp+69,(vlSelf->top__DOT__id_to_id_ex_imm),20);
        tracep->fullIData(oldp+70,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
        tracep->fullSData(oldp+71,(vlSelf->top__DOT__id_to_id_ex_offset12),12);
        tracep->fullSData(oldp+72,(vlSelf->top__DOT__id_ex_to_ex_offset12),12);
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__mem_wb_to_regfile_we));
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__ex_branch_flag));
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__ctrl_to_pc_pc_new),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__pc_to_if_id_pc),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
        tracep->fullBit(oldp+91,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
        tracep->fullWData(oldp+94,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
        tracep->fullWData(oldp+99,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+102,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+105,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+106,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+114,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux2____pinNumber4),132);
        tracep->fullWData(oldp+119,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+122,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+134,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+137,((vlSelf->top__DOT__if_id_to_id_inst 
                                     >> 0x14U)),20);
        tracep->fullWData(oldp+138,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),81);
        tracep->fullIData(oldp+141,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
        tracep->fullIData(oldp+142,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
        tracep->fullIData(oldp+143,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
        tracep->fullIData(oldp+147,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
        tracep->fullIData(oldp+148,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
        tracep->fullIData(oldp+149,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
        tracep->fullIData(oldp+150,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+152,((vlSelf->top__DOT__if_id_to_id_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux3____pinNumber4),38);
        tracep->fullIData(oldp+155,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[0]),19);
        tracep->fullIData(oldp+156,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[1]),19);
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullSData(oldp+159,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[0]),12);
        tracep->fullSData(oldp+160,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[1]),12);
        tracep->fullSData(oldp+161,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__lut_out),12);
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+163,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
        tracep->fullBit(oldp+289,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+290,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+291,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+292,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+293,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+294,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+295,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+296,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+297,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+298,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+299,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+300,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+301,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+302,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+303,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+304,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+305,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+306,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+307,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+308,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+309,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+310,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+311,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+312,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+313,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+314,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+315,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+316,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+317,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+318,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+319,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
        tracep->fullWData(oldp+324,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
        tracep->fullWData(oldp+391,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+394,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+397,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+400,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+403,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+406,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+409,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+412,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+415,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+418,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+421,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+424,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+427,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+430,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+433,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+436,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+439,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+442,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+445,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+448,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+451,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+454,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+457,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+460,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+463,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+466,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+469,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+472,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+475,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+478,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+481,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+484,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+485,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+486,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+487,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+488,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+489,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+490,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+491,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+492,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+493,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+494,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+496,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+497,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+498,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+499,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+500,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+501,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+502,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+503,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+504,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+505,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+506,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+507,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+508,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+509,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+510,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+511,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+512,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+513,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+514,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+569,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+571,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+573,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+575,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+580,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
        tracep->fullWData(oldp+647,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+650,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+653,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+656,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+659,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+662,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+665,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+668,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+671,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+674,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+677,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+680,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+683,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+686,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+689,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+692,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+695,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+698,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+701,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+704,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+707,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+710,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+713,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+716,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+719,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+722,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+725,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+728,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+731,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+734,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+737,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+740,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+742,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+743,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+744,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+745,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+746,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+747,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+748,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+749,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+750,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+751,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+752,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+753,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+754,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+755,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+756,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+757,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+758,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+759,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+760,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+761,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+762,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+763,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+764,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+765,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+766,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+767,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+768,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+769,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+770,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+779,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+781,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+783,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+785,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+789,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+791,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+793,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+795,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+797,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+799,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+801,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+803,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+805,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+807,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+809,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+811,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+813,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+815,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+819,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+821,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+823,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+825,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+827,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+829,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+831,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+833,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+836,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xfU))
                                               : 0U))),5);
        tracep->fullBit(oldp+837,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
        tracep->fullCData(oldp+838,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0x14U))
                                               : 0U))),5);
        tracep->fullCData(oldp+839,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0x13U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst)
                                                  : 0U))),7);
        tracep->fullCData(oldp+840,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (7U 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xcU))
                                               : 0U))),3);
        tracep->fullCData(oldp+841,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 0x19U)
                                               : 0U))),7);
        tracep->fullQData(oldp+842,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0ULL : ((0U 
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
        tracep->fullQData(oldp+844,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0ULL : ((0U 
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
        tracep->fullCData(oldp+846,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->fullBit(oldp+847,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
        tracep->fullIData(oldp+848,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? vlSelf->top__DOT__id_to_id_ex_imm
                                               : 0U))),20);
        tracep->fullSData(oldp+849,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (IData)(vlSelf->top__DOT__id_to_id_ex_offset12)
                                               : 0U))),12);
        tracep->fullQData(oldp+850,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
        tracep->fullQData(oldp+852,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
        tracep->fullIData(oldp+854,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
        tracep->fullQData(oldp+855,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+857,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
        tracep->fullQData(oldp+859,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
        tracep->fullQData(oldp+861,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        >> 0x13U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 0xcU)))))),64);
        tracep->fullQData(oldp+863,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+865,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
        tracep->fullQData(oldp+867,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
        tracep->fullBit(oldp+869,(((((((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                       & (0U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                      & (vlSelf->top__DOT__ex0__DOT__rs1_data 
                                         == vlSelf->top__DOT__ex0__DOT__rs2_data)) 
                                     | (((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                         & (5U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                        & VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data))) 
                                    | (0x67U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode))) 
                                   | (0x6fU == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)))));
        tracep->fullBit(oldp+870,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                   == vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullBit(oldp+871,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullWData(oldp+872,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux1____pinNumber4),142);
        tracep->fullWData(oldp+877,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+880,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+883,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+884,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+885,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+887,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+889,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+891,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+892,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux2____pinNumber4),201);
        tracep->fullWData(oldp+899,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+902,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+905,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+908,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+909,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+910,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+911,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+913,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+915,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+917,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+919,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+920,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux3____pinNumber4),142);
        tracep->fullWData(oldp+925,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+928,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+931,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+932,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+933,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+935,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+937,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+940,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                               ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                               : 0U))),5);
        tracep->fullBit(oldp+941,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
        tracep->fullBit(oldp+942,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
        tracep->fullQData(oldp+943,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                 ? vlSelf->top__DOT__ex_to_ex_mem_wdata
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+945,((0U == (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
        tracep->fullCData(oldp+946,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
        tracep->fullCData(oldp+947,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
        tracep->fullCData(oldp+948,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1),2);
        tracep->fullCData(oldp+949,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1),2);
        tracep->fullCData(oldp+950,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1),2);
        tracep->fullCData(oldp+951,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_ex_mem_t_1),2);
        tracep->fullIData(oldp+952,((0x1c8U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1) 
                                               << 0xcU))),18);
        tracep->fullCData(oldp+953,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+954,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+955,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+956,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+957,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+958,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+959,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+960,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+961,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+962,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+963,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+964,((0x18aU | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1) 
                                               << 0xcU))),18);
        tracep->fullCData(oldp+965,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+966,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+967,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+968,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+969,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+970,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+971,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+972,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+973,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+974,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+975,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+976,((0x188U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1) 
                                               << 0xcU))),18);
        tracep->fullCData(oldp+977,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+978,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+979,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+980,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+981,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+982,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+983,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+984,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+985,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+986,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+987,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+988,((0x108U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_ex_mem_t_1) 
                                               << 0xcU))),18);
        tracep->fullCData(oldp+989,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+990,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+991,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+992,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+993,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+994,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+995,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+996,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+997,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+998,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+999,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1000,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1001,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1002,(vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux7____pinNumber4),204);
        tracep->fullWData(oldp+1009,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1012,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+1015,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+1018,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1019,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1020,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+1021,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1023,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1025,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1027,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1029,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1030,(vlSelf->clk));
        tracep->fullBit(oldp+1031,(vlSelf->rst));
        tracep->fullBit(oldp+1032,(vlSelf->icache_data_valid_i));
        tracep->fullIData(oldp+1033,(vlSelf->icache_data_i),32);
        tracep->fullQData(oldp+1034,(vlSelf->icache_addr_o),64);
        tracep->fullBit(oldp+1036,(vlSelf->icache_req_valid_o));
        tracep->fullBit(oldp+1037,(vlSelf->icache_data_wen_o));
        tracep->fullQData(oldp+1038,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->fullQData(oldp+1040,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->fullQData(oldp+1042,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->fullQData(oldp+1044,(vlSelf->diff_regs_o[0]),64);
        tracep->fullQData(oldp+1046,(vlSelf->diff_regs_o[1]),64);
        tracep->fullQData(oldp+1048,(vlSelf->diff_regs_o[2]),64);
        tracep->fullQData(oldp+1050,(vlSelf->diff_regs_o[3]),64);
        tracep->fullQData(oldp+1052,(vlSelf->diff_regs_o[4]),64);
        tracep->fullQData(oldp+1054,(vlSelf->diff_regs_o[5]),64);
        tracep->fullQData(oldp+1056,(vlSelf->diff_regs_o[6]),64);
        tracep->fullQData(oldp+1058,(vlSelf->diff_regs_o[7]),64);
        tracep->fullQData(oldp+1060,(vlSelf->diff_regs_o[8]),64);
        tracep->fullQData(oldp+1062,(vlSelf->diff_regs_o[9]),64);
        tracep->fullQData(oldp+1064,(vlSelf->diff_regs_o[10]),64);
        tracep->fullQData(oldp+1066,(vlSelf->diff_regs_o[11]),64);
        tracep->fullQData(oldp+1068,(vlSelf->diff_regs_o[12]),64);
        tracep->fullQData(oldp+1070,(vlSelf->diff_regs_o[13]),64);
        tracep->fullQData(oldp+1072,(vlSelf->diff_regs_o[14]),64);
        tracep->fullQData(oldp+1074,(vlSelf->diff_regs_o[15]),64);
        tracep->fullQData(oldp+1076,(vlSelf->diff_regs_o[16]),64);
        tracep->fullQData(oldp+1078,(vlSelf->diff_regs_o[17]),64);
        tracep->fullQData(oldp+1080,(vlSelf->diff_regs_o[18]),64);
        tracep->fullQData(oldp+1082,(vlSelf->diff_regs_o[19]),64);
        tracep->fullQData(oldp+1084,(vlSelf->diff_regs_o[20]),64);
        tracep->fullQData(oldp+1086,(vlSelf->diff_regs_o[21]),64);
        tracep->fullQData(oldp+1088,(vlSelf->diff_regs_o[22]),64);
        tracep->fullQData(oldp+1090,(vlSelf->diff_regs_o[23]),64);
        tracep->fullQData(oldp+1092,(vlSelf->diff_regs_o[24]),64);
        tracep->fullQData(oldp+1094,(vlSelf->diff_regs_o[25]),64);
        tracep->fullQData(oldp+1096,(vlSelf->diff_regs_o[26]),64);
        tracep->fullQData(oldp+1098,(vlSelf->diff_regs_o[27]),64);
        tracep->fullQData(oldp+1100,(vlSelf->diff_regs_o[28]),64);
        tracep->fullQData(oldp+1102,(vlSelf->diff_regs_o[29]),64);
        tracep->fullQData(oldp+1104,(vlSelf->diff_regs_o[30]),64);
        tracep->fullQData(oldp+1106,(vlSelf->diff_regs_o[31]),64);
        tracep->fullIData(oldp+1108,(((0U == (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))
                                       ? vlSelf->icache_data_i
                                       : 0x13U)),32);
        tracep->fullIData(oldp+1109,(0x40U),32);
        tracep->fullQData(oldp+1110,(0x100000ULL),64);
        tracep->fullIData(oldp+1112,(2U),32);
        tracep->fullQData(oldp+1113,(0ULL),64);
        tracep->fullIData(oldp+1115,(1U),32);
        tracep->fullIData(oldp+1116,(0x42U),32);
        tracep->fullIData(oldp+1117,(2U),32);
        tracep->fullQData(oldp+1118,(0xffffcULL),64);
        tracep->fullIData(oldp+1120,(0x20U),32);
        tracep->fullIData(oldp+1121,(0U),32);
        tracep->fullIData(oldp+1122,(7U),32);
        tracep->fullBit(oldp+1123,(1U));
        tracep->fullSData(oldp+1124,(0xc647U),16);
        tracep->fullIData(oldp+1125,(8U),32);
        tracep->fullIData(oldp+1126,(3U),32);
        tracep->fullIData(oldp+1127,(0x14U),32);
        tracep->fullIData(oldp+1128,(0x1bU),32);
        tracep->fullIData(oldp+1129,(3U),32);
        tracep->fullIData(oldp+1130,(0xcU),32);
        tracep->fullIData(oldp+1131,(0x13U),32);
        tracep->fullIData(oldp+1132,(0x1fU),32);
        tracep->fullIData(oldp+1133,(5U),32);
        tracep->fullIData(oldp+1134,(0x45U),32);
        tracep->fullIData(oldp+1135,(0x1fU),32);
        tracep->fullCData(oldp+1136,(0U),5);
        tracep->fullCData(oldp+1137,(0U),7);
        tracep->fullCData(oldp+1138,(0U),3);
        tracep->fullBit(oldp+1139,(0U));
        tracep->fullIData(oldp+1140,(0U),20);
        tracep->fullSData(oldp+1141,(0U),12);
        tracep->fullIData(oldp+1142,(0x47U),32);
        tracep->fullIData(oldp+1143,(0x43U),32);
        tracep->fullCData(oldp+1144,(0U),2);
        tracep->fullIData(oldp+1145,(4U),32);
        tracep->fullCData(oldp+1146,(0U),4);
        tracep->fullIData(oldp+1147,(6U),32);
        tracep->fullIData(oldp+1148,(0x108U),18);
        tracep->fullIData(oldp+1149,(0x44U),32);
    }
}
