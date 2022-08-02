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
        tracep->declBit(c+990,"clk", false,-1);
        tracep->declBit(c+991,"rst", false,-1);
        tracep->declBit(c+992,"icache_data_valid_i", false,-1);
        tracep->declBus(c+993,"icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+994,"icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+996,"icache_req_valid_o", false,-1);
        tracep->declBit(c+997,"icache_data_wen_o", false,-1);
        tracep->declQuad(c+998,"diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1000,"diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1002,"diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1004+i*2,"diff_regs_o", true,(i+0), 63,0);}}
        tracep->declBit(c+990,"top clk", false,-1);
        tracep->declBit(c+991,"top rst", false,-1);
        tracep->declBit(c+992,"top icache_data_valid_i", false,-1);
        tracep->declBus(c+993,"top icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+994,"top icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+996,"top icache_req_valid_o", false,-1);
        tracep->declBit(c+997,"top icache_data_wen_o", false,-1);
        tracep->declQuad(c+998,"top diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1000,"top diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1002,"top diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1004+i*2,"top diff_regs_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+100,"top if_id_to_id_pc", false,-1, 63,0);
        tracep->declQuad(c+100,"top id_to_id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+102,"top id_ex_to_ex_pc", false,-1, 63,0);
        tracep->declBus(c+993,"top if_id_to_id_inst", false,-1, 31,0);
        tracep->declQuad(c+1068,"top regfile_to_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+1070,"top regfile_to_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+1072,"top id_to_id_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+104,"top id_ex_to_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+1074,"top id_to_id_ex_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+106,"top id_ex_to_ex_rs2_data", false,-1, 63,0);
        tracep->declBus(c+1076,"top id_to_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+1077,"top id_to_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+108,"top id_ex_to_ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+109,"top id_ex_to_ex_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+1078,"top id_to_id_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+110,"top id_ex_to_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+110,"top ex_to_ex_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+111,"top ex_mem_to_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+111,"top mem_to_mem_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+112,"top mem_wb_to_regfile_wdata", false,-1, 63,0);
        tracep->declQuad(c+114,"top ex_to_ex_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+116,"top ex_mem_to_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+116,"top mem_to_mem_wb_wdata", false,-1, 63,0);
        tracep->declBus(c+1079,"top id_to_id_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+118,"top id_ex_to_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+1080,"top id_to_id_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+119,"top id_ex_to_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+1081,"top id_to_id_ex_funct7", false,-1, 6,0);
        tracep->declBus(c+120,"top id_ex_to_ex_funct7", false,-1, 6,0);
        tracep->declBit(c+61,"top id_to_id_ex_wreg", false,-1);
        tracep->declBit(c+121,"top id_ex_to_ex_wreg", false,-1);
        tracep->declBit(c+121,"top ex_to_ex_mem_wreg", false,-1);
        tracep->declBit(c+122,"top ex_mem_to_mem_wreg", false,-1);
        tracep->declBit(c+122,"top mem_to_mem_wb_wreg", false,-1);
        tracep->declBus(c+62,"top id_to_id_ex_imm", false,-1, 19,0);
        tracep->declBus(c+123,"top id_ex_to_ex_imm", false,-1, 19,0);
        tracep->declBus(c+63,"top id_to_id_ex_offset12", false,-1, 11,0);
        tracep->declBus(c+124,"top id_ex_to_ex_offset12", false,-1, 11,0);
        tracep->declBit(c+125,"top mem_wb_to_regfile_we", false,-1);
        tracep->declBus(c+126,"top mem_wb_to_regfile_waddr", false,-1, 4,0);
        tracep->declBus(c+110,"top ex_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+121,"top ex_to_id_back_wreg", false,-1);
        tracep->declQuad(c+127,"top ex_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+111,"top mem_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+122,"top mem_to_id_back_wreg", false,-1);
        tracep->declQuad(c+116,"top mem_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"top mem_wb_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+125,"top mem_wb_to_id_back_wreg", false,-1);
        tracep->declQuad(c+112,"top mem_wb_to_id_back_wdata", false,-1, 63,0);
        tracep->declBit(c+129,"top ex_branch_flag", false,-1);
        tracep->declQuad(c+130,"top ex_to_ctrl_pc_new", false,-1, 63,0);
        tracep->declBus(c+132,"top ctrl_to_pc_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+133,"top ctrl_to_if_id_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+134,"top ctrl_to_id_ex_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+135,"top ctrl_to_ex_mem_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+136,"top ctrl_to_mem_wb_ctrl_signal", false,-1, 1,0);
        tracep->declQuad(c+137,"top ctrl_to_pc_pc_new", false,-1, 63,0);
        tracep->declQuad(c+139,"top pc_to_if_id_pc", false,-1, 63,0);
        tracep->declBit(c+990,"top pc0 clk", false,-1);
        tracep->declBit(c+991,"top pc0 rst", false,-1);
        tracep->declBus(c+132,"top pc0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+137,"top pc0 pc_new_i", false,-1, 63,0);
        tracep->declQuad(c+994,"top pc0 pc_ram_o", false,-1, 63,0);
        tracep->declQuad(c+139,"top pc0 pc_pipeline_o", false,-1, 63,0);
        tracep->declBit(c+997,"top pc0 icache_data_wen_o", false,-1);
        tracep->declBit(c+996,"top pc0 icache_req_valid_o", false,-1);
        tracep->declQuad(c+141,"top pc0 pc_ram_t", false,-1, 63,0);
        tracep->declBit(c+143,"top pc0 pc_ram_wen", false,-1);
        tracep->declQuad(c+144,"top pc0 pc_pipeline_t", false,-1, 63,0);
        tracep->declBit(c+143,"top pc0 pc_pipeline_wen", false,-1);
        tracep->declBus(c+1097,"top pc0 pc_ram WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1098,"top pc0 pc_ram RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top pc0 pc_ram clk", false,-1);
        tracep->declBit(c+991,"top pc0 pc_ram rst", false,-1);
        tracep->declQuad(c+141,"top pc0 pc_ram din", false,-1, 63,0);
        tracep->declQuad(c+994,"top pc0 pc_ram dout", false,-1, 63,0);
        tracep->declBit(c+143,"top pc0 pc_ram wen", false,-1);
        tracep->declBus(c+1100,"top pc0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1100,"top pc0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+141,"top pc0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+132,"top pc0 mux1 key", false,-1, 1,0);
        tracep->declQuad(c+1101,"top pc0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+146,"top pc0 mux1 lut", false,-1, 131,0);
        tracep->declBus(c+1100,"top pc0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1100,"top pc0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top pc0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+141,"top pc0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+132,"top pc0 mux1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1101,"top pc0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+146,"top pc0 mux1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1104,"top pc0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+151+i*3,"top pc0 mux1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+157+i*1,"top pc0 mux1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+159+i*2,"top pc0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+163,"top pc0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+165,"top pc0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1105,"top pc0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 pc_pipeline WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1106,"top pc0 pc_pipeline RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top pc0 pc_pipeline clk", false,-1);
        tracep->declBit(c+991,"top pc0 pc_pipeline rst", false,-1);
        tracep->declQuad(c+144,"top pc0 pc_pipeline din", false,-1, 63,0);
        tracep->declQuad(c+139,"top pc0 pc_pipeline dout", false,-1, 63,0);
        tracep->declBit(c+143,"top pc0 pc_pipeline wen", false,-1);
        tracep->declBus(c+1100,"top pc0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1100,"top pc0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+144,"top pc0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+132,"top pc0 mux2 key", false,-1, 1,0);
        tracep->declQuad(c+1101,"top pc0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+166,"top pc0 mux2 lut", false,-1, 131,0);
        tracep->declBus(c+1100,"top pc0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1100,"top pc0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top pc0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+144,"top pc0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+132,"top pc0 mux2 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1101,"top pc0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+166,"top pc0 mux2 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1104,"top pc0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+171+i*3,"top pc0 mux2 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+177+i*1,"top pc0 mux2 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+179+i*2,"top pc0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+183,"top pc0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+185,"top pc0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1105,"top pc0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+990,"top if_id0 clk", false,-1);
        tracep->declBit(c+991,"top if_id0 rst", false,-1);
        tracep->declBus(c+993,"top if_id0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+133,"top if_id0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+139,"top if_id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+993,"top if_id0 if_inst_o", false,-1, 31,0);
        tracep->declQuad(c+100,"top if_id0 pc_o", false,-1, 63,0);
        tracep->declBit(c+186,"top if_id0 pc_wen", false,-1);
        tracep->declBus(c+1097,"top if_id0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top if_id0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top if_id0 reg1 clk", false,-1);
        tracep->declBit(c+991,"top if_id0 reg1 rst", false,-1);
        tracep->declQuad(c+139,"top if_id0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+100,"top if_id0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+186,"top if_id0 reg1 wen", false,-1);
        tracep->declBus(c+993,"top id0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+1068,"top id0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1070,"top id0 rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+127,"top id0 ex_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+110,"top id0 ex_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+121,"top id0 ex_back_wreg_i", false,-1);
        tracep->declQuad(c+116,"top id0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+111,"top id0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+122,"top id0 mem_back_wreg_i", false,-1);
        tracep->declQuad(c+112,"top id0 mem_wb_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+126,"top id0 mem_wb_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+125,"top id0 mem_wb_back_wreg_i", false,-1);
        tracep->declQuad(c+100,"top id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+1076,"top id0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+1077,"top id0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+1079,"top id0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+1080,"top id0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+1081,"top id0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+1072,"top id0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+1074,"top id0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+1078,"top id0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+61,"top id0 wreg_o", false,-1);
        tracep->declBus(c+62,"top id0 imm_o", false,-1, 19,0);
        tracep->declBus(c+63,"top id0 offset12_o", false,-1, 11,0);
        tracep->declQuad(c+100,"top id0 pc_o", false,-1, 63,0);
        tracep->declBus(c+1100,"top id0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top id0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top id0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+61,"top id0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+1079,"top id0 mux1 key", false,-1, 6,0);
        tracep->declBus(c+1109,"top id0 mux1 default_out", false,-1, 0,0);
        tracep->declBus(c+1110,"top id0 mux1 lut", false,-1, 15,0);
        tracep->declBus(c+1100,"top id0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top id0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top id0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top id0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+61,"top id0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+1079,"top id0 mux1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1109,"top id0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1110,"top id0 mux1 i0 lut", false,-1, 15,0);
        tracep->declBus(c+1111,"top id0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1+i*1,"top id0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+3+i*1,"top id0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"top id0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+64,"top id0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+65,"top id0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1105,"top id0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top id0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top id0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1113,"top id0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+62,"top id0 mux2 out", false,-1, 19,0);
        tracep->declBus(c+1079,"top id0 mux2 key", false,-1, 6,0);
        tracep->declBus(c+1082,"top id0 mux2 default_out", false,-1, 19,0);
        tracep->declArray(c+66,"top id0 mux2 lut", false,-1, 80,0);
        tracep->declBus(c+1112,"top id0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top id0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1113,"top id0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top id0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+62,"top id0 mux2 i0 out", false,-1, 19,0);
        tracep->declBus(c+1079,"top id0 mux2 i0 key", false,-1, 6,0);
        tracep->declBus(c+1082,"top id0 mux2 i0 default_out", false,-1, 19,0);
        tracep->declArray(c+66,"top id0 mux2 i0 lut", false,-1, 80,0);
        tracep->declBus(c+1114,"top id0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+69+i*1,"top id0 mux2 i0 pair_list", true,(i+0), 26,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+72+i*1,"top id0 mux2 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+75+i*1,"top id0 mux2 i0 data_list", true,(i+0), 19,0);}}
        tracep->declBus(c+78,"top id0 mux2 i0 lut_out", false,-1, 19,0);
        tracep->declBit(c+79,"top id0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1115,"top id0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1100,"top id0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top id0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1116,"top id0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+63,"top id0 mux3 out", false,-1, 11,0);
        tracep->declBus(c+1079,"top id0 mux3 key", false,-1, 6,0);
        tracep->declBus(c+1083,"top id0 mux3 default_out", false,-1, 11,0);
        tracep->declQuad(c+80,"top id0 mux3 lut", false,-1, 37,0);
        tracep->declBus(c+1100,"top id0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top id0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1116,"top id0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top id0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+63,"top id0 mux3 i0 out", false,-1, 11,0);
        tracep->declBus(c+1079,"top id0 mux3 i0 key", false,-1, 6,0);
        tracep->declBus(c+1083,"top id0 mux3 i0 default_out", false,-1, 11,0);
        tracep->declQuad(c+80,"top id0 mux3 i0 lut", false,-1, 37,0);
        tracep->declBus(c+1117,"top id0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+82+i*1,"top id0 mux3 i0 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+84+i*1,"top id0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+86+i*1,"top id0 mux3 i0 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+88,"top id0 mux3 i0 lut_out", false,-1, 11,0);
        tracep->declBit(c+89,"top id0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1105,"top id0 mux3 i0 i", false,-1, 31,0);
        tracep->declBit(c+990,"top regfile0 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 rst", false,-1);
        tracep->declBit(c+125,"top regfile0 we_i", false,-1);
        tracep->declBus(c+126,"top regfile0 waddr_i", false,-1, 4,0);
        tracep->declQuad(c+112,"top regfile0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+1076,"top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declQuad(c+1068,"top regfile0 rdata1_o", false,-1, 63,0);
        tracep->declBus(c+1077,"top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declQuad(c+1070,"top regfile0 rdata2_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+187+i*2,"top regfile0 diff_reg_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+251,"top regfile0 out_x1", false,-1, 63,0);
        tracep->declQuad(c+253,"top regfile0 out_x2", false,-1, 63,0);
        tracep->declQuad(c+255,"top regfile0 out_x3", false,-1, 63,0);
        tracep->declQuad(c+257,"top regfile0 out_x4", false,-1, 63,0);
        tracep->declQuad(c+259,"top regfile0 out_x5", false,-1, 63,0);
        tracep->declQuad(c+261,"top regfile0 out_x6", false,-1, 63,0);
        tracep->declQuad(c+263,"top regfile0 out_x7", false,-1, 63,0);
        tracep->declQuad(c+265,"top regfile0 out_x8", false,-1, 63,0);
        tracep->declQuad(c+267,"top regfile0 out_x9", false,-1, 63,0);
        tracep->declQuad(c+269,"top regfile0 out_x10", false,-1, 63,0);
        tracep->declQuad(c+271,"top regfile0 out_x11", false,-1, 63,0);
        tracep->declQuad(c+273,"top regfile0 out_x12", false,-1, 63,0);
        tracep->declQuad(c+275,"top regfile0 out_x13", false,-1, 63,0);
        tracep->declQuad(c+277,"top regfile0 out_x14", false,-1, 63,0);
        tracep->declQuad(c+279,"top regfile0 out_x15", false,-1, 63,0);
        tracep->declQuad(c+281,"top regfile0 out_x16", false,-1, 63,0);
        tracep->declQuad(c+283,"top regfile0 out_x17", false,-1, 63,0);
        tracep->declQuad(c+285,"top regfile0 out_x18", false,-1, 63,0);
        tracep->declQuad(c+287,"top regfile0 out_x19", false,-1, 63,0);
        tracep->declQuad(c+289,"top regfile0 out_x20", false,-1, 63,0);
        tracep->declQuad(c+291,"top regfile0 out_x21", false,-1, 63,0);
        tracep->declQuad(c+293,"top regfile0 out_x22", false,-1, 63,0);
        tracep->declQuad(c+295,"top regfile0 out_x23", false,-1, 63,0);
        tracep->declQuad(c+297,"top regfile0 out_x24", false,-1, 63,0);
        tracep->declQuad(c+299,"top regfile0 out_x25", false,-1, 63,0);
        tracep->declQuad(c+301,"top regfile0 out_x26", false,-1, 63,0);
        tracep->declQuad(c+303,"top regfile0 out_x27", false,-1, 63,0);
        tracep->declQuad(c+305,"top regfile0 out_x28", false,-1, 63,0);
        tracep->declQuad(c+307,"top regfile0 out_x29", false,-1, 63,0);
        tracep->declQuad(c+309,"top regfile0 out_x30", false,-1, 63,0);
        tracep->declQuad(c+311,"top regfile0 out_x31", false,-1, 63,0);
        tracep->declBit(c+313,"top regfile0 wen_x1", false,-1);
        tracep->declBit(c+314,"top regfile0 wen_x2", false,-1);
        tracep->declBit(c+315,"top regfile0 wen_x3", false,-1);
        tracep->declBit(c+316,"top regfile0 wen_x4", false,-1);
        tracep->declBit(c+317,"top regfile0 wen_x5", false,-1);
        tracep->declBit(c+318,"top regfile0 wen_x6", false,-1);
        tracep->declBit(c+319,"top regfile0 wen_x7", false,-1);
        tracep->declBit(c+320,"top regfile0 wen_x8", false,-1);
        tracep->declBit(c+321,"top regfile0 wen_x9", false,-1);
        tracep->declBit(c+322,"top regfile0 wen_x10", false,-1);
        tracep->declBit(c+323,"top regfile0 wen_x11", false,-1);
        tracep->declBit(c+324,"top regfile0 wen_x12", false,-1);
        tracep->declBit(c+325,"top regfile0 wen_x13", false,-1);
        tracep->declBit(c+326,"top regfile0 wen_x14", false,-1);
        tracep->declBit(c+327,"top regfile0 wen_x15", false,-1);
        tracep->declBit(c+328,"top regfile0 wen_x16", false,-1);
        tracep->declBit(c+329,"top regfile0 wen_x17", false,-1);
        tracep->declBit(c+330,"top regfile0 wen_x18", false,-1);
        tracep->declBit(c+331,"top regfile0 wen_x19", false,-1);
        tracep->declBit(c+332,"top regfile0 wen_x20", false,-1);
        tracep->declBit(c+333,"top regfile0 wen_x21", false,-1);
        tracep->declBit(c+334,"top regfile0 wen_x22", false,-1);
        tracep->declBit(c+335,"top regfile0 wen_x23", false,-1);
        tracep->declBit(c+336,"top regfile0 wen_x24", false,-1);
        tracep->declBit(c+337,"top regfile0 wen_x25", false,-1);
        tracep->declBit(c+338,"top regfile0 wen_x26", false,-1);
        tracep->declBit(c+339,"top regfile0 wen_x27", false,-1);
        tracep->declBit(c+340,"top regfile0 wen_x28", false,-1);
        tracep->declBit(c+341,"top regfile0 wen_x29", false,-1);
        tracep->declBit(c+342,"top regfile0 wen_x30", false,-1);
        tracep->declBit(c+343,"top regfile0 wen_x31", false,-1);
        tracep->declQuad(c+90,"top regfile0 rdata1_t", false,-1, 63,0);
        tracep->declQuad(c+92,"top regfile0 rdata2_t", false,-1, 63,0);
        tracep->declBus(c+1097,"top regfile0 x1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x1 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x1 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x1 din", false,-1, 63,0);
        tracep->declQuad(c+251,"top regfile0 x1 dout", false,-1, 63,0);
        tracep->declBit(c+313,"top regfile0 x1 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x2 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x2 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x2 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x2 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x2 din", false,-1, 63,0);
        tracep->declQuad(c+253,"top regfile0 x2 dout", false,-1, 63,0);
        tracep->declBit(c+314,"top regfile0 x2 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x3 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x3 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x3 din", false,-1, 63,0);
        tracep->declQuad(c+255,"top regfile0 x3 dout", false,-1, 63,0);
        tracep->declBit(c+315,"top regfile0 x3 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x4 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x4 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x4 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x4 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x4 din", false,-1, 63,0);
        tracep->declQuad(c+257,"top regfile0 x4 dout", false,-1, 63,0);
        tracep->declBit(c+316,"top regfile0 x4 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x5 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x5 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x5 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x5 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x5 din", false,-1, 63,0);
        tracep->declQuad(c+259,"top regfile0 x5 dout", false,-1, 63,0);
        tracep->declBit(c+317,"top regfile0 x5 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x6 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x6 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x6 din", false,-1, 63,0);
        tracep->declQuad(c+261,"top regfile0 x6 dout", false,-1, 63,0);
        tracep->declBit(c+318,"top regfile0 x6 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x7 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x7 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x7 din", false,-1, 63,0);
        tracep->declQuad(c+263,"top regfile0 x7 dout", false,-1, 63,0);
        tracep->declBit(c+319,"top regfile0 x7 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x8 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x8 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x8 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x8 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x8 din", false,-1, 63,0);
        tracep->declQuad(c+265,"top regfile0 x8 dout", false,-1, 63,0);
        tracep->declBit(c+320,"top regfile0 x8 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x9 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x9 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x9 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x9 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x9 din", false,-1, 63,0);
        tracep->declQuad(c+267,"top regfile0 x9 dout", false,-1, 63,0);
        tracep->declBit(c+321,"top regfile0 x9 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x10 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x10 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x10 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x10 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x10 din", false,-1, 63,0);
        tracep->declQuad(c+269,"top regfile0 x10 dout", false,-1, 63,0);
        tracep->declBit(c+322,"top regfile0 x10 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x11 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x11 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x11 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x11 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x11 din", false,-1, 63,0);
        tracep->declQuad(c+271,"top regfile0 x11 dout", false,-1, 63,0);
        tracep->declBit(c+323,"top regfile0 x11 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x12 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x12 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x12 din", false,-1, 63,0);
        tracep->declQuad(c+273,"top regfile0 x12 dout", false,-1, 63,0);
        tracep->declBit(c+324,"top regfile0 x12 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x13 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x13 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x13 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x13 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x13 din", false,-1, 63,0);
        tracep->declQuad(c+275,"top regfile0 x13 dout", false,-1, 63,0);
        tracep->declBit(c+325,"top regfile0 x13 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x14 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x14 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x14 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x14 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x14 din", false,-1, 63,0);
        tracep->declQuad(c+277,"top regfile0 x14 dout", false,-1, 63,0);
        tracep->declBit(c+326,"top regfile0 x14 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x15 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x15 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x15 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x15 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x15 din", false,-1, 63,0);
        tracep->declQuad(c+279,"top regfile0 x15 dout", false,-1, 63,0);
        tracep->declBit(c+327,"top regfile0 x15 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x16 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x16 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x16 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x16 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x16 din", false,-1, 63,0);
        tracep->declQuad(c+281,"top regfile0 x16 dout", false,-1, 63,0);
        tracep->declBit(c+328,"top regfile0 x16 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x17 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x17 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x17 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x17 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x17 din", false,-1, 63,0);
        tracep->declQuad(c+283,"top regfile0 x17 dout", false,-1, 63,0);
        tracep->declBit(c+329,"top regfile0 x17 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x18 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x18 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x18 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x18 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x18 din", false,-1, 63,0);
        tracep->declQuad(c+285,"top regfile0 x18 dout", false,-1, 63,0);
        tracep->declBit(c+330,"top regfile0 x18 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x19 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x19 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x19 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x19 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x19 din", false,-1, 63,0);
        tracep->declQuad(c+287,"top regfile0 x19 dout", false,-1, 63,0);
        tracep->declBit(c+331,"top regfile0 x19 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x20 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x20 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x20 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x20 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x20 din", false,-1, 63,0);
        tracep->declQuad(c+289,"top regfile0 x20 dout", false,-1, 63,0);
        tracep->declBit(c+332,"top regfile0 x20 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x21 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x21 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x21 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x21 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x21 din", false,-1, 63,0);
        tracep->declQuad(c+291,"top regfile0 x21 dout", false,-1, 63,0);
        tracep->declBit(c+333,"top regfile0 x21 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x22 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x22 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x22 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x22 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x22 din", false,-1, 63,0);
        tracep->declQuad(c+293,"top regfile0 x22 dout", false,-1, 63,0);
        tracep->declBit(c+334,"top regfile0 x22 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x23 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x23 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x23 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x23 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x23 din", false,-1, 63,0);
        tracep->declQuad(c+295,"top regfile0 x23 dout", false,-1, 63,0);
        tracep->declBit(c+335,"top regfile0 x23 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x24 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x24 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x24 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x24 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x24 din", false,-1, 63,0);
        tracep->declQuad(c+297,"top regfile0 x24 dout", false,-1, 63,0);
        tracep->declBit(c+336,"top regfile0 x24 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x25 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x25 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x25 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x25 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x25 din", false,-1, 63,0);
        tracep->declQuad(c+299,"top regfile0 x25 dout", false,-1, 63,0);
        tracep->declBit(c+337,"top regfile0 x25 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x26 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x26 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x26 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x26 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x26 din", false,-1, 63,0);
        tracep->declQuad(c+301,"top regfile0 x26 dout", false,-1, 63,0);
        tracep->declBit(c+338,"top regfile0 x26 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x27 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x27 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x27 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x27 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x27 din", false,-1, 63,0);
        tracep->declQuad(c+303,"top regfile0 x27 dout", false,-1, 63,0);
        tracep->declBit(c+339,"top regfile0 x27 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x28 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x28 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x28 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x28 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x28 din", false,-1, 63,0);
        tracep->declQuad(c+305,"top regfile0 x28 dout", false,-1, 63,0);
        tracep->declBit(c+340,"top regfile0 x28 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x29 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x29 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x29 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x29 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x29 din", false,-1, 63,0);
        tracep->declQuad(c+307,"top regfile0 x29 dout", false,-1, 63,0);
        tracep->declBit(c+341,"top regfile0 x29 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x30 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x30 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x30 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x30 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x30 din", false,-1, 63,0);
        tracep->declQuad(c+309,"top regfile0 x30 dout", false,-1, 63,0);
        tracep->declBit(c+342,"top regfile0 x30 wen", false,-1);
        tracep->declBus(c+1097,"top regfile0 x31 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top regfile0 x31 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top regfile0 x31 clk", false,-1);
        tracep->declBit(c+991,"top regfile0 x31 rst", false,-1);
        tracep->declQuad(c+112,"top regfile0 x31 din", false,-1, 63,0);
        tracep->declQuad(c+311,"top regfile0 x31 dout", false,-1, 63,0);
        tracep->declBit(c+343,"top regfile0 x31 wen", false,-1);
        tracep->declBus(c+1118,"top regfile0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1119,"top regfile0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top regfile0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+90,"top regfile0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+1076,"top regfile0 mux1 key", false,-1, 4,0);
        tracep->declQuad(c+1101,"top regfile0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+344,"top regfile0 mux1 lut", false,-1, 2138,0);
        tracep->declBus(c+1118,"top regfile0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1119,"top regfile0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top regfile0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top regfile0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+90,"top regfile0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+1076,"top regfile0 mux1 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1101,"top regfile0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+344,"top regfile0 mux1 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1120,"top regfile0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+411+i*3,"top regfile0 mux1 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+504+i*1,"top regfile0 mux1 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+535+i*2,"top regfile0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+94,"top regfile0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+96,"top regfile0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1121,"top regfile0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1118,"top regfile0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1119,"top regfile0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top regfile0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+92,"top regfile0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+1077,"top regfile0 mux2 key", false,-1, 4,0);
        tracep->declQuad(c+1101,"top regfile0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+597,"top regfile0 mux2 lut", false,-1, 2138,0);
        tracep->declBus(c+1118,"top regfile0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1119,"top regfile0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top regfile0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top regfile0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+92,"top regfile0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+1077,"top regfile0 mux2 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1101,"top regfile0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+597,"top regfile0 mux2 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1120,"top regfile0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+664+i*3,"top regfile0 mux2 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+757+i*1,"top regfile0 mux2 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+788+i*2,"top regfile0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+97,"top regfile0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+99,"top regfile0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1121,"top regfile0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+990,"top id_ex0 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 rst", false,-1);
        tracep->declBus(c+1076,"top id_ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+1077,"top id_ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+1079,"top id_ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+1080,"top id_ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+1081,"top id_ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+1072,"top id_ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1074,"top id_ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+1078,"top id_ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+61,"top id_ex0 wreg_i", false,-1);
        tracep->declBus(c+62,"top id_ex0 imm_i", false,-1, 19,0);
        tracep->declBus(c+63,"top id_ex0 offset12_i", false,-1, 11,0);
        tracep->declQuad(c+100,"top id_ex0 pc_i", false,-1, 63,0);
        tracep->declBus(c+134,"top id_ex0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+108,"top id_ex0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+109,"top id_ex0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+118,"top id_ex0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+119,"top id_ex0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+120,"top id_ex0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+104,"top id_ex0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+106,"top id_ex0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+110,"top id_ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+121,"top id_ex0 wreg_o", false,-1);
        tracep->declBus(c+123,"top id_ex0 imm_o", false,-1, 19,0);
        tracep->declBus(c+124,"top id_ex0 offset12_o", false,-1, 11,0);
        tracep->declQuad(c+102,"top id_ex0 pc_o", false,-1, 63,0);
        tracep->declBus(c+1084,"top id_ex0 rs1_addr_t", false,-1, 4,0);
        tracep->declBit(c+850,"top id_ex0 rs1_addr_wen", false,-1);
        tracep->declBus(c+1085,"top id_ex0 rs2_addr_t", false,-1, 4,0);
        tracep->declBit(c+850,"top id_ex0 rs2_addr_wen", false,-1);
        tracep->declBus(c+1086,"top id_ex0 opcode_t", false,-1, 6,0);
        tracep->declBit(c+850,"top id_ex0 opcode_wen", false,-1);
        tracep->declBus(c+1087,"top id_ex0 funct3_t", false,-1, 2,0);
        tracep->declBit(c+850,"top id_ex0 funct3_wen", false,-1);
        tracep->declBus(c+1088,"top id_ex0 funct7_t", false,-1, 6,0);
        tracep->declBit(c+850,"top id_ex0 funct7_wen", false,-1);
        tracep->declQuad(c+1089,"top id_ex0 rs1_data_t", false,-1, 63,0);
        tracep->declBit(c+850,"top id_ex0 rs1_data_wen", false,-1);
        tracep->declQuad(c+1091,"top id_ex0 rs2_data_t", false,-1, 63,0);
        tracep->declBit(c+850,"top id_ex0 rs2_data_wen", false,-1);
        tracep->declBus(c+1093,"top id_ex0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+850,"top id_ex0 rd_addr_wen", false,-1);
        tracep->declBit(c+1094,"top id_ex0 wreg_t", false,-1);
        tracep->declBit(c+850,"top id_ex0 wreg_wen", false,-1);
        tracep->declBus(c+1095,"top id_ex0 imm_t", false,-1, 19,0);
        tracep->declBit(c+850,"top id_ex0 imm_wen", false,-1);
        tracep->declBus(c+1096,"top id_ex0 offset12_t", false,-1, 11,0);
        tracep->declBit(c+850,"top id_ex0 offset12_wen", false,-1);
        tracep->declQuad(c+100,"top id_ex0 pc_t", false,-1, 63,0);
        tracep->declBit(c+850,"top id_ex0 pc_wen", false,-1);
        tracep->declBus(c+1119,"top id_ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1122,"top id_ex0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+990,"top id_ex0 reg1 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg1 rst", false,-1);
        tracep->declBus(c+1084,"top id_ex0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+108,"top id_ex0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+850,"top id_ex0 reg1 wen", false,-1);
        tracep->declBus(c+1119,"top id_ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1122,"top id_ex0 reg2 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+990,"top id_ex0 reg2 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg2 rst", false,-1);
        tracep->declBus(c+1085,"top id_ex0 reg2 din", false,-1, 4,0);
        tracep->declBus(c+109,"top id_ex0 reg2 dout", false,-1, 4,0);
        tracep->declBit(c+850,"top id_ex0 reg2 wen", false,-1);
        tracep->declBus(c+1108,"top id_ex0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1123,"top id_ex0 reg3 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+990,"top id_ex0 reg3 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg3 rst", false,-1);
        tracep->declBus(c+1086,"top id_ex0 reg3 din", false,-1, 6,0);
        tracep->declBus(c+118,"top id_ex0 reg3 dout", false,-1, 6,0);
        tracep->declBit(c+850,"top id_ex0 reg3 wen", false,-1);
        tracep->declBus(c+1112,"top id_ex0 reg4 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1124,"top id_ex0 reg4 RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+990,"top id_ex0 reg4 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg4 rst", false,-1);
        tracep->declBus(c+1087,"top id_ex0 reg4 din", false,-1, 2,0);
        tracep->declBus(c+119,"top id_ex0 reg4 dout", false,-1, 2,0);
        tracep->declBit(c+850,"top id_ex0 reg4 wen", false,-1);
        tracep->declBus(c+1108,"top id_ex0 reg5 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1123,"top id_ex0 reg5 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+990,"top id_ex0 reg5 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg5 rst", false,-1);
        tracep->declBus(c+1088,"top id_ex0 reg5 din", false,-1, 6,0);
        tracep->declBus(c+120,"top id_ex0 reg5 dout", false,-1, 6,0);
        tracep->declBit(c+850,"top id_ex0 reg5 wen", false,-1);
        tracep->declBus(c+1097,"top id_ex0 reg6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top id_ex0 reg6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top id_ex0 reg6 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg6 rst", false,-1);
        tracep->declQuad(c+1089,"top id_ex0 reg6 din", false,-1, 63,0);
        tracep->declQuad(c+104,"top id_ex0 reg6 dout", false,-1, 63,0);
        tracep->declBit(c+850,"top id_ex0 reg6 wen", false,-1);
        tracep->declBus(c+1097,"top id_ex0 reg7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top id_ex0 reg7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top id_ex0 reg7 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg7 rst", false,-1);
        tracep->declQuad(c+1091,"top id_ex0 reg7 din", false,-1, 63,0);
        tracep->declQuad(c+106,"top id_ex0 reg7 dout", false,-1, 63,0);
        tracep->declBit(c+850,"top id_ex0 reg7 wen", false,-1);
        tracep->declBus(c+1119,"top id_ex0 reg8 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1122,"top id_ex0 reg8 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+990,"top id_ex0 reg8 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg8 rst", false,-1);
        tracep->declBus(c+1093,"top id_ex0 reg8 din", false,-1, 4,0);
        tracep->declBus(c+110,"top id_ex0 reg8 dout", false,-1, 4,0);
        tracep->declBit(c+850,"top id_ex0 reg8 wen", false,-1);
        tracep->declBus(c+1103,"top id_ex0 reg9 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top id_ex0 reg9 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+990,"top id_ex0 reg9 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg9 rst", false,-1);
        tracep->declBus(c+1094,"top id_ex0 reg9 din", false,-1, 0,0);
        tracep->declBus(c+121,"top id_ex0 reg9 dout", false,-1, 0,0);
        tracep->declBit(c+850,"top id_ex0 reg9 wen", false,-1);
        tracep->declBus(c+1113,"top id_ex0 reg10 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1126,"top id_ex0 reg10 RESET_VAL", false,-1, 19,0);
        tracep->declBit(c+990,"top id_ex0 reg10 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg10 rst", false,-1);
        tracep->declBus(c+1095,"top id_ex0 reg10 din", false,-1, 19,0);
        tracep->declBus(c+123,"top id_ex0 reg10 dout", false,-1, 19,0);
        tracep->declBit(c+850,"top id_ex0 reg10 wen", false,-1);
        tracep->declBus(c+1116,"top id_ex0 reg11 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1127,"top id_ex0 reg11 RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+990,"top id_ex0 reg11 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg11 rst", false,-1);
        tracep->declBus(c+1096,"top id_ex0 reg11 din", false,-1, 11,0);
        tracep->declBus(c+124,"top id_ex0 reg11 dout", false,-1, 11,0);
        tracep->declBit(c+850,"top id_ex0 reg11 wen", false,-1);
        tracep->declBus(c+1097,"top id_ex0 reg12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top id_ex0 reg12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top id_ex0 reg12 clk", false,-1);
        tracep->declBit(c+991,"top id_ex0 reg12 rst", false,-1);
        tracep->declQuad(c+100,"top id_ex0 reg12 din", false,-1, 63,0);
        tracep->declQuad(c+102,"top id_ex0 reg12 dout", false,-1, 63,0);
        tracep->declBit(c+850,"top id_ex0 reg12 wen", false,-1);
        tracep->declBit(c+990,"top ex0 clk", false,-1);
        tracep->declBit(c+991,"top ex0 rst", false,-1);
        tracep->declBus(c+108,"top ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+109,"top ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+118,"top ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+119,"top ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+120,"top ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+104,"top ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+106,"top ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+110,"top ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+121,"top ex0 wreg_i", false,-1);
        tracep->declBus(c+123,"top ex0 imm_i", false,-1, 19,0);
        tracep->declBus(c+124,"top ex0 offset12_i", false,-1, 11,0);
        tracep->declQuad(c+102,"top ex0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+116,"top ex0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+111,"top ex0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+122,"top ex0 mem_back_wreg_i", false,-1);
        tracep->declBus(c+110,"top ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+121,"top ex0 wreg_o", false,-1);
        tracep->declQuad(c+114,"top ex0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+110,"top ex0 ex_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+121,"top ex0 ex_back_wreg_o", false,-1);
        tracep->declQuad(c+127,"top ex0 ex_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+129,"top ex0 branch_flag_o", false,-1);
        tracep->declQuad(c+130,"top ex0 pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+851,"top ex0 rs1_data", false,-1, 63,0);
        tracep->declQuad(c+853,"top ex0 rs2_data", false,-1, 63,0);
        tracep->declBus(c+855,"top ex0 wdata_addiw", false,-1, 31,0);
        tracep->declQuad(c+127,"top ex0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+1109,"top ex0 wdata_wen", false,-1);
        tracep->declQuad(c+856,"top ex0 wdata_t_add", false,-1, 63,0);
        tracep->declQuad(c+858,"top ex0 wdata_t_addi", false,-1, 63,0);
        tracep->declQuad(c+860,"top ex0 wdata_t_addiw", false,-1, 63,0);
        tracep->declQuad(c+862,"top ex0 wdata_t_auipc", false,-1, 63,0);
        tracep->declQuad(c+864,"top ex0 wdata_t_sub", false,-1, 63,0);
        tracep->declQuad(c+866,"top ex0 wdata_opcode_R", false,-1, 63,0);
        tracep->declQuad(c+862,"top ex0 wdata_opcode_U_auipc", false,-1, 63,0);
        tracep->declQuad(c+868,"top ex0 wdata_funct3_add_sub_mul", false,-1, 63,0);
        tracep->declBit(c+1109,"top ex0 branch_flag_wen", false,-1);
        tracep->declBit(c+870,"top ex0 branch_flag_t", false,-1);
        tracep->declBit(c+871,"top ex0 branch_flag_t_beq", false,-1);
        tracep->declBit(c+872,"top ex0 branch_flag_t_bge", false,-1);
        tracep->declBus(c+1097,"top ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top ex0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top ex0 reg1 clk", false,-1);
        tracep->declBit(c+991,"top ex0 reg1 rst", false,-1);
        tracep->declQuad(c+127,"top ex0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+114,"top ex0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+1109,"top ex0 reg1 wen", false,-1);
        tracep->declBus(c+1100,"top ex0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top ex0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+127,"top ex0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+118,"top ex0 mux1 key", false,-1, 6,0);
        tracep->declQuad(c+1101,"top ex0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+873,"top ex0 mux1 lut", false,-1, 141,0);
        tracep->declBus(c+1100,"top ex0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top ex0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ex0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+127,"top ex0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+118,"top ex0 mux1 i0 key", false,-1, 6,0);
        tracep->declQuad(c+1101,"top ex0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+873,"top ex0 mux1 i0 lut", false,-1, 141,0);
        tracep->declBus(c+1128,"top ex0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+878+i*3,"top ex0 mux1 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+884+i*1,"top ex0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+886+i*2,"top ex0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+890,"top ex0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+892,"top ex0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1105,"top ex0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ex0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1112,"top ex0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+866,"top ex0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+119,"top ex0 mux2 key", false,-1, 2,0);
        tracep->declQuad(c+1101,"top ex0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+893,"top ex0 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+1112,"top ex0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1112,"top ex0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ex0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+866,"top ex0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+119,"top ex0 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+1101,"top ex0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+893,"top ex0 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+1129,"top ex0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+900+i*3,"top ex0 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+909+i*1,"top ex0 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+912+i*2,"top ex0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+918,"top ex0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+920,"top ex0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ex0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1100,"top ex0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top ex0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+868,"top ex0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+120,"top ex0 mux3 key", false,-1, 6,0);
        tracep->declQuad(c+1101,"top ex0 mux3 default_out", false,-1, 63,0);
        tracep->declArray(c+921,"top ex0 mux3 lut", false,-1, 141,0);
        tracep->declBus(c+1100,"top ex0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1108,"top ex0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ex0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+868,"top ex0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+120,"top ex0 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+1101,"top ex0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+921,"top ex0 mux3 i0 lut", false,-1, 141,0);
        tracep->declBus(c+1128,"top ex0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+926+i*3,"top ex0 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+932+i*1,"top ex0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+934+i*2,"top ex0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+938,"top ex0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+940,"top ex0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1105,"top ex0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1103,"top ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top ex0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+990,"top ex0 reg2 clk", false,-1);
        tracep->declBit(c+991,"top ex0 reg2 rst", false,-1);
        tracep->declBus(c+870,"top ex0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+129,"top ex0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+1109,"top ex0 reg2 wen", false,-1);
        tracep->declBit(c+990,"top ex_mem0 clk", false,-1);
        tracep->declBit(c+991,"top ex_mem0 rst", false,-1);
        tracep->declBus(c+110,"top ex_mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+121,"top ex_mem0 wreg_i", false,-1);
        tracep->declQuad(c+114,"top ex_mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+135,"top ex_mem0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+111,"top ex_mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+122,"top ex_mem0 wreg_o", false,-1);
        tracep->declQuad(c+116,"top ex_mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+941,"top ex_mem0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+942,"top ex_mem0 rd_addr_wen", false,-1);
        tracep->declBit(c+943,"top ex_mem0 wreg_t", false,-1);
        tracep->declBit(c+942,"top ex_mem0 wreg_wen", false,-1);
        tracep->declQuad(c+944,"top ex_mem0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+942,"top ex_mem0 wdata_wen", false,-1);
        tracep->declBus(c+1119,"top ex_mem0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1122,"top ex_mem0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+990,"top ex_mem0 reg1 clk", false,-1);
        tracep->declBit(c+991,"top ex_mem0 reg1 rst", false,-1);
        tracep->declBus(c+941,"top ex_mem0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+111,"top ex_mem0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+942,"top ex_mem0 reg1 wen", false,-1);
        tracep->declBus(c+1103,"top ex_mem0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top ex_mem0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+990,"top ex_mem0 reg2 clk", false,-1);
        tracep->declBit(c+991,"top ex_mem0 reg2 rst", false,-1);
        tracep->declBus(c+943,"top ex_mem0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+122,"top ex_mem0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+942,"top ex_mem0 reg2 wen", false,-1);
        tracep->declBus(c+1097,"top ex_mem0 reg3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top ex_mem0 reg3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top ex_mem0 reg3 clk", false,-1);
        tracep->declBit(c+991,"top ex_mem0 reg3 rst", false,-1);
        tracep->declQuad(c+944,"top ex_mem0 reg3 din", false,-1, 63,0);
        tracep->declQuad(c+116,"top ex_mem0 reg3 dout", false,-1, 63,0);
        tracep->declBit(c+942,"top ex_mem0 reg3 wen", false,-1);
        tracep->declBus(c+111,"top mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+122,"top mem0 wreg_i", false,-1);
        tracep->declQuad(c+116,"top mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+111,"top mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+122,"top mem0 wreg_o", false,-1);
        tracep->declQuad(c+116,"top mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+111,"top mem0 mem_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+122,"top mem0 mem_back_wreg_o", false,-1);
        tracep->declQuad(c+116,"top mem0 mem_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+990,"top mem_wb0 clk", false,-1);
        tracep->declBit(c+991,"top mem_wb0 rst", false,-1);
        tracep->declBus(c+111,"top mem_wb0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+122,"top mem_wb0 wreg_i", false,-1);
        tracep->declQuad(c+116,"top mem_wb0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+136,"top mem_wb0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+112,"top mem_wb0 wdata_o", false,-1, 63,0);
        tracep->declBit(c+125,"top mem_wb0 wreg_o", false,-1);
        tracep->declBus(c+126,"top mem_wb0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+126,"top mem_wb0 mem_wb_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+125,"top mem_wb0 mem_wb_back_wreg_o", false,-1);
        tracep->declQuad(c+112,"top mem_wb0 mem_wb_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+946,"top mem_wb0 wdata_wen", false,-1);
        tracep->declBit(c+946,"top mem_wb0 wreg_wen", false,-1);
        tracep->declBit(c+946,"top mem_wb0 rd_addr_wen", false,-1);
        tracep->declBus(c+1097,"top mem_wb0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1101,"top mem_wb0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+990,"top mem_wb0 reg1 clk", false,-1);
        tracep->declBit(c+991,"top mem_wb0 reg1 rst", false,-1);
        tracep->declQuad(c+116,"top mem_wb0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+112,"top mem_wb0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+946,"top mem_wb0 reg1 wen", false,-1);
        tracep->declBus(c+1103,"top mem_wb0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top mem_wb0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+990,"top mem_wb0 reg2 clk", false,-1);
        tracep->declBit(c+991,"top mem_wb0 reg2 rst", false,-1);
        tracep->declBus(c+122,"top mem_wb0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+125,"top mem_wb0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+946,"top mem_wb0 reg2 wen", false,-1);
        tracep->declBus(c+1119,"top mem_wb0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1122,"top mem_wb0 reg3 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+990,"top mem_wb0 reg3 clk", false,-1);
        tracep->declBit(c+991,"top mem_wb0 reg3 rst", false,-1);
        tracep->declBus(c+111,"top mem_wb0 reg3 din", false,-1, 4,0);
        tracep->declBus(c+126,"top mem_wb0 reg3 dout", false,-1, 4,0);
        tracep->declBit(c+946,"top mem_wb0 reg3 wen", false,-1);
        tracep->declBit(c+990,"top ctrl0 clk", false,-1);
        tracep->declBit(c+991,"top ctrl0 rst", false,-1);
        tracep->declBit(c+992,"top ctrl0 icache_data_valid_i", false,-1);
        tracep->declBus(c+118,"top ctrl0 ex_opcode_i", false,-1, 6,0);
        tracep->declBus(c+119,"top ctrl0 ex_funct3_i", false,-1, 2,0);
        tracep->declQuad(c+130,"top ctrl0 ex_pc_new_i", false,-1, 63,0);
        tracep->declBit(c+129,"top ctrl0 ex_branch_flag_i", false,-1);
        tracep->declBus(c+132,"top ctrl0 ctrl_signal_pc_o", false,-1, 1,0);
        tracep->declBus(c+133,"top ctrl0 ctrl_signal_if_id_o", false,-1, 1,0);
        tracep->declBus(c+134,"top ctrl0 ctrl_signal_id_ex_o", false,-1, 1,0);
        tracep->declBus(c+135,"top ctrl0 ctrl_signal_ex_mem_o", false,-1, 1,0);
        tracep->declBus(c+136,"top ctrl0 ctrl_signal_mem_wb_o", false,-1, 1,0);
        tracep->declQuad(c+137,"top ctrl0 ctrl_to_pc_new_o", false,-1, 63,0);
        tracep->declBus(c+947,"top ctrl0 FSM_next_state", false,-1, 3,0);
        tracep->declBus(c+1130,"top ctrl0 FSM_next_state_1", false,-1, 3,0);
        tracep->declBus(c+948,"top ctrl0 FSM_next_state_t", false,-1, 3,0);
        tracep->declBus(c+949,"top ctrl0 FSM_pre_state_t", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 ctrl_signal_pc_t_1", false,-1, 1,0);
        tracep->declBus(c+1131,"top ctrl0 ctrl_signal_if_id_t_1", false,-1, 1,0);
        tracep->declBus(c+1131,"top ctrl0 ctrl_signal_id_ex_t_1", false,-1, 1,0);
        tracep->declBus(c+1131,"top ctrl0 ctrl_signal_ex_mem_t_1", false,-1, 1,0);
        tracep->declBus(c+1131,"top ctrl0 ctrl_signal_mem_wb_t_1", false,-1, 1,0);
        tracep->declBus(c+1132,"top ctrl0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1130,"top ctrl0 reg1 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+990,"top ctrl0 reg1 clk", false,-1);
        tracep->declBit(c+991,"top ctrl0 reg1 rst", false,-1);
        tracep->declBus(c+947,"top ctrl0 reg1 din", false,-1, 3,0);
        tracep->declBus(c+948,"top ctrl0 reg1 dout", false,-1, 3,0);
        tracep->declBit(c+1109,"top ctrl0 reg1 wen", false,-1);
        tracep->declBus(c+1132,"top ctrl0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1130,"top ctrl0 reg2 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+990,"top ctrl0 reg2 clk", false,-1);
        tracep->declBit(c+991,"top ctrl0 reg2 rst", false,-1);
        tracep->declBus(c+948,"top ctrl0 reg2 din", false,-1, 3,0);
        tracep->declBus(c+949,"top ctrl0 reg2 dout", false,-1, 3,0);
        tracep->declBit(c+1109,"top ctrl0 reg2 wen", false,-1);
        tracep->declBus(c+1112,"top ctrl0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top ctrl0 mux1 out", false,-1, 3,0);
        tracep->declBus(c+949,"top ctrl0 mux1 key", false,-1, 3,0);
        tracep->declBus(c+1130,"top ctrl0 mux1 default_out", false,-1, 3,0);
        tracep->declBus(c+1133,"top ctrl0 mux1 lut", false,-1, 23,0);
        tracep->declBus(c+1112,"top ctrl0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ctrl0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+947,"top ctrl0 mux1 i0 out", false,-1, 3,0);
        tracep->declBus(c+949,"top ctrl0 mux1 i0 key", false,-1, 3,0);
        tracep->declBus(c+1130,"top ctrl0 mux1 i0 default_out", false,-1, 3,0);
        tracep->declBus(c+1133,"top ctrl0 mux1 i0 lut", false,-1, 23,0);
        tracep->declBus(c+1111,"top ctrl0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top ctrl0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"top ctrl0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+13+i*1,"top ctrl0 mux1 i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+950,"top ctrl0 mux1 i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+951,"top ctrl0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+132,"top ctrl0 mux2 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux2 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux2 default_out", false,-1, 1,0);
        tracep->declBus(c+1134,"top ctrl0 mux2 lut", false,-1, 17,0);
        tracep->declBus(c+1112,"top ctrl0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ctrl0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+132,"top ctrl0 mux2 i0 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux2 i0 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux2 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1134,"top ctrl0 mux2 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1135,"top ctrl0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+16+i*1,"top ctrl0 mux2 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+19+i*1,"top ctrl0 mux2 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+22+i*1,"top ctrl0 mux2 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+952,"top ctrl0 mux2 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+953,"top ctrl0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+133,"top ctrl0 mux3 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux3 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux3 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux3 lut", false,-1, 17,0);
        tracep->declBus(c+1112,"top ctrl0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ctrl0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+133,"top ctrl0 mux3 i0 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux3 i0 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux3 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux3 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1135,"top ctrl0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+25+i*1,"top ctrl0 mux3 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+28+i*1,"top ctrl0 mux3 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+31+i*1,"top ctrl0 mux3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+954,"top ctrl0 mux3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+955,"top ctrl0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+134,"top ctrl0 mux4 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux4 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux4 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux4 lut", false,-1, 17,0);
        tracep->declBus(c+1112,"top ctrl0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ctrl0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+134,"top ctrl0 mux4 i0 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux4 i0 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux4 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux4 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1135,"top ctrl0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+34+i*1,"top ctrl0 mux4 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+37+i*1,"top ctrl0 mux4 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+40+i*1,"top ctrl0 mux4 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+956,"top ctrl0 mux4 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+957,"top ctrl0 mux4 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+135,"top ctrl0 mux5 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux5 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux5 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux5 lut", false,-1, 17,0);
        tracep->declBus(c+1112,"top ctrl0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ctrl0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+135,"top ctrl0 mux5 i0 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux5 i0 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux5 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux5 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1135,"top ctrl0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+43+i*1,"top ctrl0 mux5 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+46+i*1,"top ctrl0 mux5 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+49+i*1,"top ctrl0 mux5 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+958,"top ctrl0 mux5 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+959,"top ctrl0 mux5 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux6 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux6 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux6 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+136,"top ctrl0 mux6 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux6 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux6 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux6 lut", false,-1, 17,0);
        tracep->declBus(c+1112,"top ctrl0 mux6 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux6 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1100,"top ctrl0 mux6 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ctrl0 mux6 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+136,"top ctrl0 mux6 i0 out", false,-1, 1,0);
        tracep->declBus(c+949,"top ctrl0 mux6 i0 key", false,-1, 3,0);
        tracep->declBus(c+1131,"top ctrl0 mux6 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1136,"top ctrl0 mux6 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1135,"top ctrl0 mux6 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+52+i*1,"top ctrl0 mux6 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+55+i*1,"top ctrl0 mux6 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+58+i*1,"top ctrl0 mux6 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+960,"top ctrl0 mux6 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+961,"top ctrl0 mux6 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux6 i0 i", false,-1, 31,0);
        tracep->declBus(c+1112,"top ctrl0 mux7 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux7 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux7 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+137,"top ctrl0 mux7 out", false,-1, 63,0);
        tracep->declBus(c+949,"top ctrl0 mux7 key", false,-1, 3,0);
        tracep->declQuad(c+1137,"top ctrl0 mux7 default_out", false,-1, 63,0);
        tracep->declArray(c+962,"top ctrl0 mux7 lut", false,-1, 203,0);
        tracep->declBus(c+1112,"top ctrl0 mux7 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top ctrl0 mux7 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux7 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1103,"top ctrl0 mux7 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+137,"top ctrl0 mux7 i0 out", false,-1, 63,0);
        tracep->declBus(c+949,"top ctrl0 mux7 i0 key", false,-1, 3,0);
        tracep->declQuad(c+1137,"top ctrl0 mux7 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+962,"top ctrl0 mux7 i0 lut", false,-1, 203,0);
        tracep->declBus(c+1139,"top ctrl0 mux7 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+969+i*3,"top ctrl0 mux7 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+978+i*1,"top ctrl0 mux7 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+981+i*2,"top ctrl0 mux7 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+987,"top ctrl0 mux7 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+989,"top ctrl0 mux7 i0 hit", false,-1);
        tracep->declBus(c+1115,"top ctrl0 mux7 i0 i", false,-1, 31,0);
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
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__id_to_id_ex_wreg));
        tracep->fullIData(oldp+62,(vlSelf->top__DOT__id_to_id_ex_imm),20);
        tracep->fullSData(oldp+63,(vlSelf->top__DOT__id_to_id_ex_offset12),12);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+66,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),81);
        tracep->fullIData(oldp+69,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
        tracep->fullIData(oldp+70,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
        tracep->fullIData(oldp+71,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
        tracep->fullIData(oldp+75,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
        tracep->fullIData(oldp+76,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
        tracep->fullIData(oldp+77,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
        tracep->fullIData(oldp+78,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux3____pinNumber4),38);
        tracep->fullIData(oldp+82,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[0]),19);
        tracep->fullIData(oldp+83,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__pair_list[1]),19);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullSData(oldp+86,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[0]),12);
        tracep->fullSData(oldp+87,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__data_list[1]),12);
        tracep->fullSData(oldp+88,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__lut_out),12);
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__id0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__if_id_to_id_pc),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__ex_to_ex_mem_wdata),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__id_ex_to_ex_wreg));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
        tracep->fullIData(oldp+123,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
        tracep->fullSData(oldp+124,(vlSelf->top__DOT__id_ex_to_ex_offset12),12);
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__mem_wb_to_regfile_we));
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__ex_branch_flag));
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ctrl_to_pc_pc_new),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__pc_to_if_id_pc),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
        tracep->fullBit(oldp+143,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
        tracep->fullWData(oldp+146,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
        tracep->fullWData(oldp+151,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+154,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+166,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux2____pinNumber4),132);
        tracep->fullWData(oldp+171,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+174,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__pc0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+186,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
        tracep->fullQData(oldp+187,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
        tracep->fullBit(oldp+313,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+314,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+315,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+316,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+317,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+318,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+319,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+320,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+321,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+322,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+323,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+324,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+325,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+326,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+327,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+328,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+329,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+330,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+331,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+332,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+333,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+334,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+335,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+336,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+337,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+338,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+339,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+340,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+341,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+342,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+343,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullWData(oldp+344,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
        tracep->fullWData(oldp+411,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+414,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+417,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+420,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+423,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+426,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+429,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+432,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+435,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+438,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+441,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+444,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+447,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+450,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+453,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+456,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+459,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+462,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+465,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+468,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+471,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+474,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+477,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+480,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+483,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+486,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+489,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+492,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+495,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+498,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+501,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+504,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+505,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+506,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+507,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+508,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+509,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+510,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+511,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+512,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+513,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+514,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+515,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+516,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+517,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+518,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+519,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+520,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+521,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+522,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+523,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+524,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+525,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+526,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+527,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+528,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+529,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+530,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+531,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+532,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+533,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+534,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+569,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+571,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+573,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+575,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+579,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
        tracep->fullWData(oldp+597,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
        tracep->fullWData(oldp+664,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+667,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+670,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+673,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+676,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+679,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+682,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+685,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+691,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+694,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+697,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+700,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+703,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+706,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+709,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+712,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+715,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+718,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+721,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+724,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+727,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+730,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+733,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+739,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+742,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+745,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+748,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+751,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+757,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+758,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+759,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+760,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+761,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+762,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+763,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+764,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+765,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+766,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+767,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+768,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+769,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+770,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+771,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+772,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+773,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+774,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+775,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+776,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+777,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+778,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+779,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+780,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+781,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+782,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+783,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+784,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+785,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+786,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+787,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+788,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+790,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+792,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+794,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+796,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+798,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+800,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+802,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+804,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+806,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+808,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+812,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+814,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+816,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+818,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+820,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+822,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+824,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+826,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+828,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+830,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+832,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+834,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+836,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+840,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+842,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+844,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+846,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+848,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
        tracep->fullBit(oldp+850,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
        tracep->fullQData(oldp+851,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
        tracep->fullQData(oldp+853,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
        tracep->fullIData(oldp+855,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
        tracep->fullQData(oldp+856,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+858,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
        tracep->fullQData(oldp+860,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
        tracep->fullQData(oldp+862,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        >> 0x13U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 0xcU)))))),64);
        tracep->fullQData(oldp+864,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+866,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
        tracep->fullQData(oldp+868,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
        tracep->fullBit(oldp+870,(((((((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                       & (0U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                      & (vlSelf->top__DOT__ex0__DOT__rs1_data 
                                         == vlSelf->top__DOT__ex0__DOT__rs2_data)) 
                                     | (((0x63U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)) 
                                         & (5U == (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3))) 
                                        & VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data))) 
                                    | (0x67U == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode))) 
                                   | (0x6fU == (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)))));
        tracep->fullBit(oldp+871,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                   == vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullBit(oldp+872,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullWData(oldp+873,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux1____pinNumber4),142);
        tracep->fullWData(oldp+878,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+881,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+884,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+885,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+886,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+888,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+890,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+892,(vlSelf->top__DOT__ex0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+893,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux2____pinNumber4),201);
        tracep->fullWData(oldp+900,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+903,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+906,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+909,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+910,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+911,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+912,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+914,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+916,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+918,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+920,(vlSelf->top__DOT__ex0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+921,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux3____pinNumber4),142);
        tracep->fullWData(oldp+926,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+929,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+932,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+933,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+934,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+936,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+938,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+940,(vlSelf->top__DOT__ex0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+941,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                               ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                               : 0U))),5);
        tracep->fullBit(oldp+942,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
        tracep->fullBit(oldp+943,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
        tracep->fullQData(oldp+944,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                 ? vlSelf->top__DOT__ex_to_ex_mem_wdata
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+946,((0U == (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
        tracep->fullCData(oldp+947,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
        tracep->fullCData(oldp+948,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
        tracep->fullCData(oldp+949,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
        tracep->fullCData(oldp+950,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+951,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+952,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+953,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+954,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+955,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+956,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+957,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+958,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+959,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+960,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+961,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+962,(vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux7____pinNumber4),204);
        tracep->fullWData(oldp+969,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+972,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+975,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+978,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+979,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+980,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+981,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+983,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+985,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+987,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+989,(vlSelf->top__DOT__ctrl0__DOT__mux7__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+990,(vlSelf->clk));
        tracep->fullBit(oldp+991,(vlSelf->rst));
        tracep->fullBit(oldp+992,(vlSelf->icache_data_valid_i));
        tracep->fullIData(oldp+993,(vlSelf->icache_data_i),32);
        tracep->fullQData(oldp+994,(vlSelf->icache_addr_o),64);
        tracep->fullBit(oldp+996,(vlSelf->icache_req_valid_o));
        tracep->fullBit(oldp+997,(vlSelf->icache_data_wen_o));
        tracep->fullQData(oldp+998,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->fullQData(oldp+1000,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->fullQData(oldp+1002,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->fullQData(oldp+1004,(vlSelf->diff_regs_o[0]),64);
        tracep->fullQData(oldp+1006,(vlSelf->diff_regs_o[1]),64);
        tracep->fullQData(oldp+1008,(vlSelf->diff_regs_o[2]),64);
        tracep->fullQData(oldp+1010,(vlSelf->diff_regs_o[3]),64);
        tracep->fullQData(oldp+1012,(vlSelf->diff_regs_o[4]),64);
        tracep->fullQData(oldp+1014,(vlSelf->diff_regs_o[5]),64);
        tracep->fullQData(oldp+1016,(vlSelf->diff_regs_o[6]),64);
        tracep->fullQData(oldp+1018,(vlSelf->diff_regs_o[7]),64);
        tracep->fullQData(oldp+1020,(vlSelf->diff_regs_o[8]),64);
        tracep->fullQData(oldp+1022,(vlSelf->diff_regs_o[9]),64);
        tracep->fullQData(oldp+1024,(vlSelf->diff_regs_o[10]),64);
        tracep->fullQData(oldp+1026,(vlSelf->diff_regs_o[11]),64);
        tracep->fullQData(oldp+1028,(vlSelf->diff_regs_o[12]),64);
        tracep->fullQData(oldp+1030,(vlSelf->diff_regs_o[13]),64);
        tracep->fullQData(oldp+1032,(vlSelf->diff_regs_o[14]),64);
        tracep->fullQData(oldp+1034,(vlSelf->diff_regs_o[15]),64);
        tracep->fullQData(oldp+1036,(vlSelf->diff_regs_o[16]),64);
        tracep->fullQData(oldp+1038,(vlSelf->diff_regs_o[17]),64);
        tracep->fullQData(oldp+1040,(vlSelf->diff_regs_o[18]),64);
        tracep->fullQData(oldp+1042,(vlSelf->diff_regs_o[19]),64);
        tracep->fullQData(oldp+1044,(vlSelf->diff_regs_o[20]),64);
        tracep->fullQData(oldp+1046,(vlSelf->diff_regs_o[21]),64);
        tracep->fullQData(oldp+1048,(vlSelf->diff_regs_o[22]),64);
        tracep->fullQData(oldp+1050,(vlSelf->diff_regs_o[23]),64);
        tracep->fullQData(oldp+1052,(vlSelf->diff_regs_o[24]),64);
        tracep->fullQData(oldp+1054,(vlSelf->diff_regs_o[25]),64);
        tracep->fullQData(oldp+1056,(vlSelf->diff_regs_o[26]),64);
        tracep->fullQData(oldp+1058,(vlSelf->diff_regs_o[27]),64);
        tracep->fullQData(oldp+1060,(vlSelf->diff_regs_o[28]),64);
        tracep->fullQData(oldp+1062,(vlSelf->diff_regs_o[29]),64);
        tracep->fullQData(oldp+1064,(vlSelf->diff_regs_o[30]),64);
        tracep->fullQData(oldp+1066,(vlSelf->diff_regs_o[31]),64);
        tracep->fullQData(oldp+1068,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+1070,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+1072,(((0U == (0x1fU 
                                              & (vlSelf->icache_data_i 
                                                 >> 0xfU)))
                                       ? 0ULL : (((
                                                   (0x1fU 
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
        tracep->fullQData(oldp+1074,(((0U == (0x1fU 
                                              & (vlSelf->icache_data_i 
                                                 >> 0x14U)))
                                       ? 0ULL : (((
                                                   (0x1fU 
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
        tracep->fullCData(oldp+1076,((0x1fU & (vlSelf->icache_data_i 
                                               >> 0xfU))),5);
        tracep->fullCData(oldp+1077,((0x1fU & (vlSelf->icache_data_i 
                                               >> 0x14U))),5);
        tracep->fullCData(oldp+1078,((0x1fU & (vlSelf->icache_data_i 
                                               >> 7U))),5);
        tracep->fullCData(oldp+1079,((0x7fU & vlSelf->icache_data_i)),7);
        tracep->fullCData(oldp+1080,((7U & (vlSelf->icache_data_i 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1081,((vlSelf->icache_data_i 
                                      >> 0x19U)),7);
        tracep->fullIData(oldp+1082,((vlSelf->icache_data_i 
                                      >> 0x14U)),20);
        tracep->fullSData(oldp+1083,((vlSelf->icache_data_i 
                                      >> 0x14U)),12);
        tracep->fullCData(oldp+1084,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (0x1fU 
                                                   & (vlSelf->icache_data_i 
                                                      >> 0xfU))
                                                : 0U))),5);
        tracep->fullCData(oldp+1085,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (0x1fU 
                                                   & (vlSelf->icache_data_i 
                                                      >> 0x14U))
                                                : 0U))),5);
        tracep->fullCData(oldp+1086,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0x13U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (0x7fU 
                                                   & vlSelf->icache_data_i)
                                                   : 0U))),7);
        tracep->fullCData(oldp+1087,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (7U 
                                                   & (vlSelf->icache_data_i 
                                                      >> 0xcU))
                                                : 0U))),3);
        tracep->fullCData(oldp+1088,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (vlSelf->icache_data_i 
                                                   >> 0x19U)
                                                : 0U))),7);
        tracep->fullQData(oldp+1089,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
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
        tracep->fullQData(oldp+1091,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
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
        tracep->fullCData(oldp+1093,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (0x1fU 
                                                   & (vlSelf->icache_data_i 
                                                      >> 7U))
                                                : 0U))),5);
        tracep->fullBit(oldp+1094,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                    | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                       | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
        tracep->fullIData(oldp+1095,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? vlSelf->top__DOT__id_to_id_ex_imm
                                                : 0U))),20);
        tracep->fullSData(oldp+1096,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (IData)(vlSelf->top__DOT__id_to_id_ex_offset12)
                                                : 0U))),12);
        tracep->fullIData(oldp+1097,(0x40U),32);
        tracep->fullQData(oldp+1098,(0x80000000ULL),64);
        tracep->fullIData(oldp+1100,(2U),32);
        tracep->fullQData(oldp+1101,(0ULL),64);
        tracep->fullIData(oldp+1103,(1U),32);
        tracep->fullIData(oldp+1104,(0x42U),32);
        tracep->fullIData(oldp+1105,(2U),32);
        tracep->fullQData(oldp+1106,(0x7ffffffcULL),64);
        tracep->fullIData(oldp+1108,(7U),32);
        tracep->fullBit(oldp+1109,(1U));
        tracep->fullSData(oldp+1110,(0xc647U),16);
        tracep->fullIData(oldp+1111,(8U),32);
        tracep->fullIData(oldp+1112,(3U),32);
        tracep->fullIData(oldp+1113,(0x14U),32);
        tracep->fullIData(oldp+1114,(0x1bU),32);
        tracep->fullIData(oldp+1115,(3U),32);
        tracep->fullIData(oldp+1116,(0xcU),32);
        tracep->fullIData(oldp+1117,(0x13U),32);
        tracep->fullIData(oldp+1118,(0x1fU),32);
        tracep->fullIData(oldp+1119,(5U),32);
        tracep->fullIData(oldp+1120,(0x45U),32);
        tracep->fullIData(oldp+1121,(0x1fU),32);
        tracep->fullCData(oldp+1122,(0U),5);
        tracep->fullCData(oldp+1123,(0U),7);
        tracep->fullCData(oldp+1124,(0U),3);
        tracep->fullBit(oldp+1125,(0U));
        tracep->fullIData(oldp+1126,(0U),20);
        tracep->fullSData(oldp+1127,(0U),12);
        tracep->fullIData(oldp+1128,(0x47U),32);
        tracep->fullIData(oldp+1129,(0x43U),32);
        tracep->fullCData(oldp+1130,(0U),4);
        tracep->fullCData(oldp+1131,(0U),2);
        tracep->fullIData(oldp+1132,(4U),32);
        tracep->fullIData(oldp+1133,(0x1220U),24);
        tracep->fullIData(oldp+1134,(0x1c8U),18);
        tracep->fullIData(oldp+1135,(6U),32);
        tracep->fullIData(oldp+1136,(0x108U),18);
        tracep->fullQData(oldp+1137,(0x100000ULL),64);
        tracep->fullIData(oldp+1139,(0x44U),32);
    }
}
