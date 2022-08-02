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
        tracep->declBit(c+1020,"clk", false,-1);
        tracep->declBit(c+1021,"rst", false,-1);
        tracep->declBit(c+1022,"icache_data_valid_i", false,-1);
        tracep->declBus(c+1023,"icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1024,"icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1026,"icache_req_valid_o", false,-1);
        tracep->declBit(c+1027,"icache_data_wen_o", false,-1);
        tracep->declQuad(c+1028,"diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1030,"diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1032,"diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1034+i*2,"diff_regs_o", true,(i+0), 63,0);}}
        tracep->declBit(c+1020,"top clk", false,-1);
        tracep->declBit(c+1021,"top rst", false,-1);
        tracep->declBit(c+1022,"top icache_data_valid_i", false,-1);
        tracep->declBus(c+1023,"top icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1024,"top icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1026,"top icache_req_valid_o", false,-1);
        tracep->declBit(c+1027,"top icache_data_wen_o", false,-1);
        tracep->declQuad(c+1028,"top diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1030,"top diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1032,"top diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1034+i*2,"top diff_regs_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+61,"top if_id_to_id_pc", false,-1, 63,0);
        tracep->declQuad(c+61,"top id_to_id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+63,"top id_ex_to_ex_pc", false,-1, 63,0);
        tracep->declBus(c+65,"top if_id_to_id_inst", false,-1, 31,0);
        tracep->declQuad(c+66,"top regfile_to_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+68,"top regfile_to_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+70,"top id_to_id_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+72,"top id_ex_to_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+74,"top id_to_id_ex_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+76,"top id_ex_to_ex_rs2_data", false,-1, 63,0);
        tracep->declBus(c+78,"top id_to_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+79,"top id_to_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+80,"top id_ex_to_ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+81,"top id_ex_to_ex_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+82,"top id_to_id_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+83,"top id_ex_to_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+83,"top ex_to_ex_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+84,"top ex_mem_to_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+84,"top mem_to_mem_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+85,"top mem_wb_to_regfile_wdata", false,-1, 63,0);
        tracep->declQuad(c+87,"top ex_to_ex_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+89,"top ex_mem_to_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+89,"top mem_to_mem_wb_wdata", false,-1, 63,0);
        tracep->declBus(c+91,"top id_to_id_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+92,"top id_ex_to_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+93,"top id_to_id_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+94,"top id_ex_to_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+95,"top id_to_id_ex_funct7", false,-1, 6,0);
        tracep->declBus(c+96,"top id_ex_to_ex_funct7", false,-1, 6,0);
        tracep->declBit(c+97,"top id_to_id_ex_wreg", false,-1);
        tracep->declBit(c+98,"top id_ex_to_ex_wreg", false,-1);
        tracep->declBit(c+98,"top ex_to_ex_mem_wreg", false,-1);
        tracep->declBit(c+99,"top ex_mem_to_mem_wreg", false,-1);
        tracep->declBit(c+99,"top mem_to_mem_wb_wreg", false,-1);
        tracep->declBus(c+100,"top id_to_id_ex_imm", false,-1, 19,0);
        tracep->declBus(c+101,"top id_ex_to_ex_imm", false,-1, 19,0);
        tracep->declBus(c+102,"top id_to_id_ex_offset12", false,-1, 11,0);
        tracep->declBus(c+103,"top id_ex_to_ex_offset12", false,-1, 11,0);
        tracep->declBit(c+104,"top mem_wb_to_regfile_we", false,-1);
        tracep->declBus(c+105,"top mem_wb_to_regfile_waddr", false,-1, 4,0);
        tracep->declBus(c+83,"top ex_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+98,"top ex_to_id_back_wreg", false,-1);
        tracep->declQuad(c+106,"top ex_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+84,"top mem_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"top mem_to_id_back_wreg", false,-1);
        tracep->declQuad(c+89,"top mem_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+105,"top mem_wb_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+104,"top mem_wb_to_id_back_wreg", false,-1);
        tracep->declQuad(c+85,"top mem_wb_to_id_back_wdata", false,-1, 63,0);
        tracep->declBit(c+108,"top ex_branch_flag", false,-1);
        tracep->declQuad(c+109,"top ex_to_ctrl_pc_new", false,-1, 63,0);
        tracep->declBus(c+111,"top ctrl_to_pc_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+112,"top ctrl_to_if_id_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+113,"top ctrl_to_id_ex_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+114,"top ctrl_to_ex_mem_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+115,"top ctrl_to_mem_wb_ctrl_signal", false,-1, 1,0);
        tracep->declQuad(c+116,"top ctrl_to_pc_pc_new", false,-1, 63,0);
        tracep->declQuad(c+118,"top pc_to_if_id_pc", false,-1, 63,0);
        tracep->declBit(c+1020,"top pc0 clk", false,-1);
        tracep->declBit(c+1021,"top pc0 rst", false,-1);
        tracep->declBus(c+111,"top pc0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+116,"top pc0 pc_new_i", false,-1, 63,0);
        tracep->declQuad(c+1024,"top pc0 pc_ram_o", false,-1, 63,0);
        tracep->declQuad(c+118,"top pc0 pc_pipeline_o", false,-1, 63,0);
        tracep->declBit(c+1027,"top pc0 icache_data_wen_o", false,-1);
        tracep->declBit(c+1026,"top pc0 icache_req_valid_o", false,-1);
        tracep->declQuad(c+120,"top pc0 pc_ram_t", false,-1, 63,0);
        tracep->declBit(c+122,"top pc0 pc_ram_wen", false,-1);
        tracep->declQuad(c+123,"top pc0 pc_pipeline_t", false,-1, 63,0);
        tracep->declBit(c+122,"top pc0 pc_pipeline_wen", false,-1);
        tracep->declBus(c+1098,"top pc0 pc_ram WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1099,"top pc0 pc_ram RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top pc0 pc_ram clk", false,-1);
        tracep->declBit(c+1021,"top pc0 pc_ram rst", false,-1);
        tracep->declQuad(c+120,"top pc0 pc_ram din", false,-1, 63,0);
        tracep->declQuad(c+1024,"top pc0 pc_ram dout", false,-1, 63,0);
        tracep->declBit(c+122,"top pc0 pc_ram wen", false,-1);
        tracep->declBus(c+1101,"top pc0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1101,"top pc0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top pc0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+120,"top pc0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+111,"top pc0 mux1 key", false,-1, 1,0);
        tracep->declQuad(c+1102,"top pc0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+125,"top pc0 mux1 lut", false,-1, 131,0);
        tracep->declBus(c+1101,"top pc0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1101,"top pc0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top pc0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top pc0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+120,"top pc0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+111,"top pc0 mux1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1102,"top pc0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+125,"top pc0 mux1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1105,"top pc0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+130+i*3,"top pc0 mux1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+136+i*1,"top pc0 mux1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+138+i*2,"top pc0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+142,"top pc0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+144,"top pc0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1106,"top pc0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1098,"top pc0 pc_pipeline WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1107,"top pc0 pc_pipeline RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top pc0 pc_pipeline clk", false,-1);
        tracep->declBit(c+1021,"top pc0 pc_pipeline rst", false,-1);
        tracep->declQuad(c+123,"top pc0 pc_pipeline din", false,-1, 63,0);
        tracep->declQuad(c+118,"top pc0 pc_pipeline dout", false,-1, 63,0);
        tracep->declBit(c+122,"top pc0 pc_pipeline wen", false,-1);
        tracep->declBus(c+1101,"top pc0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1101,"top pc0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top pc0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+123,"top pc0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+111,"top pc0 mux2 key", false,-1, 1,0);
        tracep->declQuad(c+1102,"top pc0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+145,"top pc0 mux2 lut", false,-1, 131,0);
        tracep->declBus(c+1101,"top pc0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1101,"top pc0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top pc0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top pc0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+123,"top pc0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+111,"top pc0 mux2 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1102,"top pc0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+145,"top pc0 mux2 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1105,"top pc0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+150+i*3,"top pc0 mux2 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+156+i*1,"top pc0 mux2 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+158+i*2,"top pc0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+162,"top pc0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+164,"top pc0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1106,"top pc0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1020,"top if_id0 clk", false,-1);
        tracep->declBit(c+1021,"top if_id0 rst", false,-1);
        tracep->declBus(c+1023,"top if_id0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+112,"top if_id0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+118,"top if_id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+65,"top if_id0 if_inst_o", false,-1, 31,0);
        tracep->declQuad(c+61,"top if_id0 pc_o", false,-1, 63,0);
        tracep->declBit(c+165,"top if_id0 pc_wen", false,-1);
        tracep->declBit(c+165,"top if_id0 if_inst_wen", false,-1);
        tracep->declBus(c+1098,"top if_id0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top if_id0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top if_id0 reg1 clk", false,-1);
        tracep->declBit(c+1021,"top if_id0 reg1 rst", false,-1);
        tracep->declQuad(c+118,"top if_id0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+61,"top if_id0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+165,"top if_id0 reg1 wen", false,-1);
        tracep->declBus(c+1109,"top if_id0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1110,"top if_id0 reg2 RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1020,"top if_id0 reg2 clk", false,-1);
        tracep->declBit(c+1021,"top if_id0 reg2 rst", false,-1);
        tracep->declBus(c+1023,"top if_id0 reg2 din", false,-1, 31,0);
        tracep->declBus(c+65,"top if_id0 reg2 dout", false,-1, 31,0);
        tracep->declBit(c+165,"top if_id0 reg2 wen", false,-1);
        tracep->declBus(c+65,"top id0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+66,"top id0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+68,"top id0 rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+106,"top id0 ex_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+83,"top id0 ex_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+98,"top id0 ex_back_wreg_i", false,-1);
        tracep->declQuad(c+89,"top id0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+84,"top id0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+99,"top id0 mem_back_wreg_i", false,-1);
        tracep->declQuad(c+85,"top id0 mem_wb_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+105,"top id0 mem_wb_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+104,"top id0 mem_wb_back_wreg_i", false,-1);
        tracep->declQuad(c+61,"top id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+78,"top id0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+79,"top id0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+91,"top id0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+93,"top id0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+95,"top id0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+70,"top id0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+74,"top id0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+82,"top id0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+97,"top id0 wreg_o", false,-1);
        tracep->declBus(c+100,"top id0 imm_o", false,-1, 19,0);
        tracep->declBus(c+102,"top id0 offset12_o", false,-1, 11,0);
        tracep->declQuad(c+61,"top id0 pc_o", false,-1, 63,0);
        tracep->declBus(c+1101,"top id0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top id0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top id0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+97,"top id0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+91,"top id0 mux1 key", false,-1, 6,0);
        tracep->declBus(c+1112,"top id0 mux1 default_out", false,-1, 0,0);
        tracep->declBus(c+1113,"top id0 mux1 lut", false,-1, 15,0);
        tracep->declBus(c+1101,"top id0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top id0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top id0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top id0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+97,"top id0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+91,"top id0 mux1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1112,"top id0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1113,"top id0 mux1 i0 lut", false,-1, 15,0);
        tracep->declBus(c+1114,"top id0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1+i*1,"top id0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+3+i*1,"top id0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"top id0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+166,"top id0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+167,"top id0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1106,"top id0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top id0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top id0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1116,"top id0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+100,"top id0 mux2 out", false,-1, 19,0);
        tracep->declBus(c+91,"top id0 mux2 key", false,-1, 6,0);
        tracep->declBus(c+168,"top id0 mux2 default_out", false,-1, 19,0);
        tracep->declArray(c+169,"top id0 mux2 lut", false,-1, 80,0);
        tracep->declBus(c+1115,"top id0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top id0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1116,"top id0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top id0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+100,"top id0 mux2 i0 out", false,-1, 19,0);
        tracep->declBus(c+91,"top id0 mux2 i0 key", false,-1, 6,0);
        tracep->declBus(c+168,"top id0 mux2 i0 default_out", false,-1, 19,0);
        tracep->declArray(c+169,"top id0 mux2 i0 lut", false,-1, 80,0);
        tracep->declBus(c+1117,"top id0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+172+i*1,"top id0 mux2 i0 pair_list", true,(i+0), 26,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+175+i*1,"top id0 mux2 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+178+i*1,"top id0 mux2 i0 data_list", true,(i+0), 19,0);}}
        tracep->declBus(c+181,"top id0 mux2 i0 lut_out", false,-1, 19,0);
        tracep->declBit(c+182,"top id0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1118,"top id0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1101,"top id0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top id0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1119,"top id0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+102,"top id0 mux3 out", false,-1, 11,0);
        tracep->declBus(c+91,"top id0 mux3 key", false,-1, 6,0);
        tracep->declBus(c+183,"top id0 mux3 default_out", false,-1, 11,0);
        tracep->declQuad(c+184,"top id0 mux3 lut", false,-1, 37,0);
        tracep->declBus(c+1101,"top id0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top id0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1119,"top id0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top id0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+102,"top id0 mux3 i0 out", false,-1, 11,0);
        tracep->declBus(c+91,"top id0 mux3 i0 key", false,-1, 6,0);
        tracep->declBus(c+183,"top id0 mux3 i0 default_out", false,-1, 11,0);
        tracep->declQuad(c+184,"top id0 mux3 i0 lut", false,-1, 37,0);
        tracep->declBus(c+1120,"top id0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+186+i*1,"top id0 mux3 i0 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+188+i*1,"top id0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+190+i*1,"top id0 mux3 i0 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+192,"top id0 mux3 i0 lut_out", false,-1, 11,0);
        tracep->declBit(c+193,"top id0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1106,"top id0 mux3 i0 i", false,-1, 31,0);
        tracep->declBit(c+1020,"top regfile0 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 rst", false,-1);
        tracep->declBit(c+104,"top regfile0 we_i", false,-1);
        tracep->declBus(c+105,"top regfile0 waddr_i", false,-1, 4,0);
        tracep->declQuad(c+85,"top regfile0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+78,"top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declQuad(c+66,"top regfile0 rdata1_o", false,-1, 63,0);
        tracep->declBus(c+79,"top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declQuad(c+68,"top regfile0 rdata2_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+194+i*2,"top regfile0 diff_reg_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+258,"top regfile0 out_x1", false,-1, 63,0);
        tracep->declQuad(c+260,"top regfile0 out_x2", false,-1, 63,0);
        tracep->declQuad(c+262,"top regfile0 out_x3", false,-1, 63,0);
        tracep->declQuad(c+264,"top regfile0 out_x4", false,-1, 63,0);
        tracep->declQuad(c+266,"top regfile0 out_x5", false,-1, 63,0);
        tracep->declQuad(c+268,"top regfile0 out_x6", false,-1, 63,0);
        tracep->declQuad(c+270,"top regfile0 out_x7", false,-1, 63,0);
        tracep->declQuad(c+272,"top regfile0 out_x8", false,-1, 63,0);
        tracep->declQuad(c+274,"top regfile0 out_x9", false,-1, 63,0);
        tracep->declQuad(c+276,"top regfile0 out_x10", false,-1, 63,0);
        tracep->declQuad(c+278,"top regfile0 out_x11", false,-1, 63,0);
        tracep->declQuad(c+280,"top regfile0 out_x12", false,-1, 63,0);
        tracep->declQuad(c+282,"top regfile0 out_x13", false,-1, 63,0);
        tracep->declQuad(c+284,"top regfile0 out_x14", false,-1, 63,0);
        tracep->declQuad(c+286,"top regfile0 out_x15", false,-1, 63,0);
        tracep->declQuad(c+288,"top regfile0 out_x16", false,-1, 63,0);
        tracep->declQuad(c+290,"top regfile0 out_x17", false,-1, 63,0);
        tracep->declQuad(c+292,"top regfile0 out_x18", false,-1, 63,0);
        tracep->declQuad(c+294,"top regfile0 out_x19", false,-1, 63,0);
        tracep->declQuad(c+296,"top regfile0 out_x20", false,-1, 63,0);
        tracep->declQuad(c+298,"top regfile0 out_x21", false,-1, 63,0);
        tracep->declQuad(c+300,"top regfile0 out_x22", false,-1, 63,0);
        tracep->declQuad(c+302,"top regfile0 out_x23", false,-1, 63,0);
        tracep->declQuad(c+304,"top regfile0 out_x24", false,-1, 63,0);
        tracep->declQuad(c+306,"top regfile0 out_x25", false,-1, 63,0);
        tracep->declQuad(c+308,"top regfile0 out_x26", false,-1, 63,0);
        tracep->declQuad(c+310,"top regfile0 out_x27", false,-1, 63,0);
        tracep->declQuad(c+312,"top regfile0 out_x28", false,-1, 63,0);
        tracep->declQuad(c+314,"top regfile0 out_x29", false,-1, 63,0);
        tracep->declQuad(c+316,"top regfile0 out_x30", false,-1, 63,0);
        tracep->declQuad(c+318,"top regfile0 out_x31", false,-1, 63,0);
        tracep->declBit(c+320,"top regfile0 wen_x1", false,-1);
        tracep->declBit(c+321,"top regfile0 wen_x2", false,-1);
        tracep->declBit(c+322,"top regfile0 wen_x3", false,-1);
        tracep->declBit(c+323,"top regfile0 wen_x4", false,-1);
        tracep->declBit(c+324,"top regfile0 wen_x5", false,-1);
        tracep->declBit(c+325,"top regfile0 wen_x6", false,-1);
        tracep->declBit(c+326,"top regfile0 wen_x7", false,-1);
        tracep->declBit(c+327,"top regfile0 wen_x8", false,-1);
        tracep->declBit(c+328,"top regfile0 wen_x9", false,-1);
        tracep->declBit(c+329,"top regfile0 wen_x10", false,-1);
        tracep->declBit(c+330,"top regfile0 wen_x11", false,-1);
        tracep->declBit(c+331,"top regfile0 wen_x12", false,-1);
        tracep->declBit(c+332,"top regfile0 wen_x13", false,-1);
        tracep->declBit(c+333,"top regfile0 wen_x14", false,-1);
        tracep->declBit(c+334,"top regfile0 wen_x15", false,-1);
        tracep->declBit(c+335,"top regfile0 wen_x16", false,-1);
        tracep->declBit(c+336,"top regfile0 wen_x17", false,-1);
        tracep->declBit(c+337,"top regfile0 wen_x18", false,-1);
        tracep->declBit(c+338,"top regfile0 wen_x19", false,-1);
        tracep->declBit(c+339,"top regfile0 wen_x20", false,-1);
        tracep->declBit(c+340,"top regfile0 wen_x21", false,-1);
        tracep->declBit(c+341,"top regfile0 wen_x22", false,-1);
        tracep->declBit(c+342,"top regfile0 wen_x23", false,-1);
        tracep->declBit(c+343,"top regfile0 wen_x24", false,-1);
        tracep->declBit(c+344,"top regfile0 wen_x25", false,-1);
        tracep->declBit(c+345,"top regfile0 wen_x26", false,-1);
        tracep->declBit(c+346,"top regfile0 wen_x27", false,-1);
        tracep->declBit(c+347,"top regfile0 wen_x28", false,-1);
        tracep->declBit(c+348,"top regfile0 wen_x29", false,-1);
        tracep->declBit(c+349,"top regfile0 wen_x30", false,-1);
        tracep->declBit(c+350,"top regfile0 wen_x31", false,-1);
        tracep->declQuad(c+351,"top regfile0 rdata1_t", false,-1, 63,0);
        tracep->declQuad(c+353,"top regfile0 rdata2_t", false,-1, 63,0);
        tracep->declBus(c+1098,"top regfile0 x1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x1 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x1 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x1 din", false,-1, 63,0);
        tracep->declQuad(c+258,"top regfile0 x1 dout", false,-1, 63,0);
        tracep->declBit(c+320,"top regfile0 x1 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x2 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x2 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x2 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x2 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x2 din", false,-1, 63,0);
        tracep->declQuad(c+260,"top regfile0 x2 dout", false,-1, 63,0);
        tracep->declBit(c+321,"top regfile0 x2 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x3 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x3 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x3 din", false,-1, 63,0);
        tracep->declQuad(c+262,"top regfile0 x3 dout", false,-1, 63,0);
        tracep->declBit(c+322,"top regfile0 x3 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x4 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x4 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x4 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x4 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x4 din", false,-1, 63,0);
        tracep->declQuad(c+264,"top regfile0 x4 dout", false,-1, 63,0);
        tracep->declBit(c+323,"top regfile0 x4 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x5 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x5 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x5 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x5 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x5 din", false,-1, 63,0);
        tracep->declQuad(c+266,"top regfile0 x5 dout", false,-1, 63,0);
        tracep->declBit(c+324,"top regfile0 x5 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x6 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x6 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x6 din", false,-1, 63,0);
        tracep->declQuad(c+268,"top regfile0 x6 dout", false,-1, 63,0);
        tracep->declBit(c+325,"top regfile0 x6 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x7 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x7 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x7 din", false,-1, 63,0);
        tracep->declQuad(c+270,"top regfile0 x7 dout", false,-1, 63,0);
        tracep->declBit(c+326,"top regfile0 x7 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x8 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x8 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x8 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x8 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x8 din", false,-1, 63,0);
        tracep->declQuad(c+272,"top regfile0 x8 dout", false,-1, 63,0);
        tracep->declBit(c+327,"top regfile0 x8 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x9 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x9 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x9 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x9 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x9 din", false,-1, 63,0);
        tracep->declQuad(c+274,"top regfile0 x9 dout", false,-1, 63,0);
        tracep->declBit(c+328,"top regfile0 x9 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x10 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x10 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x10 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x10 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x10 din", false,-1, 63,0);
        tracep->declQuad(c+276,"top regfile0 x10 dout", false,-1, 63,0);
        tracep->declBit(c+329,"top regfile0 x10 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x11 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x11 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x11 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x11 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x11 din", false,-1, 63,0);
        tracep->declQuad(c+278,"top regfile0 x11 dout", false,-1, 63,0);
        tracep->declBit(c+330,"top regfile0 x11 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x12 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x12 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x12 din", false,-1, 63,0);
        tracep->declQuad(c+280,"top regfile0 x12 dout", false,-1, 63,0);
        tracep->declBit(c+331,"top regfile0 x12 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x13 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x13 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x13 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x13 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x13 din", false,-1, 63,0);
        tracep->declQuad(c+282,"top regfile0 x13 dout", false,-1, 63,0);
        tracep->declBit(c+332,"top regfile0 x13 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x14 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x14 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x14 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x14 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x14 din", false,-1, 63,0);
        tracep->declQuad(c+284,"top regfile0 x14 dout", false,-1, 63,0);
        tracep->declBit(c+333,"top regfile0 x14 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x15 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x15 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x15 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x15 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x15 din", false,-1, 63,0);
        tracep->declQuad(c+286,"top regfile0 x15 dout", false,-1, 63,0);
        tracep->declBit(c+334,"top regfile0 x15 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x16 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x16 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x16 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x16 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x16 din", false,-1, 63,0);
        tracep->declQuad(c+288,"top regfile0 x16 dout", false,-1, 63,0);
        tracep->declBit(c+335,"top regfile0 x16 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x17 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x17 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x17 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x17 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x17 din", false,-1, 63,0);
        tracep->declQuad(c+290,"top regfile0 x17 dout", false,-1, 63,0);
        tracep->declBit(c+336,"top regfile0 x17 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x18 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x18 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x18 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x18 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x18 din", false,-1, 63,0);
        tracep->declQuad(c+292,"top regfile0 x18 dout", false,-1, 63,0);
        tracep->declBit(c+337,"top regfile0 x18 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x19 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x19 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x19 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x19 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x19 din", false,-1, 63,0);
        tracep->declQuad(c+294,"top regfile0 x19 dout", false,-1, 63,0);
        tracep->declBit(c+338,"top regfile0 x19 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x20 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x20 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x20 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x20 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x20 din", false,-1, 63,0);
        tracep->declQuad(c+296,"top regfile0 x20 dout", false,-1, 63,0);
        tracep->declBit(c+339,"top regfile0 x20 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x21 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x21 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x21 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x21 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x21 din", false,-1, 63,0);
        tracep->declQuad(c+298,"top regfile0 x21 dout", false,-1, 63,0);
        tracep->declBit(c+340,"top regfile0 x21 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x22 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x22 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x22 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x22 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x22 din", false,-1, 63,0);
        tracep->declQuad(c+300,"top regfile0 x22 dout", false,-1, 63,0);
        tracep->declBit(c+341,"top regfile0 x22 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x23 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x23 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x23 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x23 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x23 din", false,-1, 63,0);
        tracep->declQuad(c+302,"top regfile0 x23 dout", false,-1, 63,0);
        tracep->declBit(c+342,"top regfile0 x23 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x24 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x24 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x24 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x24 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x24 din", false,-1, 63,0);
        tracep->declQuad(c+304,"top regfile0 x24 dout", false,-1, 63,0);
        tracep->declBit(c+343,"top regfile0 x24 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x25 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x25 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x25 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x25 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x25 din", false,-1, 63,0);
        tracep->declQuad(c+306,"top regfile0 x25 dout", false,-1, 63,0);
        tracep->declBit(c+344,"top regfile0 x25 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x26 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x26 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x26 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x26 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x26 din", false,-1, 63,0);
        tracep->declQuad(c+308,"top regfile0 x26 dout", false,-1, 63,0);
        tracep->declBit(c+345,"top regfile0 x26 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x27 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x27 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x27 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x27 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x27 din", false,-1, 63,0);
        tracep->declQuad(c+310,"top regfile0 x27 dout", false,-1, 63,0);
        tracep->declBit(c+346,"top regfile0 x27 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x28 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x28 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x28 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x28 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x28 din", false,-1, 63,0);
        tracep->declQuad(c+312,"top regfile0 x28 dout", false,-1, 63,0);
        tracep->declBit(c+347,"top regfile0 x28 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x29 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x29 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x29 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x29 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x29 din", false,-1, 63,0);
        tracep->declQuad(c+314,"top regfile0 x29 dout", false,-1, 63,0);
        tracep->declBit(c+348,"top regfile0 x29 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x30 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x30 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x30 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x30 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x30 din", false,-1, 63,0);
        tracep->declQuad(c+316,"top regfile0 x30 dout", false,-1, 63,0);
        tracep->declBit(c+349,"top regfile0 x30 wen", false,-1);
        tracep->declBus(c+1098,"top regfile0 x31 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top regfile0 x31 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top regfile0 x31 clk", false,-1);
        tracep->declBit(c+1021,"top regfile0 x31 rst", false,-1);
        tracep->declQuad(c+85,"top regfile0 x31 din", false,-1, 63,0);
        tracep->declQuad(c+318,"top regfile0 x31 dout", false,-1, 63,0);
        tracep->declBit(c+350,"top regfile0 x31 wen", false,-1);
        tracep->declBus(c+1121,"top regfile0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top regfile0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top regfile0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+351,"top regfile0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+78,"top regfile0 mux1 key", false,-1, 4,0);
        tracep->declQuad(c+1102,"top regfile0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+355,"top regfile0 mux1 lut", false,-1, 2138,0);
        tracep->declBus(c+1121,"top regfile0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top regfile0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top regfile0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top regfile0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+351,"top regfile0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+78,"top regfile0 mux1 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1102,"top regfile0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+355,"top regfile0 mux1 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1123,"top regfile0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+422+i*3,"top regfile0 mux1 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+515+i*1,"top regfile0 mux1 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+546+i*2,"top regfile0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+608,"top regfile0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+610,"top regfile0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1124,"top regfile0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1121,"top regfile0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top regfile0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top regfile0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+353,"top regfile0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+79,"top regfile0 mux2 key", false,-1, 4,0);
        tracep->declQuad(c+1102,"top regfile0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+611,"top regfile0 mux2 lut", false,-1, 2138,0);
        tracep->declBus(c+1121,"top regfile0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1122,"top regfile0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top regfile0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top regfile0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+353,"top regfile0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+79,"top regfile0 mux2 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1102,"top regfile0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+611,"top regfile0 mux2 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1123,"top regfile0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+678+i*3,"top regfile0 mux2 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+771+i*1,"top regfile0 mux2 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+802+i*2,"top regfile0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+864,"top regfile0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+866,"top regfile0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1124,"top regfile0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1020,"top id_ex0 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 rst", false,-1);
        tracep->declBus(c+78,"top id_ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+79,"top id_ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+91,"top id_ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+93,"top id_ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+95,"top id_ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+70,"top id_ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+74,"top id_ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+82,"top id_ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+97,"top id_ex0 wreg_i", false,-1);
        tracep->declBus(c+100,"top id_ex0 imm_i", false,-1, 19,0);
        tracep->declBus(c+102,"top id_ex0 offset12_i", false,-1, 11,0);
        tracep->declQuad(c+61,"top id_ex0 pc_i", false,-1, 63,0);
        tracep->declBus(c+113,"top id_ex0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+80,"top id_ex0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+81,"top id_ex0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+92,"top id_ex0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+94,"top id_ex0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+96,"top id_ex0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+72,"top id_ex0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+76,"top id_ex0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+83,"top id_ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+98,"top id_ex0 wreg_o", false,-1);
        tracep->declBus(c+101,"top id_ex0 imm_o", false,-1, 19,0);
        tracep->declBus(c+103,"top id_ex0 offset12_o", false,-1, 11,0);
        tracep->declQuad(c+63,"top id_ex0 pc_o", false,-1, 63,0);
        tracep->declBus(c+867,"top id_ex0 rs1_addr_t", false,-1, 4,0);
        tracep->declBit(c+868,"top id_ex0 rs1_addr_wen", false,-1);
        tracep->declBus(c+869,"top id_ex0 rs2_addr_t", false,-1, 4,0);
        tracep->declBit(c+868,"top id_ex0 rs2_addr_wen", false,-1);
        tracep->declBus(c+870,"top id_ex0 opcode_t", false,-1, 6,0);
        tracep->declBit(c+868,"top id_ex0 opcode_wen", false,-1);
        tracep->declBus(c+871,"top id_ex0 funct3_t", false,-1, 2,0);
        tracep->declBit(c+868,"top id_ex0 funct3_wen", false,-1);
        tracep->declBus(c+872,"top id_ex0 funct7_t", false,-1, 6,0);
        tracep->declBit(c+868,"top id_ex0 funct7_wen", false,-1);
        tracep->declQuad(c+873,"top id_ex0 rs1_data_t", false,-1, 63,0);
        tracep->declBit(c+868,"top id_ex0 rs1_data_wen", false,-1);
        tracep->declQuad(c+875,"top id_ex0 rs2_data_t", false,-1, 63,0);
        tracep->declBit(c+868,"top id_ex0 rs2_data_wen", false,-1);
        tracep->declBus(c+877,"top id_ex0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+868,"top id_ex0 rd_addr_wen", false,-1);
        tracep->declBit(c+878,"top id_ex0 wreg_t", false,-1);
        tracep->declBit(c+868,"top id_ex0 wreg_wen", false,-1);
        tracep->declBus(c+879,"top id_ex0 imm_t", false,-1, 19,0);
        tracep->declBit(c+868,"top id_ex0 imm_wen", false,-1);
        tracep->declBus(c+880,"top id_ex0 offset12_t", false,-1, 11,0);
        tracep->declBit(c+868,"top id_ex0 offset12_wen", false,-1);
        tracep->declQuad(c+61,"top id_ex0 pc_t", false,-1, 63,0);
        tracep->declBit(c+868,"top id_ex0 pc_wen", false,-1);
        tracep->declBus(c+1122,"top id_ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top id_ex0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1020,"top id_ex0 reg1 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg1 rst", false,-1);
        tracep->declBus(c+867,"top id_ex0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+80,"top id_ex0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+868,"top id_ex0 reg1 wen", false,-1);
        tracep->declBus(c+1122,"top id_ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top id_ex0 reg2 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1020,"top id_ex0 reg2 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg2 rst", false,-1);
        tracep->declBus(c+869,"top id_ex0 reg2 din", false,-1, 4,0);
        tracep->declBus(c+81,"top id_ex0 reg2 dout", false,-1, 4,0);
        tracep->declBit(c+868,"top id_ex0 reg2 wen", false,-1);
        tracep->declBus(c+1111,"top id_ex0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1126,"top id_ex0 reg3 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1020,"top id_ex0 reg3 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg3 rst", false,-1);
        tracep->declBus(c+870,"top id_ex0 reg3 din", false,-1, 6,0);
        tracep->declBus(c+92,"top id_ex0 reg3 dout", false,-1, 6,0);
        tracep->declBit(c+868,"top id_ex0 reg3 wen", false,-1);
        tracep->declBus(c+1115,"top id_ex0 reg4 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1127,"top id_ex0 reg4 RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+1020,"top id_ex0 reg4 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg4 rst", false,-1);
        tracep->declBus(c+871,"top id_ex0 reg4 din", false,-1, 2,0);
        tracep->declBus(c+94,"top id_ex0 reg4 dout", false,-1, 2,0);
        tracep->declBit(c+868,"top id_ex0 reg4 wen", false,-1);
        tracep->declBus(c+1111,"top id_ex0 reg5 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1126,"top id_ex0 reg5 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1020,"top id_ex0 reg5 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg5 rst", false,-1);
        tracep->declBus(c+872,"top id_ex0 reg5 din", false,-1, 6,0);
        tracep->declBus(c+96,"top id_ex0 reg5 dout", false,-1, 6,0);
        tracep->declBit(c+868,"top id_ex0 reg5 wen", false,-1);
        tracep->declBus(c+1098,"top id_ex0 reg6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top id_ex0 reg6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top id_ex0 reg6 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg6 rst", false,-1);
        tracep->declQuad(c+873,"top id_ex0 reg6 din", false,-1, 63,0);
        tracep->declQuad(c+72,"top id_ex0 reg6 dout", false,-1, 63,0);
        tracep->declBit(c+868,"top id_ex0 reg6 wen", false,-1);
        tracep->declBus(c+1098,"top id_ex0 reg7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top id_ex0 reg7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top id_ex0 reg7 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg7 rst", false,-1);
        tracep->declQuad(c+875,"top id_ex0 reg7 din", false,-1, 63,0);
        tracep->declQuad(c+76,"top id_ex0 reg7 dout", false,-1, 63,0);
        tracep->declBit(c+868,"top id_ex0 reg7 wen", false,-1);
        tracep->declBus(c+1122,"top id_ex0 reg8 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top id_ex0 reg8 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1020,"top id_ex0 reg8 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg8 rst", false,-1);
        tracep->declBus(c+877,"top id_ex0 reg8 din", false,-1, 4,0);
        tracep->declBus(c+83,"top id_ex0 reg8 dout", false,-1, 4,0);
        tracep->declBit(c+868,"top id_ex0 reg8 wen", false,-1);
        tracep->declBus(c+1104,"top id_ex0 reg9 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1128,"top id_ex0 reg9 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1020,"top id_ex0 reg9 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg9 rst", false,-1);
        tracep->declBus(c+878,"top id_ex0 reg9 din", false,-1, 0,0);
        tracep->declBus(c+98,"top id_ex0 reg9 dout", false,-1, 0,0);
        tracep->declBit(c+868,"top id_ex0 reg9 wen", false,-1);
        tracep->declBus(c+1116,"top id_ex0 reg10 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top id_ex0 reg10 RESET_VAL", false,-1, 19,0);
        tracep->declBit(c+1020,"top id_ex0 reg10 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg10 rst", false,-1);
        tracep->declBus(c+879,"top id_ex0 reg10 din", false,-1, 19,0);
        tracep->declBus(c+101,"top id_ex0 reg10 dout", false,-1, 19,0);
        tracep->declBit(c+868,"top id_ex0 reg10 wen", false,-1);
        tracep->declBus(c+1119,"top id_ex0 reg11 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1130,"top id_ex0 reg11 RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+1020,"top id_ex0 reg11 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg11 rst", false,-1);
        tracep->declBus(c+880,"top id_ex0 reg11 din", false,-1, 11,0);
        tracep->declBus(c+103,"top id_ex0 reg11 dout", false,-1, 11,0);
        tracep->declBit(c+868,"top id_ex0 reg11 wen", false,-1);
        tracep->declBus(c+1098,"top id_ex0 reg12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top id_ex0 reg12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top id_ex0 reg12 clk", false,-1);
        tracep->declBit(c+1021,"top id_ex0 reg12 rst", false,-1);
        tracep->declQuad(c+61,"top id_ex0 reg12 din", false,-1, 63,0);
        tracep->declQuad(c+63,"top id_ex0 reg12 dout", false,-1, 63,0);
        tracep->declBit(c+868,"top id_ex0 reg12 wen", false,-1);
        tracep->declBit(c+1020,"top ex0 clk", false,-1);
        tracep->declBit(c+1021,"top ex0 rst", false,-1);
        tracep->declBus(c+80,"top ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+81,"top ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+92,"top ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+94,"top ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+96,"top ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+72,"top ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+76,"top ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+83,"top ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+98,"top ex0 wreg_i", false,-1);
        tracep->declBus(c+101,"top ex0 imm_i", false,-1, 19,0);
        tracep->declBus(c+103,"top ex0 offset12_i", false,-1, 11,0);
        tracep->declQuad(c+63,"top ex0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+89,"top ex0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+84,"top ex0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+99,"top ex0 mem_back_wreg_i", false,-1);
        tracep->declBus(c+83,"top ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+98,"top ex0 wreg_o", false,-1);
        tracep->declQuad(c+87,"top ex0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+83,"top ex0 ex_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+98,"top ex0 ex_back_wreg_o", false,-1);
        tracep->declQuad(c+106,"top ex0 ex_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+108,"top ex0 branch_flag_o", false,-1);
        tracep->declQuad(c+109,"top ex0 pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+881,"top ex0 rs1_data", false,-1, 63,0);
        tracep->declQuad(c+883,"top ex0 rs2_data", false,-1, 63,0);
        tracep->declBus(c+885,"top ex0 wdata_addiw", false,-1, 31,0);
        tracep->declQuad(c+106,"top ex0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+1112,"top ex0 wdata_wen", false,-1);
        tracep->declQuad(c+886,"top ex0 wdata_t_add", false,-1, 63,0);
        tracep->declQuad(c+888,"top ex0 wdata_t_addi", false,-1, 63,0);
        tracep->declQuad(c+890,"top ex0 wdata_t_addiw", false,-1, 63,0);
        tracep->declQuad(c+892,"top ex0 wdata_t_auipc", false,-1, 63,0);
        tracep->declQuad(c+894,"top ex0 wdata_t_sub", false,-1, 63,0);
        tracep->declQuad(c+896,"top ex0 wdata_opcode_R", false,-1, 63,0);
        tracep->declQuad(c+892,"top ex0 wdata_opcode_U_auipc", false,-1, 63,0);
        tracep->declQuad(c+898,"top ex0 wdata_funct3_add_sub_mul", false,-1, 63,0);
        tracep->declBit(c+1112,"top ex0 branch_flag_wen", false,-1);
        tracep->declBit(c+900,"top ex0 branch_flag_t", false,-1);
        tracep->declBit(c+901,"top ex0 branch_flag_t_beq", false,-1);
        tracep->declBit(c+902,"top ex0 branch_flag_t_bge", false,-1);
        tracep->declBus(c+1098,"top ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top ex0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top ex0 reg1 clk", false,-1);
        tracep->declBit(c+1021,"top ex0 reg1 rst", false,-1);
        tracep->declQuad(c+106,"top ex0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+87,"top ex0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+1112,"top ex0 reg1 wen", false,-1);
        tracep->declBus(c+1101,"top ex0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top ex0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ex0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+106,"top ex0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+92,"top ex0 mux1 key", false,-1, 6,0);
        tracep->declQuad(c+1102,"top ex0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+903,"top ex0 mux1 lut", false,-1, 141,0);
        tracep->declBus(c+1101,"top ex0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top ex0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ex0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ex0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+106,"top ex0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+92,"top ex0 mux1 i0 key", false,-1, 6,0);
        tracep->declQuad(c+1102,"top ex0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+903,"top ex0 mux1 i0 lut", false,-1, 141,0);
        tracep->declBus(c+1131,"top ex0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+908+i*3,"top ex0 mux1 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+914+i*1,"top ex0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+916+i*2,"top ex0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+920,"top ex0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+922,"top ex0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1106,"top ex0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ex0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1115,"top ex0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ex0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+896,"top ex0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+94,"top ex0 mux2 key", false,-1, 2,0);
        tracep->declQuad(c+1102,"top ex0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+923,"top ex0 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+1115,"top ex0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1115,"top ex0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ex0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ex0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+896,"top ex0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+94,"top ex0 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+1102,"top ex0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+923,"top ex0 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+1132,"top ex0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+930+i*3,"top ex0 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+939+i*1,"top ex0 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+942+i*2,"top ex0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+948,"top ex0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+950,"top ex0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ex0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1101,"top ex0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top ex0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ex0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+898,"top ex0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+96,"top ex0 mux3 key", false,-1, 6,0);
        tracep->declQuad(c+1102,"top ex0 mux3 default_out", false,-1, 63,0);
        tracep->declArray(c+951,"top ex0 mux3 lut", false,-1, 141,0);
        tracep->declBus(c+1101,"top ex0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top ex0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ex0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ex0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+898,"top ex0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+96,"top ex0 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+1102,"top ex0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+951,"top ex0 mux3 i0 lut", false,-1, 141,0);
        tracep->declBus(c+1131,"top ex0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+956+i*3,"top ex0 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+962+i*1,"top ex0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+964+i*2,"top ex0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+968,"top ex0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+970,"top ex0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1106,"top ex0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1104,"top ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1128,"top ex0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1020,"top ex0 reg2 clk", false,-1);
        tracep->declBit(c+1021,"top ex0 reg2 rst", false,-1);
        tracep->declBus(c+900,"top ex0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+108,"top ex0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+1112,"top ex0 reg2 wen", false,-1);
        tracep->declBit(c+1020,"top ex_mem0 clk", false,-1);
        tracep->declBit(c+1021,"top ex_mem0 rst", false,-1);
        tracep->declBus(c+83,"top ex_mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+98,"top ex_mem0 wreg_i", false,-1);
        tracep->declQuad(c+87,"top ex_mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+114,"top ex_mem0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+84,"top ex_mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+99,"top ex_mem0 wreg_o", false,-1);
        tracep->declQuad(c+89,"top ex_mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+971,"top ex_mem0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+972,"top ex_mem0 rd_addr_wen", false,-1);
        tracep->declBit(c+973,"top ex_mem0 wreg_t", false,-1);
        tracep->declBit(c+972,"top ex_mem0 wreg_wen", false,-1);
        tracep->declQuad(c+974,"top ex_mem0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+972,"top ex_mem0 wdata_wen", false,-1);
        tracep->declBus(c+1122,"top ex_mem0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top ex_mem0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1020,"top ex_mem0 reg1 clk", false,-1);
        tracep->declBit(c+1021,"top ex_mem0 reg1 rst", false,-1);
        tracep->declBus(c+971,"top ex_mem0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+84,"top ex_mem0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+972,"top ex_mem0 reg1 wen", false,-1);
        tracep->declBus(c+1104,"top ex_mem0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1128,"top ex_mem0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1020,"top ex_mem0 reg2 clk", false,-1);
        tracep->declBit(c+1021,"top ex_mem0 reg2 rst", false,-1);
        tracep->declBus(c+973,"top ex_mem0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+99,"top ex_mem0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+972,"top ex_mem0 reg2 wen", false,-1);
        tracep->declBus(c+1098,"top ex_mem0 reg3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top ex_mem0 reg3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top ex_mem0 reg3 clk", false,-1);
        tracep->declBit(c+1021,"top ex_mem0 reg3 rst", false,-1);
        tracep->declQuad(c+974,"top ex_mem0 reg3 din", false,-1, 63,0);
        tracep->declQuad(c+89,"top ex_mem0 reg3 dout", false,-1, 63,0);
        tracep->declBit(c+972,"top ex_mem0 reg3 wen", false,-1);
        tracep->declBus(c+84,"top mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+99,"top mem0 wreg_i", false,-1);
        tracep->declQuad(c+89,"top mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+84,"top mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+99,"top mem0 wreg_o", false,-1);
        tracep->declQuad(c+89,"top mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+84,"top mem0 mem_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+99,"top mem0 mem_back_wreg_o", false,-1);
        tracep->declQuad(c+89,"top mem0 mem_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+1020,"top mem_wb0 clk", false,-1);
        tracep->declBit(c+1021,"top mem_wb0 rst", false,-1);
        tracep->declBus(c+84,"top mem_wb0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+99,"top mem_wb0 wreg_i", false,-1);
        tracep->declQuad(c+89,"top mem_wb0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+115,"top mem_wb0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+85,"top mem_wb0 wdata_o", false,-1, 63,0);
        tracep->declBit(c+104,"top mem_wb0 wreg_o", false,-1);
        tracep->declBus(c+105,"top mem_wb0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+105,"top mem_wb0 mem_wb_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+104,"top mem_wb0 mem_wb_back_wreg_o", false,-1);
        tracep->declQuad(c+85,"top mem_wb0 mem_wb_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+976,"top mem_wb0 wdata_wen", false,-1);
        tracep->declBit(c+976,"top mem_wb0 wreg_wen", false,-1);
        tracep->declBit(c+976,"top mem_wb0 rd_addr_wen", false,-1);
        tracep->declBus(c+1098,"top mem_wb0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1102,"top mem_wb0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1020,"top mem_wb0 reg1 clk", false,-1);
        tracep->declBit(c+1021,"top mem_wb0 reg1 rst", false,-1);
        tracep->declQuad(c+89,"top mem_wb0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+85,"top mem_wb0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+976,"top mem_wb0 reg1 wen", false,-1);
        tracep->declBus(c+1104,"top mem_wb0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1128,"top mem_wb0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1020,"top mem_wb0 reg2 clk", false,-1);
        tracep->declBit(c+1021,"top mem_wb0 reg2 rst", false,-1);
        tracep->declBus(c+99,"top mem_wb0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+104,"top mem_wb0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+976,"top mem_wb0 reg2 wen", false,-1);
        tracep->declBus(c+1122,"top mem_wb0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top mem_wb0 reg3 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1020,"top mem_wb0 reg3 clk", false,-1);
        tracep->declBit(c+1021,"top mem_wb0 reg3 rst", false,-1);
        tracep->declBus(c+84,"top mem_wb0 reg3 din", false,-1, 4,0);
        tracep->declBus(c+105,"top mem_wb0 reg3 dout", false,-1, 4,0);
        tracep->declBit(c+976,"top mem_wb0 reg3 wen", false,-1);
        tracep->declBit(c+1020,"top ctrl0 clk", false,-1);
        tracep->declBit(c+1021,"top ctrl0 rst", false,-1);
        tracep->declBit(c+1022,"top ctrl0 icache_data_valid_i", false,-1);
        tracep->declBus(c+92,"top ctrl0 ex_opcode_i", false,-1, 6,0);
        tracep->declBus(c+94,"top ctrl0 ex_funct3_i", false,-1, 2,0);
        tracep->declQuad(c+109,"top ctrl0 ex_pc_new_i", false,-1, 63,0);
        tracep->declBit(c+108,"top ctrl0 ex_branch_flag_i", false,-1);
        tracep->declBus(c+111,"top ctrl0 ctrl_signal_pc_o", false,-1, 1,0);
        tracep->declBus(c+112,"top ctrl0 ctrl_signal_if_id_o", false,-1, 1,0);
        tracep->declBus(c+113,"top ctrl0 ctrl_signal_id_ex_o", false,-1, 1,0);
        tracep->declBus(c+114,"top ctrl0 ctrl_signal_ex_mem_o", false,-1, 1,0);
        tracep->declBus(c+115,"top ctrl0 ctrl_signal_mem_wb_o", false,-1, 1,0);
        tracep->declQuad(c+116,"top ctrl0 ctrl_to_pc_new_o", false,-1, 63,0);
        tracep->declBus(c+977,"top ctrl0 FSM_next_state", false,-1, 3,0);
        tracep->declBus(c+1133,"top ctrl0 FSM_next_state_1", false,-1, 3,0);
        tracep->declBus(c+978,"top ctrl0 FSM_next_state_t", false,-1, 3,0);
        tracep->declBus(c+979,"top ctrl0 FSM_pre_state_t", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 ctrl_signal_pc_t_1", false,-1, 1,0);
        tracep->declBus(c+1134,"top ctrl0 ctrl_signal_if_id_t_1", false,-1, 1,0);
        tracep->declBus(c+1134,"top ctrl0 ctrl_signal_id_ex_t_1", false,-1, 1,0);
        tracep->declBus(c+1134,"top ctrl0 ctrl_signal_ex_mem_t_1", false,-1, 1,0);
        tracep->declBus(c+1134,"top ctrl0 ctrl_signal_mem_wb_t_1", false,-1, 1,0);
        tracep->declBus(c+1135,"top ctrl0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1133,"top ctrl0 reg1 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1020,"top ctrl0 reg1 clk", false,-1);
        tracep->declBit(c+1021,"top ctrl0 reg1 rst", false,-1);
        tracep->declBus(c+977,"top ctrl0 reg1 din", false,-1, 3,0);
        tracep->declBus(c+978,"top ctrl0 reg1 dout", false,-1, 3,0);
        tracep->declBit(c+1112,"top ctrl0 reg1 wen", false,-1);
        tracep->declBus(c+1135,"top ctrl0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1133,"top ctrl0 reg2 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1020,"top ctrl0 reg2 clk", false,-1);
        tracep->declBit(c+1021,"top ctrl0 reg2 rst", false,-1);
        tracep->declBus(c+978,"top ctrl0 reg2 din", false,-1, 3,0);
        tracep->declBus(c+979,"top ctrl0 reg2 dout", false,-1, 3,0);
        tracep->declBit(c+1112,"top ctrl0 reg2 wen", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+977,"top ctrl0 mux1 out", false,-1, 3,0);
        tracep->declBus(c+979,"top ctrl0 mux1 key", false,-1, 3,0);
        tracep->declBus(c+1133,"top ctrl0 mux1 default_out", false,-1, 3,0);
        tracep->declBus(c+1136,"top ctrl0 mux1 lut", false,-1, 23,0);
        tracep->declBus(c+1115,"top ctrl0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ctrl0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+977,"top ctrl0 mux1 i0 out", false,-1, 3,0);
        tracep->declBus(c+979,"top ctrl0 mux1 i0 key", false,-1, 3,0);
        tracep->declBus(c+1133,"top ctrl0 mux1 i0 default_out", false,-1, 3,0);
        tracep->declBus(c+1136,"top ctrl0 mux1 i0 lut", false,-1, 23,0);
        tracep->declBus(c+1114,"top ctrl0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top ctrl0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"top ctrl0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+13+i*1,"top ctrl0 mux1 i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+980,"top ctrl0 mux1 i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+981,"top ctrl0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ctrl0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+111,"top ctrl0 mux2 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux2 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux2 default_out", false,-1, 1,0);
        tracep->declBus(c+1137,"top ctrl0 mux2 lut", false,-1, 17,0);
        tracep->declBus(c+1115,"top ctrl0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ctrl0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+111,"top ctrl0 mux2 i0 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux2 i0 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux2 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1137,"top ctrl0 mux2 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1138,"top ctrl0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+16+i*1,"top ctrl0 mux2 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+19+i*1,"top ctrl0 mux2 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+22+i*1,"top ctrl0 mux2 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+982,"top ctrl0 mux2 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+983,"top ctrl0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ctrl0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+112,"top ctrl0 mux3 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux3 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux3 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux3 lut", false,-1, 17,0);
        tracep->declBus(c+1115,"top ctrl0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ctrl0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+112,"top ctrl0 mux3 i0 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux3 i0 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux3 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux3 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1138,"top ctrl0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+25+i*1,"top ctrl0 mux3 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+28+i*1,"top ctrl0 mux3 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+31+i*1,"top ctrl0 mux3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+984,"top ctrl0 mux3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+985,"top ctrl0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ctrl0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+113,"top ctrl0 mux4 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux4 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux4 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux4 lut", false,-1, 17,0);
        tracep->declBus(c+1115,"top ctrl0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ctrl0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+113,"top ctrl0 mux4 i0 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux4 i0 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux4 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux4 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1138,"top ctrl0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+34+i*1,"top ctrl0 mux4 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+37+i*1,"top ctrl0 mux4 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+40+i*1,"top ctrl0 mux4 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+986,"top ctrl0 mux4 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+987,"top ctrl0 mux4 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ctrl0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+114,"top ctrl0 mux5 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux5 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux5 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux5 lut", false,-1, 17,0);
        tracep->declBus(c+1115,"top ctrl0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ctrl0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+114,"top ctrl0 mux5 i0 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux5 i0 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux5 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux5 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1138,"top ctrl0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+43+i*1,"top ctrl0 mux5 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+46+i*1,"top ctrl0 mux5 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+49+i*1,"top ctrl0 mux5 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+988,"top ctrl0 mux5 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+989,"top ctrl0 mux5 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ctrl0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux6 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux6 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux6 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+115,"top ctrl0 mux6 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux6 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux6 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux6 lut", false,-1, 17,0);
        tracep->declBus(c+1115,"top ctrl0 mux6 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux6 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1101,"top ctrl0 mux6 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ctrl0 mux6 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+115,"top ctrl0 mux6 i0 out", false,-1, 1,0);
        tracep->declBus(c+979,"top ctrl0 mux6 i0 key", false,-1, 3,0);
        tracep->declBus(c+1134,"top ctrl0 mux6 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1139,"top ctrl0 mux6 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1138,"top ctrl0 mux6 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+52+i*1,"top ctrl0 mux6 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+55+i*1,"top ctrl0 mux6 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+58+i*1,"top ctrl0 mux6 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+990,"top ctrl0 mux6 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+991,"top ctrl0 mux6 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ctrl0 mux6 i0 i", false,-1, 31,0);
        tracep->declBus(c+1115,"top ctrl0 mux7 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux7 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ctrl0 mux7 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+116,"top ctrl0 mux7 out", false,-1, 63,0);
        tracep->declBus(c+979,"top ctrl0 mux7 key", false,-1, 3,0);
        tracep->declQuad(c+1140,"top ctrl0 mux7 default_out", false,-1, 63,0);
        tracep->declArray(c+992,"top ctrl0 mux7 lut", false,-1, 203,0);
        tracep->declBus(c+1115,"top ctrl0 mux7 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1135,"top ctrl0 mux7 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1098,"top ctrl0 mux7 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1104,"top ctrl0 mux7 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+116,"top ctrl0 mux7 i0 out", false,-1, 63,0);
        tracep->declBus(c+979,"top ctrl0 mux7 i0 key", false,-1, 3,0);
        tracep->declQuad(c+1140,"top ctrl0 mux7 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+992,"top ctrl0 mux7 i0 lut", false,-1, 203,0);
        tracep->declBus(c+1142,"top ctrl0 mux7 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+999+i*3,"top ctrl0 mux7 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1008+i*1,"top ctrl0 mux7 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1011+i*2,"top ctrl0 mux7 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1017,"top ctrl0 mux7 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1019,"top ctrl0 mux7 i0 hit", false,-1);
        tracep->declBus(c+1118,"top ctrl0 mux7 i0 i", false,-1, 31,0);
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
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[2]),2);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__if_id_to_id_pc),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
        tracep->fullIData(oldp+65,(vlSelf->top__DOT__if_id_to_id_inst),32);
        tracep->fullQData(oldp+66,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+68,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+70,(((0U == (0x1fU & 
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
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
        tracep->fullQData(oldp+74,(((0U == (0x1fU & 
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
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+79,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
        tracep->fullCData(oldp+82,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__ex_to_ex_mem_wdata),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
        tracep->fullCData(oldp+91,((0x7fU & vlSelf->top__DOT__if_id_to_id_inst)),7);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
        tracep->fullCData(oldp+93,((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
        tracep->fullCData(oldp+95,((vlSelf->top__DOT__if_id_to_id_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__id_to_id_ex_wreg));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__id_ex_to_ex_wreg));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
        tracep->fullIData(oldp+100,(vlSelf->top__DOT__id_to_id_ex_imm),20);
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
        tracep->fullSData(oldp+102,(vlSelf->top__DOT__id_to_id_ex_offset12),12);
        tracep->fullSData(oldp+103,(vlSelf->top__DOT__id_ex_to_ex_offset12),12);
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__mem_wb_to_regfile_we));
        tracep->fullCData(oldp+105,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__ex_branch_flag));
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
        tracep->fullCData(oldp+114,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
        tracep->fullCData(oldp+115,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__ctrl_to_pc_pc_new),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__pc_to_if_id_pc),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
        tracep->fullBit(oldp+122,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
        tracep->fullWData(oldp+125,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
        tracep->fullWData(oldp+130,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+133,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+145,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux2____pinNumber4),132);
        tracep->fullWData(oldp+150,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+153,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+165,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+168,((vlSelf->top__DOT__if_id_to_id_inst 
                                     >> 0x14U)),20);
        tracep->fullWData(oldp+169,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),81);
        tracep->fullIData(oldp+172,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
        tracep->fullIData(oldp+173,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
        tracep->fullIData(oldp+174,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
        tracep->fullCData(oldp+175,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+176,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
        tracep->fullIData(oldp+178,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
        tracep->fullIData(oldp+179,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
        tracep->fullIData(oldp+180,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
        tracep->fullIData(oldp+181,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
        tracep->fullBit(oldp+182,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+183,((vlSelf->top__DOT__if_id_to_id_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux3____pinNumber4),38);
        tracep->fullIData(oldp+186,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[0]),19);
        tracep->fullIData(oldp+187,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[1]),19);
        tracep->fullCData(oldp+188,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullSData(oldp+190,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[0]),12);
        tracep->fullSData(oldp+191,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[1]),12);
        tracep->fullSData(oldp+192,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__lut_out),12);
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+194,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
        tracep->fullBit(oldp+320,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+321,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+322,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+323,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+324,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+325,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+326,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+327,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+328,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+329,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+330,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+331,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+332,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+333,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+334,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+335,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+336,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+337,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+338,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+339,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+340,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+341,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+342,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+343,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+344,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+345,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+346,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+347,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+348,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+349,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+350,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
        tracep->fullWData(oldp+355,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
        tracep->fullWData(oldp+422,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+425,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+428,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+431,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+434,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+437,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+440,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+443,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+446,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+449,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+452,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+455,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+458,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+461,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+464,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+467,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+473,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+476,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+479,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+482,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+485,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+488,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+491,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+494,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+497,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+500,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+503,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+506,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+509,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+512,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+515,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+516,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+517,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+518,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+519,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+520,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+521,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+522,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+523,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+524,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+525,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+526,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+527,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+528,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+529,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+530,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+531,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+532,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+533,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+534,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+535,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+536,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+537,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+538,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+539,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+540,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+541,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+542,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+543,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+544,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+545,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+546,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+548,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+550,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+552,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+554,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+556,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+558,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+560,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+562,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+564,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+566,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+568,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+570,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+572,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+574,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+576,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+578,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+580,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+582,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+584,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+588,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+592,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+594,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+596,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+600,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+604,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+606,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+608,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+611,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
        tracep->fullWData(oldp+678,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+681,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+684,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+687,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+690,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+693,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+696,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+699,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+702,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+705,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+708,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+711,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+714,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+717,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+720,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+723,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+726,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+729,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+732,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+735,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+738,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+741,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+744,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+747,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+750,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+753,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+756,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+759,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+762,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+765,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+768,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+771,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+772,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+773,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+774,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+775,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+776,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+777,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+778,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+779,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+780,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+781,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+782,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+783,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+784,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+785,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+786,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+787,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+788,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+789,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+790,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+791,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+792,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+793,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+794,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+795,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+796,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+797,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+798,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+799,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+800,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+801,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+802,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+804,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+806,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+808,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+812,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+814,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+816,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+818,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+820,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+822,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+824,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+826,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+828,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+830,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+832,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+834,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+836,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+840,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+842,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+844,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+846,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+848,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+850,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+852,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+854,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+856,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+858,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+860,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+862,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+864,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+867,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xfU))
                                               : 0U))),5);
        tracep->fullBit(oldp+868,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
        tracep->fullCData(oldp+869,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0x14U))
                                               : 0U))),5);
        tracep->fullCData(oldp+870,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0x13U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst)
                                                  : 0U))),7);
        tracep->fullCData(oldp+871,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (7U 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xcU))
                                               : 0U))),3);
        tracep->fullCData(oldp+872,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 0x19U)
                                               : 0U))),7);
        tracep->fullQData(oldp+873,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
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
        tracep->fullQData(oldp+875,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
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
        tracep->fullCData(oldp+877,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->fullBit(oldp+878,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
        tracep->fullIData(oldp+879,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? vlSelf->top__DOT__id_to_id_ex_imm
                                               : 0U))),20);
        tracep->fullSData(oldp+880,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (IData)(vlSelf->top__DOT__id_to_id_ex_offset12)
                                               : 0U))),12);
        tracep->fullQData(oldp+881,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
        tracep->fullQData(oldp+883,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
        tracep->fullIData(oldp+885,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
        tracep->fullQData(oldp+886,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+888,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
        tracep->fullQData(oldp+890,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
        tracep->fullQData(oldp+892,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        >> 0x13U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 0xcU)))))),64);
        tracep->fullQData(oldp+894,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+896,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
        tracep->fullQData(oldp+898,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
        tracep->fullBit(oldp+900,(((((((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                       & (0U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                      & (vlSelf->top__DOT__ex0__DOT__rs1_data 
                                         == vlSelf->top__DOT__ex0__DOT__rs2_data)) 
                                     | (((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                         & (5U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                        & VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data))) 
                                    | (0x67U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode))) 
                                   | (0x6fU == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)))));
        tracep->fullBit(oldp+901,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                   == vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullBit(oldp+902,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullWData(oldp+903,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux1____pinNumber4),142);
        tracep->fullWData(oldp+908,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+911,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+914,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+915,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+916,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+918,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+920,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+922,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+923,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux2____pinNumber4),201);
        tracep->fullWData(oldp+930,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+933,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+936,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+939,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+940,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+941,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+942,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+944,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+946,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+948,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+950,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+951,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux3____pinNumber4),142);
        tracep->fullWData(oldp+956,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+959,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+962,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+963,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+964,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+966,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+968,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+970,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+971,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                               ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                               : 0U))),5);
        tracep->fullBit(oldp+972,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
        tracep->fullBit(oldp+973,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
        tracep->fullQData(oldp+974,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                 ? vlSelf->top__DOT__ex_to_ex_mem_wdata
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+976,((0U == (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
        tracep->fullCData(oldp+977,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
        tracep->fullCData(oldp+978,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
        tracep->fullCData(oldp+979,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
        tracep->fullCData(oldp+980,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+981,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+982,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+983,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+984,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+985,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+986,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+987,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+988,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+989,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+990,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+991,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+992,(vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux7____pinNumber4),204);
        tracep->fullWData(oldp+999,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1002,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+1005,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+1008,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1009,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1010,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+1011,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1013,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1015,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1017,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1019,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1020,(vlSelf->clk));
        tracep->fullBit(oldp+1021,(vlSelf->rst));
        tracep->fullBit(oldp+1022,(vlSelf->icache_data_valid_i));
        tracep->fullIData(oldp+1023,(vlSelf->icache_data_i),32);
        tracep->fullQData(oldp+1024,(vlSelf->icache_addr_o),64);
        tracep->fullBit(oldp+1026,(vlSelf->icache_req_valid_o));
        tracep->fullBit(oldp+1027,(vlSelf->icache_data_wen_o));
        tracep->fullQData(oldp+1028,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->fullQData(oldp+1030,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->fullQData(oldp+1032,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->fullQData(oldp+1034,(vlSelf->diff_regs_o[0]),64);
        tracep->fullQData(oldp+1036,(vlSelf->diff_regs_o[1]),64);
        tracep->fullQData(oldp+1038,(vlSelf->diff_regs_o[2]),64);
        tracep->fullQData(oldp+1040,(vlSelf->diff_regs_o[3]),64);
        tracep->fullQData(oldp+1042,(vlSelf->diff_regs_o[4]),64);
        tracep->fullQData(oldp+1044,(vlSelf->diff_regs_o[5]),64);
        tracep->fullQData(oldp+1046,(vlSelf->diff_regs_o[6]),64);
        tracep->fullQData(oldp+1048,(vlSelf->diff_regs_o[7]),64);
        tracep->fullQData(oldp+1050,(vlSelf->diff_regs_o[8]),64);
        tracep->fullQData(oldp+1052,(vlSelf->diff_regs_o[9]),64);
        tracep->fullQData(oldp+1054,(vlSelf->diff_regs_o[10]),64);
        tracep->fullQData(oldp+1056,(vlSelf->diff_regs_o[11]),64);
        tracep->fullQData(oldp+1058,(vlSelf->diff_regs_o[12]),64);
        tracep->fullQData(oldp+1060,(vlSelf->diff_regs_o[13]),64);
        tracep->fullQData(oldp+1062,(vlSelf->diff_regs_o[14]),64);
        tracep->fullQData(oldp+1064,(vlSelf->diff_regs_o[15]),64);
        tracep->fullQData(oldp+1066,(vlSelf->diff_regs_o[16]),64);
        tracep->fullQData(oldp+1068,(vlSelf->diff_regs_o[17]),64);
        tracep->fullQData(oldp+1070,(vlSelf->diff_regs_o[18]),64);
        tracep->fullQData(oldp+1072,(vlSelf->diff_regs_o[19]),64);
        tracep->fullQData(oldp+1074,(vlSelf->diff_regs_o[20]),64);
        tracep->fullQData(oldp+1076,(vlSelf->diff_regs_o[21]),64);
        tracep->fullQData(oldp+1078,(vlSelf->diff_regs_o[22]),64);
        tracep->fullQData(oldp+1080,(vlSelf->diff_regs_o[23]),64);
        tracep->fullQData(oldp+1082,(vlSelf->diff_regs_o[24]),64);
        tracep->fullQData(oldp+1084,(vlSelf->diff_regs_o[25]),64);
        tracep->fullQData(oldp+1086,(vlSelf->diff_regs_o[26]),64);
        tracep->fullQData(oldp+1088,(vlSelf->diff_regs_o[27]),64);
        tracep->fullQData(oldp+1090,(vlSelf->diff_regs_o[28]),64);
        tracep->fullQData(oldp+1092,(vlSelf->diff_regs_o[29]),64);
        tracep->fullQData(oldp+1094,(vlSelf->diff_regs_o[30]),64);
        tracep->fullQData(oldp+1096,(vlSelf->diff_regs_o[31]),64);
        tracep->fullIData(oldp+1098,(0x40U),32);
        tracep->fullQData(oldp+1099,(0x80000000ULL),64);
        tracep->fullIData(oldp+1101,(2U),32);
        tracep->fullQData(oldp+1102,(0ULL),64);
        tracep->fullIData(oldp+1104,(1U),32);
        tracep->fullIData(oldp+1105,(0x42U),32);
        tracep->fullIData(oldp+1106,(2U),32);
        tracep->fullQData(oldp+1107,(0x7ffffffcULL),64);
        tracep->fullIData(oldp+1109,(0x20U),32);
        tracep->fullIData(oldp+1110,(0U),32);
        tracep->fullIData(oldp+1111,(7U),32);
        tracep->fullBit(oldp+1112,(1U));
        tracep->fullSData(oldp+1113,(0xc647U),16);
        tracep->fullIData(oldp+1114,(8U),32);
        tracep->fullIData(oldp+1115,(3U),32);
        tracep->fullIData(oldp+1116,(0x14U),32);
        tracep->fullIData(oldp+1117,(0x1bU),32);
        tracep->fullIData(oldp+1118,(3U),32);
        tracep->fullIData(oldp+1119,(0xcU),32);
        tracep->fullIData(oldp+1120,(0x13U),32);
        tracep->fullIData(oldp+1121,(0x1fU),32);
        tracep->fullIData(oldp+1122,(5U),32);
        tracep->fullIData(oldp+1123,(0x45U),32);
        tracep->fullIData(oldp+1124,(0x1fU),32);
        tracep->fullCData(oldp+1125,(0U),5);
        tracep->fullCData(oldp+1126,(0U),7);
        tracep->fullCData(oldp+1127,(0U),3);
        tracep->fullBit(oldp+1128,(0U));
        tracep->fullIData(oldp+1129,(0U),20);
        tracep->fullSData(oldp+1130,(0U),12);
        tracep->fullIData(oldp+1131,(0x47U),32);
        tracep->fullIData(oldp+1132,(0x43U),32);
        tracep->fullCData(oldp+1133,(0U),4);
        tracep->fullCData(oldp+1134,(0U),2);
        tracep->fullIData(oldp+1135,(4U),32);
        tracep->fullIData(oldp+1136,(0x1220U),24);
        tracep->fullIData(oldp+1137,(0x1c8U),18);
        tracep->fullIData(oldp+1138,(6U),32);
        tracep->fullIData(oldp+1139,(0x108U),18);
        tracep->fullQData(oldp+1140,(0x100000ULL),64);
        tracep->fullIData(oldp+1142,(0x44U),32);
    }
}
