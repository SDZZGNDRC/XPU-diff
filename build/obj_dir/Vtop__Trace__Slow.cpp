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
        tracep->declBit(c+1011,"clk", false,-1);
        tracep->declBit(c+1012,"rst", false,-1);
        tracep->declBit(c+1013,"icache_data_valid_i", false,-1);
        tracep->declBus(c+1014,"icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1015,"icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1017,"icache_req_valid_o", false,-1);
        tracep->declBit(c+1018,"icache_data_wen_o", false,-1);
        tracep->declQuad(c+1019,"diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1021,"diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1023,"diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1025+i*2,"diff_regs_o", true,(i+0), 63,0);}}
        tracep->declBit(c+1011,"top clk", false,-1);
        tracep->declBit(c+1012,"top rst", false,-1);
        tracep->declBit(c+1013,"top icache_data_valid_i", false,-1);
        tracep->declBus(c+1014,"top icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1015,"top icache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1017,"top icache_req_valid_o", false,-1);
        tracep->declBit(c+1018,"top icache_data_wen_o", false,-1);
        tracep->declQuad(c+1019,"top diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1021,"top diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1023,"top diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1025+i*2,"top diff_regs_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+19,"top if_id_to_id_pc", false,-1, 63,0);
        tracep->declQuad(c+19,"top id_to_id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+21,"top id_ex_to_ex_pc", false,-1, 63,0);
        tracep->declBus(c+963,"top if_id_to_id_inst", false,-1, 31,0);
        tracep->declQuad(c+942,"top regfile_to_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+944,"top regfile_to_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+946,"top id_to_id_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+23,"top id_ex_to_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+948,"top id_to_id_ex_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+25,"top id_ex_to_ex_rs2_data", false,-1, 63,0);
        tracep->declBus(c+964,"top id_to_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+965,"top id_to_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+27,"top id_ex_to_ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+28,"top id_ex_to_ex_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+966,"top id_to_id_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+29,"top id_ex_to_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+29,"top ex_to_ex_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+30,"top ex_mem_to_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+30,"top mem_to_mem_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+31,"top mem_wb_to_regfile_wdata", false,-1, 63,0);
        tracep->declQuad(c+33,"top ex_to_ex_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+35,"top ex_mem_to_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+35,"top mem_to_mem_wb_wdata", false,-1, 63,0);
        tracep->declBus(c+967,"top id_to_id_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+37,"top id_ex_to_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+968,"top id_to_id_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+38,"top id_ex_to_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+969,"top id_to_id_ex_funct7", false,-1, 6,0);
        tracep->declBus(c+39,"top id_ex_to_ex_funct7", false,-1, 6,0);
        tracep->declBit(c+970,"top id_to_id_ex_wreg", false,-1);
        tracep->declBit(c+40,"top id_ex_to_ex_wreg", false,-1);
        tracep->declBit(c+40,"top ex_to_ex_mem_wreg", false,-1);
        tracep->declBit(c+41,"top ex_mem_to_mem_wreg", false,-1);
        tracep->declBit(c+41,"top mem_to_mem_wb_wreg", false,-1);
        tracep->declBus(c+971,"top id_to_id_ex_imm", false,-1, 19,0);
        tracep->declBus(c+42,"top id_ex_to_ex_imm", false,-1, 19,0);
        tracep->declBit(c+972,"top id_to_id_ex_imm_sel", false,-1);
        tracep->declBit(c+43,"top id_ex_to_ex_imm_sel", false,-1);
        tracep->declBit(c+44,"top mem_wb_to_regfile_we", false,-1);
        tracep->declBus(c+45,"top mem_wb_to_regfile_waddr", false,-1, 4,0);
        tracep->declBus(c+29,"top ex_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+40,"top ex_to_id_back_wreg", false,-1);
        tracep->declQuad(c+33,"top ex_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+30,"top mem_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+41,"top mem_to_id_back_wreg", false,-1);
        tracep->declQuad(c+35,"top mem_to_id_back_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"top mem_wb_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBit(c+44,"top mem_wb_to_id_back_wreg", false,-1);
        tracep->declQuad(c+31,"top mem_wb_to_id_back_wdata", false,-1, 63,0);
        tracep->declBit(c+46,"top ex_branch_flag", false,-1);
        tracep->declQuad(c+47,"top ex_to_ctrl_pc_new", false,-1, 63,0);
        tracep->declBus(c+49,"top ctrl_to_pc_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+50,"top ctrl_to_if_id_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+51,"top ctrl_to_id_ex_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+52,"top ctrl_to_ex_mem_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+53,"top ctrl_to_mem_wb_ctrl_signal", false,-1, 1,0);
        tracep->declQuad(c+47,"top ctrl_to_pc_pc_new", false,-1, 63,0);
        tracep->declQuad(c+54,"top pc_to_if_id_pc", false,-1, 63,0);
        tracep->declBit(c+1011,"top pc0 clk", false,-1);
        tracep->declBit(c+1012,"top pc0 rst", false,-1);
        tracep->declBus(c+49,"top pc0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+47,"top pc0 pc_new_i", false,-1, 63,0);
        tracep->declQuad(c+1015,"top pc0 pc_ram_o", false,-1, 63,0);
        tracep->declQuad(c+54,"top pc0 pc_pipeline_o", false,-1, 63,0);
        tracep->declBit(c+1018,"top pc0 icache_data_wen_o", false,-1);
        tracep->declBit(c+1017,"top pc0 icache_req_valid_o", false,-1);
        tracep->declQuad(c+56,"top pc0 pc_ram_t", false,-1, 63,0);
        tracep->declBit(c+58,"top pc0 pc_ram_wen", false,-1);
        tracep->declQuad(c+59,"top pc0 pc_pipeline_t", false,-1, 63,0);
        tracep->declBit(c+58,"top pc0 pc_pipeline_wen", false,-1);
        tracep->declBit(c+58,"top pc0 icache_req_valid_wen", false,-1);
        tracep->declBus(c+1091,"top pc0 pc_ram WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1092,"top pc0 pc_ram RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top pc0 pc_ram clk", false,-1);
        tracep->declBit(c+1012,"top pc0 pc_ram rst", false,-1);
        tracep->declQuad(c+1015,"top pc0 pc_ram din", false,-1, 63,0);
        tracep->declQuad(c+56,"top pc0 pc_ram dout", false,-1, 63,0);
        tracep->declBit(c+58,"top pc0 pc_ram wen", false,-1);
        tracep->declBus(c+1094,"top pc0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1094,"top pc0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top pc0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1015,"top pc0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+49,"top pc0 mux1 key", false,-1, 1,0);
        tracep->declQuad(c+1095,"top pc0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+61,"top pc0 mux1 lut", false,-1, 131,0);
        tracep->declBus(c+1094,"top pc0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1094,"top pc0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top pc0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1015,"top pc0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+49,"top pc0 mux1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1095,"top pc0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+61,"top pc0 mux1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1098,"top pc0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+66+i*3,"top pc0 mux1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+72+i*1,"top pc0 mux1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+74+i*2,"top pc0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+78,"top pc0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+80,"top pc0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1099,"top pc0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1091,"top pc0 pc_pipeline WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1092,"top pc0 pc_pipeline RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top pc0 pc_pipeline clk", false,-1);
        tracep->declBit(c+1012,"top pc0 pc_pipeline rst", false,-1);
        tracep->declQuad(c+59,"top pc0 pc_pipeline din", false,-1, 63,0);
        tracep->declQuad(c+54,"top pc0 pc_pipeline dout", false,-1, 63,0);
        tracep->declBit(c+58,"top pc0 pc_pipeline wen", false,-1);
        tracep->declBus(c+1094,"top pc0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1094,"top pc0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top pc0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+59,"top pc0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+49,"top pc0 mux3 key", false,-1, 1,0);
        tracep->declQuad(c+1095,"top pc0 mux3 default_out", false,-1, 63,0);
        tracep->declArray(c+81,"top pc0 mux3 lut", false,-1, 131,0);
        tracep->declBus(c+1094,"top pc0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1094,"top pc0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top pc0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+59,"top pc0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+49,"top pc0 mux3 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1095,"top pc0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+81,"top pc0 mux3 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1098,"top pc0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+86+i*3,"top pc0 mux3 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+92+i*1,"top pc0 mux3 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+94+i*2,"top pc0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+98,"top pc0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+100,"top pc0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1099,"top pc0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1097,"top pc0 icache_req_valid WIDTH", false,-1, 31,0);
        tracep->declBus(c+1100,"top pc0 icache_req_valid RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1011,"top pc0 icache_req_valid clk", false,-1);
        tracep->declBit(c+1012,"top pc0 icache_req_valid rst", false,-1);
        tracep->declBus(c+1089,"top pc0 icache_req_valid din", false,-1, 0,0);
        tracep->declBus(c+1017,"top pc0 icache_req_valid dout", false,-1, 0,0);
        tracep->declBit(c+58,"top pc0 icache_req_valid wen", false,-1);
        tracep->declBit(c+1011,"top if_id0 clk", false,-1);
        tracep->declBit(c+1012,"top if_id0 rst", false,-1);
        tracep->declBus(c+1014,"top if_id0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+50,"top if_id0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+54,"top if_id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+963,"top if_id0 if_inst_o", false,-1, 31,0);
        tracep->declQuad(c+19,"top if_id0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+101,"top if_id0 pc_t", false,-1, 63,0);
        tracep->declBit(c+103,"top if_id0 pc_wen", false,-1);
        tracep->declBus(c+1090,"top if_id0 if_inst_t", false,-1, 31,0);
        tracep->declBus(c+104,"top if_id0 state", false,-1, 1,0);
        tracep->declBit(c+103,"top if_id0 state_wen", false,-1);
        tracep->declBus(c+1091,"top if_id0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top if_id0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top if_id0 reg1 clk", false,-1);
        tracep->declBit(c+1012,"top if_id0 reg1 rst", false,-1);
        tracep->declQuad(c+101,"top if_id0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+19,"top if_id0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+103,"top if_id0 reg1 wen", false,-1);
        tracep->declBus(c+1094,"top if_id0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1094,"top if_id0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top if_id0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+101,"top if_id0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+50,"top if_id0 mux1 key", false,-1, 1,0);
        tracep->declQuad(c+1095,"top if_id0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+105,"top if_id0 mux1 lut", false,-1, 131,0);
        tracep->declBus(c+1094,"top if_id0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1094,"top if_id0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top if_id0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top if_id0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+101,"top if_id0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+50,"top if_id0 mux1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1095,"top if_id0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+105,"top if_id0 mux1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1098,"top if_id0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+110+i*3,"top if_id0 mux1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+116+i*1,"top if_id0 mux1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+118+i*2,"top if_id0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+122,"top if_id0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+124,"top if_id0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1099,"top if_id0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top if_id0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1101,"top if_id0 reg2 RESET_VAL", false,-1, 1,0);
        tracep->declBit(c+1011,"top if_id0 reg2 clk", false,-1);
        tracep->declBit(c+1012,"top if_id0 reg2 rst", false,-1);
        tracep->declBus(c+50,"top if_id0 reg2 din", false,-1, 1,0);
        tracep->declBus(c+104,"top if_id0 reg2 dout", false,-1, 1,0);
        tracep->declBit(c+103,"top if_id0 reg2 wen", false,-1);
        tracep->declBus(c+963,"top id0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+942,"top id0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+944,"top id0 rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+33,"top id0 ex_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+29,"top id0 ex_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+40,"top id0 ex_back_wreg_i", false,-1);
        tracep->declQuad(c+35,"top id0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+30,"top id0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+41,"top id0 mem_back_wreg_i", false,-1);
        tracep->declQuad(c+31,"top id0 mem_wb_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+45,"top id0 mem_wb_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+44,"top id0 mem_wb_back_wreg_i", false,-1);
        tracep->declQuad(c+19,"top id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+964,"top id0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+965,"top id0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+967,"top id0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+968,"top id0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+969,"top id0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+946,"top id0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+948,"top id0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+966,"top id0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+970,"top id0 wreg_o", false,-1);
        tracep->declBus(c+971,"top id0 imm_o", false,-1, 19,0);
        tracep->declBit(c+972,"top id0 imm_sel_o", false,-1);
        tracep->declQuad(c+19,"top id0 pc_o", false,-1, 63,0);
        tracep->declBus(c+1094,"top id0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top id0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top id0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+970,"top id0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+967,"top id0 mux1 key", false,-1, 6,0);
        tracep->declBus(c+1103,"top id0 mux1 default_out", false,-1, 0,0);
        tracep->declBus(c+1104,"top id0 mux1 lut", false,-1, 15,0);
        tracep->declBus(c+1094,"top id0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top id0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top id0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top id0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+970,"top id0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+967,"top id0 mux1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1103,"top id0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1104,"top id0 mux1 i0 lut", false,-1, 15,0);
        tracep->declBus(c+1105,"top id0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1+i*1,"top id0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+3+i*1,"top id0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"top id0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+973,"top id0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+974,"top id0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1099,"top id0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1106,"top id0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top id0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1107,"top id0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+971,"top id0 mux2 out", false,-1, 19,0);
        tracep->declBus(c+967,"top id0 mux2 key", false,-1, 6,0);
        tracep->declBus(c+975,"top id0 mux2 default_out", false,-1, 19,0);
        tracep->declArray(c+976,"top id0 mux2 lut", false,-1, 80,0);
        tracep->declBus(c+1106,"top id0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top id0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1107,"top id0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top id0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+971,"top id0 mux2 i0 out", false,-1, 19,0);
        tracep->declBus(c+967,"top id0 mux2 i0 key", false,-1, 6,0);
        tracep->declBus(c+975,"top id0 mux2 i0 default_out", false,-1, 19,0);
        tracep->declArray(c+976,"top id0 mux2 i0 lut", false,-1, 80,0);
        tracep->declBus(c+1108,"top id0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+979+i*1,"top id0 mux2 i0 pair_list", true,(i+0), 26,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+982+i*1,"top id0 mux2 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+985+i*1,"top id0 mux2 i0 data_list", true,(i+0), 19,0);}}
        tracep->declBus(c+988,"top id0 mux2 i0 lut_out", false,-1, 19,0);
        tracep->declBit(c+989,"top id0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1109,"top id0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1011,"top regfile0 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 rst", false,-1);
        tracep->declBit(c+44,"top regfile0 we_i", false,-1);
        tracep->declBus(c+45,"top regfile0 waddr_i", false,-1, 4,0);
        tracep->declQuad(c+31,"top regfile0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+964,"top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declQuad(c+942,"top regfile0 rdata1_o", false,-1, 63,0);
        tracep->declBus(c+965,"top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declQuad(c+944,"top regfile0 rdata2_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+125+i*2,"top regfile0 diff_reg_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+189,"top regfile0 out_x1", false,-1, 63,0);
        tracep->declQuad(c+191,"top regfile0 out_x2", false,-1, 63,0);
        tracep->declQuad(c+193,"top regfile0 out_x3", false,-1, 63,0);
        tracep->declQuad(c+195,"top regfile0 out_x4", false,-1, 63,0);
        tracep->declQuad(c+197,"top regfile0 out_x5", false,-1, 63,0);
        tracep->declQuad(c+199,"top regfile0 out_x6", false,-1, 63,0);
        tracep->declQuad(c+201,"top regfile0 out_x7", false,-1, 63,0);
        tracep->declQuad(c+203,"top regfile0 out_x8", false,-1, 63,0);
        tracep->declQuad(c+205,"top regfile0 out_x9", false,-1, 63,0);
        tracep->declQuad(c+207,"top regfile0 out_x10", false,-1, 63,0);
        tracep->declQuad(c+209,"top regfile0 out_x11", false,-1, 63,0);
        tracep->declQuad(c+211,"top regfile0 out_x12", false,-1, 63,0);
        tracep->declQuad(c+213,"top regfile0 out_x13", false,-1, 63,0);
        tracep->declQuad(c+215,"top regfile0 out_x14", false,-1, 63,0);
        tracep->declQuad(c+217,"top regfile0 out_x15", false,-1, 63,0);
        tracep->declQuad(c+219,"top regfile0 out_x16", false,-1, 63,0);
        tracep->declQuad(c+221,"top regfile0 out_x17", false,-1, 63,0);
        tracep->declQuad(c+223,"top regfile0 out_x18", false,-1, 63,0);
        tracep->declQuad(c+225,"top regfile0 out_x19", false,-1, 63,0);
        tracep->declQuad(c+227,"top regfile0 out_x20", false,-1, 63,0);
        tracep->declQuad(c+229,"top regfile0 out_x21", false,-1, 63,0);
        tracep->declQuad(c+231,"top regfile0 out_x22", false,-1, 63,0);
        tracep->declQuad(c+233,"top regfile0 out_x23", false,-1, 63,0);
        tracep->declQuad(c+235,"top regfile0 out_x24", false,-1, 63,0);
        tracep->declQuad(c+237,"top regfile0 out_x25", false,-1, 63,0);
        tracep->declQuad(c+239,"top regfile0 out_x26", false,-1, 63,0);
        tracep->declQuad(c+241,"top regfile0 out_x27", false,-1, 63,0);
        tracep->declQuad(c+243,"top regfile0 out_x28", false,-1, 63,0);
        tracep->declQuad(c+245,"top regfile0 out_x29", false,-1, 63,0);
        tracep->declQuad(c+247,"top regfile0 out_x30", false,-1, 63,0);
        tracep->declQuad(c+249,"top regfile0 out_x31", false,-1, 63,0);
        tracep->declBit(c+251,"top regfile0 wen_x1", false,-1);
        tracep->declBit(c+252,"top regfile0 wen_x2", false,-1);
        tracep->declBit(c+253,"top regfile0 wen_x3", false,-1);
        tracep->declBit(c+254,"top regfile0 wen_x4", false,-1);
        tracep->declBit(c+255,"top regfile0 wen_x5", false,-1);
        tracep->declBit(c+256,"top regfile0 wen_x6", false,-1);
        tracep->declBit(c+257,"top regfile0 wen_x7", false,-1);
        tracep->declBit(c+258,"top regfile0 wen_x8", false,-1);
        tracep->declBit(c+259,"top regfile0 wen_x9", false,-1);
        tracep->declBit(c+260,"top regfile0 wen_x10", false,-1);
        tracep->declBit(c+261,"top regfile0 wen_x11", false,-1);
        tracep->declBit(c+262,"top regfile0 wen_x12", false,-1);
        tracep->declBit(c+263,"top regfile0 wen_x13", false,-1);
        tracep->declBit(c+264,"top regfile0 wen_x14", false,-1);
        tracep->declBit(c+265,"top regfile0 wen_x15", false,-1);
        tracep->declBit(c+266,"top regfile0 wen_x16", false,-1);
        tracep->declBit(c+267,"top regfile0 wen_x17", false,-1);
        tracep->declBit(c+268,"top regfile0 wen_x18", false,-1);
        tracep->declBit(c+269,"top regfile0 wen_x19", false,-1);
        tracep->declBit(c+270,"top regfile0 wen_x20", false,-1);
        tracep->declBit(c+271,"top regfile0 wen_x21", false,-1);
        tracep->declBit(c+272,"top regfile0 wen_x22", false,-1);
        tracep->declBit(c+273,"top regfile0 wen_x23", false,-1);
        tracep->declBit(c+274,"top regfile0 wen_x24", false,-1);
        tracep->declBit(c+275,"top regfile0 wen_x25", false,-1);
        tracep->declBit(c+276,"top regfile0 wen_x26", false,-1);
        tracep->declBit(c+277,"top regfile0 wen_x27", false,-1);
        tracep->declBit(c+278,"top regfile0 wen_x28", false,-1);
        tracep->declBit(c+279,"top regfile0 wen_x29", false,-1);
        tracep->declBit(c+280,"top regfile0 wen_x30", false,-1);
        tracep->declBit(c+281,"top regfile0 wen_x31", false,-1);
        tracep->declQuad(c+990,"top regfile0 rdata1_t", false,-1, 63,0);
        tracep->declQuad(c+992,"top regfile0 rdata2_t", false,-1, 63,0);
        tracep->declBus(c+1091,"top regfile0 x1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x1 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x1 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x1 din", false,-1, 63,0);
        tracep->declQuad(c+189,"top regfile0 x1 dout", false,-1, 63,0);
        tracep->declBit(c+251,"top regfile0 x1 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x2 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x2 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x2 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x2 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x2 din", false,-1, 63,0);
        tracep->declQuad(c+191,"top regfile0 x2 dout", false,-1, 63,0);
        tracep->declBit(c+252,"top regfile0 x2 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x3 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x3 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x3 din", false,-1, 63,0);
        tracep->declQuad(c+193,"top regfile0 x3 dout", false,-1, 63,0);
        tracep->declBit(c+253,"top regfile0 x3 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x4 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x4 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x4 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x4 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x4 din", false,-1, 63,0);
        tracep->declQuad(c+195,"top regfile0 x4 dout", false,-1, 63,0);
        tracep->declBit(c+254,"top regfile0 x4 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x5 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x5 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x5 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x5 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x5 din", false,-1, 63,0);
        tracep->declQuad(c+197,"top regfile0 x5 dout", false,-1, 63,0);
        tracep->declBit(c+255,"top regfile0 x5 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x6 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x6 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x6 din", false,-1, 63,0);
        tracep->declQuad(c+199,"top regfile0 x6 dout", false,-1, 63,0);
        tracep->declBit(c+256,"top regfile0 x6 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x7 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x7 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x7 din", false,-1, 63,0);
        tracep->declQuad(c+201,"top regfile0 x7 dout", false,-1, 63,0);
        tracep->declBit(c+257,"top regfile0 x7 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x8 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x8 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x8 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x8 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x8 din", false,-1, 63,0);
        tracep->declQuad(c+203,"top regfile0 x8 dout", false,-1, 63,0);
        tracep->declBit(c+258,"top regfile0 x8 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x9 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x9 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x9 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x9 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x9 din", false,-1, 63,0);
        tracep->declQuad(c+205,"top regfile0 x9 dout", false,-1, 63,0);
        tracep->declBit(c+259,"top regfile0 x9 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x10 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x10 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x10 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x10 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x10 din", false,-1, 63,0);
        tracep->declQuad(c+207,"top regfile0 x10 dout", false,-1, 63,0);
        tracep->declBit(c+260,"top regfile0 x10 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x11 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x11 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x11 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x11 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x11 din", false,-1, 63,0);
        tracep->declQuad(c+209,"top regfile0 x11 dout", false,-1, 63,0);
        tracep->declBit(c+261,"top regfile0 x11 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x12 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x12 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x12 din", false,-1, 63,0);
        tracep->declQuad(c+211,"top regfile0 x12 dout", false,-1, 63,0);
        tracep->declBit(c+262,"top regfile0 x12 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x13 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x13 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x13 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x13 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x13 din", false,-1, 63,0);
        tracep->declQuad(c+213,"top regfile0 x13 dout", false,-1, 63,0);
        tracep->declBit(c+263,"top regfile0 x13 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x14 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x14 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x14 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x14 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x14 din", false,-1, 63,0);
        tracep->declQuad(c+215,"top regfile0 x14 dout", false,-1, 63,0);
        tracep->declBit(c+264,"top regfile0 x14 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x15 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x15 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x15 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x15 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x15 din", false,-1, 63,0);
        tracep->declQuad(c+217,"top regfile0 x15 dout", false,-1, 63,0);
        tracep->declBit(c+265,"top regfile0 x15 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x16 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x16 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x16 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x16 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x16 din", false,-1, 63,0);
        tracep->declQuad(c+219,"top regfile0 x16 dout", false,-1, 63,0);
        tracep->declBit(c+266,"top regfile0 x16 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x17 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x17 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x17 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x17 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x17 din", false,-1, 63,0);
        tracep->declQuad(c+221,"top regfile0 x17 dout", false,-1, 63,0);
        tracep->declBit(c+267,"top regfile0 x17 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x18 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x18 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x18 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x18 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x18 din", false,-1, 63,0);
        tracep->declQuad(c+223,"top regfile0 x18 dout", false,-1, 63,0);
        tracep->declBit(c+268,"top regfile0 x18 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x19 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x19 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x19 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x19 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x19 din", false,-1, 63,0);
        tracep->declQuad(c+225,"top regfile0 x19 dout", false,-1, 63,0);
        tracep->declBit(c+269,"top regfile0 x19 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x20 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x20 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x20 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x20 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x20 din", false,-1, 63,0);
        tracep->declQuad(c+227,"top regfile0 x20 dout", false,-1, 63,0);
        tracep->declBit(c+270,"top regfile0 x20 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x21 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x21 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x21 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x21 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x21 din", false,-1, 63,0);
        tracep->declQuad(c+229,"top regfile0 x21 dout", false,-1, 63,0);
        tracep->declBit(c+271,"top regfile0 x21 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x22 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x22 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x22 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x22 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x22 din", false,-1, 63,0);
        tracep->declQuad(c+231,"top regfile0 x22 dout", false,-1, 63,0);
        tracep->declBit(c+272,"top regfile0 x22 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x23 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x23 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x23 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x23 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x23 din", false,-1, 63,0);
        tracep->declQuad(c+233,"top regfile0 x23 dout", false,-1, 63,0);
        tracep->declBit(c+273,"top regfile0 x23 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x24 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x24 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x24 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x24 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x24 din", false,-1, 63,0);
        tracep->declQuad(c+235,"top regfile0 x24 dout", false,-1, 63,0);
        tracep->declBit(c+274,"top regfile0 x24 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x25 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x25 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x25 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x25 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x25 din", false,-1, 63,0);
        tracep->declQuad(c+237,"top regfile0 x25 dout", false,-1, 63,0);
        tracep->declBit(c+275,"top regfile0 x25 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x26 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x26 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x26 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x26 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x26 din", false,-1, 63,0);
        tracep->declQuad(c+239,"top regfile0 x26 dout", false,-1, 63,0);
        tracep->declBit(c+276,"top regfile0 x26 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x27 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x27 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x27 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x27 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x27 din", false,-1, 63,0);
        tracep->declQuad(c+241,"top regfile0 x27 dout", false,-1, 63,0);
        tracep->declBit(c+277,"top regfile0 x27 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x28 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x28 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x28 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x28 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x28 din", false,-1, 63,0);
        tracep->declQuad(c+243,"top regfile0 x28 dout", false,-1, 63,0);
        tracep->declBit(c+278,"top regfile0 x28 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x29 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x29 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x29 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x29 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x29 din", false,-1, 63,0);
        tracep->declQuad(c+245,"top regfile0 x29 dout", false,-1, 63,0);
        tracep->declBit(c+279,"top regfile0 x29 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x30 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x30 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x30 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x30 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x30 din", false,-1, 63,0);
        tracep->declQuad(c+247,"top regfile0 x30 dout", false,-1, 63,0);
        tracep->declBit(c+280,"top regfile0 x30 wen", false,-1);
        tracep->declBus(c+1091,"top regfile0 x31 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top regfile0 x31 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top regfile0 x31 clk", false,-1);
        tracep->declBit(c+1012,"top regfile0 x31 rst", false,-1);
        tracep->declQuad(c+31,"top regfile0 x31 din", false,-1, 63,0);
        tracep->declQuad(c+249,"top regfile0 x31 dout", false,-1, 63,0);
        tracep->declBit(c+281,"top regfile0 x31 wen", false,-1);
        tracep->declBus(c+1110,"top regfile0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top regfile0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top regfile0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+990,"top regfile0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+964,"top regfile0 mux1 key", false,-1, 4,0);
        tracep->declQuad(c+1095,"top regfile0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+282,"top regfile0 mux1 lut", false,-1, 2138,0);
        tracep->declBus(c+1110,"top regfile0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top regfile0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top regfile0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top regfile0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+990,"top regfile0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+964,"top regfile0 mux1 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1095,"top regfile0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+282,"top regfile0 mux1 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1112,"top regfile0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+349+i*3,"top regfile0 mux1 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+442+i*1,"top regfile0 mux1 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+473+i*2,"top regfile0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+994,"top regfile0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+996,"top regfile0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1113,"top regfile0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1110,"top regfile0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top regfile0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top regfile0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+992,"top regfile0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+965,"top regfile0 mux2 key", false,-1, 4,0);
        tracep->declQuad(c+1095,"top regfile0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+535,"top regfile0 mux2 lut", false,-1, 2138,0);
        tracep->declBus(c+1110,"top regfile0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top regfile0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top regfile0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top regfile0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+992,"top regfile0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+965,"top regfile0 mux2 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1095,"top regfile0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+535,"top regfile0 mux2 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1112,"top regfile0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+602+i*3,"top regfile0 mux2 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+695+i*1,"top regfile0 mux2 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+726+i*2,"top regfile0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+997,"top regfile0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+999,"top regfile0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1113,"top regfile0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1011,"top id_ex0 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 rst", false,-1);
        tracep->declBus(c+964,"top id_ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+965,"top id_ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+967,"top id_ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+968,"top id_ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+969,"top id_ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+946,"top id_ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+948,"top id_ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+966,"top id_ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+970,"top id_ex0 wreg_i", false,-1);
        tracep->declBus(c+971,"top id_ex0 imm_i", false,-1, 19,0);
        tracep->declBit(c+972,"top id_ex0 imm_sel_i", false,-1);
        tracep->declQuad(c+19,"top id_ex0 pc_i", false,-1, 63,0);
        tracep->declBus(c+51,"top id_ex0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+27,"top id_ex0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+28,"top id_ex0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+37,"top id_ex0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+38,"top id_ex0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+39,"top id_ex0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+23,"top id_ex0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+25,"top id_ex0 rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+29,"top id_ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+40,"top id_ex0 wreg_o", false,-1);
        tracep->declBus(c+42,"top id_ex0 imm_o", false,-1, 19,0);
        tracep->declBit(c+43,"top id_ex0 imm_sel_o", false,-1);
        tracep->declQuad(c+21,"top id_ex0 pc_o", false,-1, 63,0);
        tracep->declBus(c+950,"top id_ex0 rs1_addr_t", false,-1, 4,0);
        tracep->declBit(c+788,"top id_ex0 rs1_addr_wen", false,-1);
        tracep->declBus(c+951,"top id_ex0 rs2_addr_t", false,-1, 4,0);
        tracep->declBit(c+788,"top id_ex0 rs2_addr_wen", false,-1);
        tracep->declBus(c+952,"top id_ex0 opcode_t", false,-1, 6,0);
        tracep->declBit(c+788,"top id_ex0 opcode_wen", false,-1);
        tracep->declBus(c+953,"top id_ex0 funct3_t", false,-1, 2,0);
        tracep->declBit(c+788,"top id_ex0 funct3_wen", false,-1);
        tracep->declBus(c+954,"top id_ex0 funct7_t", false,-1, 6,0);
        tracep->declBit(c+788,"top id_ex0 funct7_wen", false,-1);
        tracep->declQuad(c+955,"top id_ex0 rs1_data_t", false,-1, 63,0);
        tracep->declBit(c+788,"top id_ex0 rs1_data_wen", false,-1);
        tracep->declQuad(c+957,"top id_ex0 rs2_data_t", false,-1, 63,0);
        tracep->declBit(c+788,"top id_ex0 rs2_data_wen", false,-1);
        tracep->declBus(c+959,"top id_ex0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+788,"top id_ex0 rd_addr_wen", false,-1);
        tracep->declBit(c+960,"top id_ex0 wreg_t", false,-1);
        tracep->declBit(c+788,"top id_ex0 wreg_wen", false,-1);
        tracep->declBus(c+961,"top id_ex0 imm_t", false,-1, 19,0);
        tracep->declBit(c+788,"top id_ex0 imm_wen", false,-1);
        tracep->declBit(c+962,"top id_ex0 imm_sel_t", false,-1);
        tracep->declBit(c+788,"top id_ex0 imm_sel_wen", false,-1);
        tracep->declQuad(c+789,"top id_ex0 pc_t", false,-1, 63,0);
        tracep->declBit(c+788,"top id_ex0 pc_wen", false,-1);
        tracep->declBus(c+1111,"top id_ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top id_ex0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1011,"top id_ex0 reg1 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg1 rst", false,-1);
        tracep->declBus(c+950,"top id_ex0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+27,"top id_ex0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+788,"top id_ex0 reg1 wen", false,-1);
        tracep->declBus(c+1111,"top id_ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top id_ex0 reg2 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1011,"top id_ex0 reg2 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg2 rst", false,-1);
        tracep->declBus(c+951,"top id_ex0 reg2 din", false,-1, 4,0);
        tracep->declBus(c+28,"top id_ex0 reg2 dout", false,-1, 4,0);
        tracep->declBit(c+788,"top id_ex0 reg2 wen", false,-1);
        tracep->declBus(c+1102,"top id_ex0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1115,"top id_ex0 reg3 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1011,"top id_ex0 reg3 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg3 rst", false,-1);
        tracep->declBus(c+952,"top id_ex0 reg3 din", false,-1, 6,0);
        tracep->declBus(c+37,"top id_ex0 reg3 dout", false,-1, 6,0);
        tracep->declBit(c+788,"top id_ex0 reg3 wen", false,-1);
        tracep->declBus(c+1106,"top id_ex0 reg4 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1116,"top id_ex0 reg4 RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+1011,"top id_ex0 reg4 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg4 rst", false,-1);
        tracep->declBus(c+953,"top id_ex0 reg4 din", false,-1, 2,0);
        tracep->declBus(c+38,"top id_ex0 reg4 dout", false,-1, 2,0);
        tracep->declBit(c+788,"top id_ex0 reg4 wen", false,-1);
        tracep->declBus(c+1102,"top id_ex0 reg5 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1115,"top id_ex0 reg5 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1011,"top id_ex0 reg5 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg5 rst", false,-1);
        tracep->declBus(c+954,"top id_ex0 reg5 din", false,-1, 6,0);
        tracep->declBus(c+39,"top id_ex0 reg5 dout", false,-1, 6,0);
        tracep->declBit(c+788,"top id_ex0 reg5 wen", false,-1);
        tracep->declBus(c+1091,"top id_ex0 reg6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top id_ex0 reg6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top id_ex0 reg6 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg6 rst", false,-1);
        tracep->declQuad(c+955,"top id_ex0 reg6 din", false,-1, 63,0);
        tracep->declQuad(c+23,"top id_ex0 reg6 dout", false,-1, 63,0);
        tracep->declBit(c+788,"top id_ex0 reg6 wen", false,-1);
        tracep->declBus(c+1091,"top id_ex0 reg7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top id_ex0 reg7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top id_ex0 reg7 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg7 rst", false,-1);
        tracep->declQuad(c+957,"top id_ex0 reg7 din", false,-1, 63,0);
        tracep->declQuad(c+25,"top id_ex0 reg7 dout", false,-1, 63,0);
        tracep->declBit(c+788,"top id_ex0 reg7 wen", false,-1);
        tracep->declBus(c+1111,"top id_ex0 reg8 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top id_ex0 reg8 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1011,"top id_ex0 reg8 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg8 rst", false,-1);
        tracep->declBus(c+959,"top id_ex0 reg8 din", false,-1, 4,0);
        tracep->declBus(c+29,"top id_ex0 reg8 dout", false,-1, 4,0);
        tracep->declBit(c+788,"top id_ex0 reg8 wen", false,-1);
        tracep->declBus(c+1097,"top id_ex0 reg9 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1100,"top id_ex0 reg9 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1011,"top id_ex0 reg9 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg9 rst", false,-1);
        tracep->declBus(c+960,"top id_ex0 reg9 din", false,-1, 0,0);
        tracep->declBus(c+40,"top id_ex0 reg9 dout", false,-1, 0,0);
        tracep->declBit(c+788,"top id_ex0 reg9 wen", false,-1);
        tracep->declBus(c+1107,"top id_ex0 reg10 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1117,"top id_ex0 reg10 RESET_VAL", false,-1, 19,0);
        tracep->declBit(c+1011,"top id_ex0 reg10 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg10 rst", false,-1);
        tracep->declBus(c+961,"top id_ex0 reg10 din", false,-1, 19,0);
        tracep->declBus(c+42,"top id_ex0 reg10 dout", false,-1, 19,0);
        tracep->declBit(c+788,"top id_ex0 reg10 wen", false,-1);
        tracep->declBus(c+1097,"top id_ex0 reg_imm_sel WIDTH", false,-1, 31,0);
        tracep->declBus(c+1100,"top id_ex0 reg_imm_sel RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1011,"top id_ex0 reg_imm_sel clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg_imm_sel rst", false,-1);
        tracep->declBus(c+962,"top id_ex0 reg_imm_sel din", false,-1, 0,0);
        tracep->declBus(c+43,"top id_ex0 reg_imm_sel dout", false,-1, 0,0);
        tracep->declBit(c+788,"top id_ex0 reg_imm_sel wen", false,-1);
        tracep->declBus(c+1091,"top id_ex0 reg12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top id_ex0 reg12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top id_ex0 reg12 clk", false,-1);
        tracep->declBit(c+1012,"top id_ex0 reg12 rst", false,-1);
        tracep->declQuad(c+789,"top id_ex0 reg12 din", false,-1, 63,0);
        tracep->declQuad(c+21,"top id_ex0 reg12 dout", false,-1, 63,0);
        tracep->declBit(c+788,"top id_ex0 reg12 wen", false,-1);
        tracep->declBus(c+27,"top ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+28,"top ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+37,"top ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+38,"top ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+39,"top ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+23,"top ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+25,"top ex0 rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"top ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+40,"top ex0 wreg_i", false,-1);
        tracep->declBus(c+42,"top ex0 imm_i", false,-1, 19,0);
        tracep->declBit(c+43,"top ex0 imm_sel_i", false,-1);
        tracep->declQuad(c+21,"top ex0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+35,"top ex0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+30,"top ex0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+41,"top ex0 mem_back_wreg_i", false,-1);
        tracep->declBus(c+29,"top ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+40,"top ex0 wreg_o", false,-1);
        tracep->declQuad(c+33,"top ex0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+29,"top ex0 ex_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+40,"top ex0 ex_back_wreg_o", false,-1);
        tracep->declQuad(c+33,"top ex0 ex_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+46,"top ex0 branch_flag_o", false,-1);
        tracep->declQuad(c+47,"top ex0 pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+791,"top ex0 rs1_data", false,-1, 63,0);
        tracep->declQuad(c+793,"top ex0 rs2_data", false,-1, 63,0);
        tracep->declBus(c+795,"top ex0 wdata_addiw", false,-1, 31,0);
        tracep->declQuad(c+33,"top ex0 wdata_t", false,-1, 63,0);
        tracep->declQuad(c+796,"top ex0 wdata_t_add", false,-1, 63,0);
        tracep->declQuad(c+798,"top ex0 wdata_t_addi", false,-1, 63,0);
        tracep->declQuad(c+800,"top ex0 wdata_t_addiw", false,-1, 63,0);
        tracep->declQuad(c+802,"top ex0 wdata_t_auipc", false,-1, 63,0);
        tracep->declQuad(c+804,"top ex0 wdata_t_lui", false,-1, 63,0);
        tracep->declQuad(c+806,"top ex0 wdata_t_sub", false,-1, 63,0);
        tracep->declQuad(c+808,"top ex0 wdata_opcode_J", false,-1, 63,0);
        tracep->declQuad(c+810,"top ex0 wdata_opcode_R", false,-1, 63,0);
        tracep->declQuad(c+802,"top ex0 wdata_opcode_U_auipc", false,-1, 63,0);
        tracep->declQuad(c+804,"top ex0 wdata_opcode_U_lui", false,-1, 63,0);
        tracep->declQuad(c+812,"top ex0 wdata_funct3_add_sub_mul", false,-1, 63,0);
        tracep->declBit(c+46,"top ex0 branch_flag_t", false,-1);
        tracep->declBit(c+814,"top ex0 branch_flag_t_beq", false,-1);
        tracep->declBit(c+815,"top ex0 branch_flag_t_bge", false,-1);
        tracep->declQuad(c+816,"top ex0 pc_new_jal", false,-1, 63,0);
        tracep->declBus(c+1118,"top ex0 mux_t NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top ex0 mux_t KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top ex0 mux_t DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+33,"top ex0 mux_t out", false,-1, 63,0);
        tracep->declBus(c+37,"top ex0 mux_t key", false,-1, 6,0);
        tracep->declQuad(c+1095,"top ex0 mux_t default_out", false,-1, 63,0);
        tracep->declArray(c+818,"top ex0 mux_t lut", false,-1, 283,0);
        tracep->declBus(c+1118,"top ex0 mux_t i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top ex0 mux_t i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top ex0 mux_t i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux_t i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+33,"top ex0 mux_t i0 out", false,-1, 63,0);
        tracep->declBus(c+37,"top ex0 mux_t i0 key", false,-1, 6,0);
        tracep->declQuad(c+1095,"top ex0 mux_t i0 default_out", false,-1, 63,0);
        tracep->declArray(c+818,"top ex0 mux_t i0 lut", false,-1, 283,0);
        tracep->declBus(c+1119,"top ex0 mux_t i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+827+i*3,"top ex0 mux_t i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+839+i*1,"top ex0 mux_t i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+843+i*2,"top ex0 mux_t i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+851,"top ex0 mux_t i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+853,"top ex0 mux_t i0 hit", false,-1);
        tracep->declBus(c+1120,"top ex0 mux_t i0 i", false,-1, 31,0);
        tracep->declBus(c+1106,"top ex0 mux_R NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1106,"top ex0 mux_R KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top ex0 mux_R DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+810,"top ex0 mux_R out", false,-1, 63,0);
        tracep->declBus(c+38,"top ex0 mux_R key", false,-1, 2,0);
        tracep->declQuad(c+1095,"top ex0 mux_R default_out", false,-1, 63,0);
        tracep->declArray(c+854,"top ex0 mux_R lut", false,-1, 200,0);
        tracep->declBus(c+1106,"top ex0 mux_R i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1106,"top ex0 mux_R i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top ex0 mux_R i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux_R i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+810,"top ex0 mux_R i0 out", false,-1, 63,0);
        tracep->declBus(c+38,"top ex0 mux_R i0 key", false,-1, 2,0);
        tracep->declQuad(c+1095,"top ex0 mux_R i0 default_out", false,-1, 63,0);
        tracep->declArray(c+854,"top ex0 mux_R i0 lut", false,-1, 200,0);
        tracep->declBus(c+1121,"top ex0 mux_R i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+861+i*3,"top ex0 mux_R i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+870+i*1,"top ex0 mux_R i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+873+i*2,"top ex0 mux_R i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+879,"top ex0 mux_R i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+881,"top ex0 mux_R i0 hit", false,-1);
        tracep->declBus(c+1109,"top ex0 mux_R i0 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top ex0 mux_funct3_asm NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top ex0 mux_funct3_asm KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top ex0 mux_funct3_asm DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+812,"top ex0 mux_funct3_asm out", false,-1, 63,0);
        tracep->declBus(c+39,"top ex0 mux_funct3_asm key", false,-1, 6,0);
        tracep->declQuad(c+1095,"top ex0 mux_funct3_asm default_out", false,-1, 63,0);
        tracep->declArray(c+882,"top ex0 mux_funct3_asm lut", false,-1, 141,0);
        tracep->declBus(c+1094,"top ex0 mux_funct3_asm i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1102,"top ex0 mux_funct3_asm i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top ex0 mux_funct3_asm i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ex0 mux_funct3_asm i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+812,"top ex0 mux_funct3_asm i0 out", false,-1, 63,0);
        tracep->declBus(c+39,"top ex0 mux_funct3_asm i0 key", false,-1, 6,0);
        tracep->declQuad(c+1095,"top ex0 mux_funct3_asm i0 default_out", false,-1, 63,0);
        tracep->declArray(c+882,"top ex0 mux_funct3_asm i0 lut", false,-1, 141,0);
        tracep->declBus(c+1119,"top ex0 mux_funct3_asm i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+887+i*3,"top ex0 mux_funct3_asm i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+893+i*1,"top ex0 mux_funct3_asm i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+895+i*2,"top ex0 mux_funct3_asm i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+899,"top ex0 mux_funct3_asm i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+901,"top ex0 mux_funct3_asm i0 hit", false,-1);
        tracep->declBus(c+1099,"top ex0 mux_funct3_asm i0 i", false,-1, 31,0);
        tracep->declBit(c+1011,"top ex_mem0 clk", false,-1);
        tracep->declBit(c+1012,"top ex_mem0 rst", false,-1);
        tracep->declBus(c+29,"top ex_mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+40,"top ex_mem0 wreg_i", false,-1);
        tracep->declQuad(c+33,"top ex_mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+52,"top ex_mem0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+30,"top ex_mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+41,"top ex_mem0 wreg_o", false,-1);
        tracep->declQuad(c+35,"top ex_mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+902,"top ex_mem0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+903,"top ex_mem0 rd_addr_wen", false,-1);
        tracep->declBit(c+904,"top ex_mem0 wreg_t", false,-1);
        tracep->declBit(c+903,"top ex_mem0 wreg_wen", false,-1);
        tracep->declQuad(c+905,"top ex_mem0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+903,"top ex_mem0 wdata_wen", false,-1);
        tracep->declBus(c+1111,"top ex_mem0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top ex_mem0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1011,"top ex_mem0 reg1 clk", false,-1);
        tracep->declBit(c+1012,"top ex_mem0 reg1 rst", false,-1);
        tracep->declBus(c+902,"top ex_mem0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+30,"top ex_mem0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+903,"top ex_mem0 reg1 wen", false,-1);
        tracep->declBus(c+1097,"top ex_mem0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1100,"top ex_mem0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1011,"top ex_mem0 reg2 clk", false,-1);
        tracep->declBit(c+1012,"top ex_mem0 reg2 rst", false,-1);
        tracep->declBus(c+904,"top ex_mem0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+41,"top ex_mem0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+903,"top ex_mem0 reg2 wen", false,-1);
        tracep->declBus(c+1091,"top ex_mem0 reg3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top ex_mem0 reg3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top ex_mem0 reg3 clk", false,-1);
        tracep->declBit(c+1012,"top ex_mem0 reg3 rst", false,-1);
        tracep->declQuad(c+905,"top ex_mem0 reg3 din", false,-1, 63,0);
        tracep->declQuad(c+35,"top ex_mem0 reg3 dout", false,-1, 63,0);
        tracep->declBit(c+903,"top ex_mem0 reg3 wen", false,-1);
        tracep->declBus(c+30,"top mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+41,"top mem0 wreg_i", false,-1);
        tracep->declQuad(c+35,"top mem0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+30,"top mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+41,"top mem0 wreg_o", false,-1);
        tracep->declQuad(c+35,"top mem0 wdata_o", false,-1, 63,0);
        tracep->declBus(c+30,"top mem0 mem_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+41,"top mem0 mem_back_wreg_o", false,-1);
        tracep->declQuad(c+35,"top mem0 mem_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+1011,"top mem_wb0 clk", false,-1);
        tracep->declBit(c+1012,"top mem_wb0 rst", false,-1);
        tracep->declBus(c+30,"top mem_wb0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+41,"top mem_wb0 wreg_i", false,-1);
        tracep->declQuad(c+35,"top mem_wb0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+53,"top mem_wb0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+31,"top mem_wb0 wdata_o", false,-1, 63,0);
        tracep->declBit(c+44,"top mem_wb0 wreg_o", false,-1);
        tracep->declBus(c+45,"top mem_wb0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+45,"top mem_wb0 mem_wb_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+44,"top mem_wb0 mem_wb_back_wreg_o", false,-1);
        tracep->declQuad(c+31,"top mem_wb0 mem_wb_back_wdata_o", false,-1, 63,0);
        tracep->declBit(c+907,"top mem_wb0 wdata_wen", false,-1);
        tracep->declBit(c+907,"top mem_wb0 wreg_wen", false,-1);
        tracep->declBit(c+907,"top mem_wb0 rd_addr_wen", false,-1);
        tracep->declBus(c+1091,"top mem_wb0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1095,"top mem_wb0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1011,"top mem_wb0 reg1 clk", false,-1);
        tracep->declBit(c+1012,"top mem_wb0 reg1 rst", false,-1);
        tracep->declQuad(c+35,"top mem_wb0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+31,"top mem_wb0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+907,"top mem_wb0 reg1 wen", false,-1);
        tracep->declBus(c+1097,"top mem_wb0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1100,"top mem_wb0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1011,"top mem_wb0 reg2 clk", false,-1);
        tracep->declBit(c+1012,"top mem_wb0 reg2 rst", false,-1);
        tracep->declBus(c+41,"top mem_wb0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+44,"top mem_wb0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+907,"top mem_wb0 reg2 wen", false,-1);
        tracep->declBus(c+1111,"top mem_wb0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top mem_wb0 reg3 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1011,"top mem_wb0 reg3 clk", false,-1);
        tracep->declBit(c+1012,"top mem_wb0 reg3 rst", false,-1);
        tracep->declBus(c+30,"top mem_wb0 reg3 din", false,-1, 4,0);
        tracep->declBus(c+45,"top mem_wb0 reg3 dout", false,-1, 4,0);
        tracep->declBit(c+907,"top mem_wb0 reg3 wen", false,-1);
        tracep->declBit(c+1011,"top ctrl0 clk", false,-1);
        tracep->declBit(c+1012,"top ctrl0 rst", false,-1);
        tracep->declBit(c+1013,"top ctrl0 icache_data_valid_i", false,-1);
        tracep->declBus(c+37,"top ctrl0 ex_opcode_i", false,-1, 6,0);
        tracep->declBus(c+38,"top ctrl0 ex_funct3_i", false,-1, 2,0);
        tracep->declQuad(c+47,"top ctrl0 ex_pc_new_i", false,-1, 63,0);
        tracep->declBit(c+46,"top ctrl0 ex_branch_flag_i", false,-1);
        tracep->declBus(c+49,"top ctrl0 ctrl_signal_pc_o", false,-1, 1,0);
        tracep->declBus(c+50,"top ctrl0 ctrl_signal_if_id_o", false,-1, 1,0);
        tracep->declBus(c+51,"top ctrl0 ctrl_signal_id_ex_o", false,-1, 1,0);
        tracep->declBus(c+52,"top ctrl0 ctrl_signal_ex_mem_o", false,-1, 1,0);
        tracep->declBus(c+53,"top ctrl0 ctrl_signal_mem_wb_o", false,-1, 1,0);
        tracep->declQuad(c+47,"top ctrl0 ctrl_to_pc_new_o", false,-1, 63,0);
        tracep->declBus(c+1000,"top ctrl0 FSM_next_state", false,-1, 3,0);
        tracep->declBus(c+1001,"top ctrl0 FSM_next_state_1", false,-1, 3,0);
        tracep->declBus(c+908,"top ctrl0 FSM_next_state_t", false,-1, 3,0);
        tracep->declBus(c+909,"top ctrl0 FSM_pre_state_t", false,-1, 3,0);
        tracep->declBus(c+910,"top ctrl0 ctrl_signal_pc_t_1", false,-1, 1,0);
        tracep->declBus(c+911,"top ctrl0 ctrl_signal_if_id_t_1", false,-1, 1,0);
        tracep->declBus(c+911,"top ctrl0 ctrl_signal_id_ex_t_1", false,-1, 1,0);
        tracep->declBus(c+1101,"top ctrl0 ctrl_signal_ex_mem_t_1", false,-1, 1,0);
        tracep->declBus(c+1101,"top ctrl0 ctrl_signal_mem_wb_t_1", false,-1, 1,0);
        tracep->declBus(c+1118,"top ctrl0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1122,"top ctrl0 reg1 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1011,"top ctrl0 reg1 clk", false,-1);
        tracep->declBit(c+1012,"top ctrl0 reg1 rst", false,-1);
        tracep->declBus(c+1000,"top ctrl0 reg1 din", false,-1, 3,0);
        tracep->declBus(c+908,"top ctrl0 reg1 dout", false,-1, 3,0);
        tracep->declBit(c+1103,"top ctrl0 reg1 wen", false,-1);
        tracep->declBus(c+1118,"top ctrl0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1122,"top ctrl0 reg2 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1011,"top ctrl0 reg2 clk", false,-1);
        tracep->declBit(c+1012,"top ctrl0 reg2 rst", false,-1);
        tracep->declBus(c+908,"top ctrl0 reg2 din", false,-1, 3,0);
        tracep->declBus(c+909,"top ctrl0 reg2 dout", false,-1, 3,0);
        tracep->declBit(c+1103,"top ctrl0 reg2 wen", false,-1);
        tracep->declBus(c+1094,"top ctrl0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1000,"top ctrl0 mux1 out", false,-1, 3,0);
        tracep->declBus(c+909,"top ctrl0 mux1 key", false,-1, 3,0);
        tracep->declBus(c+1122,"top ctrl0 mux1 default_out", false,-1, 3,0);
        tracep->declBus(c+1002,"top ctrl0 mux1 lut", false,-1, 15,0);
        tracep->declBus(c+1094,"top ctrl0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1000,"top ctrl0 mux1 i0 out", false,-1, 3,0);
        tracep->declBus(c+909,"top ctrl0 mux1 i0 key", false,-1, 3,0);
        tracep->declBus(c+1122,"top ctrl0 mux1 i0 default_out", false,-1, 3,0);
        tracep->declBus(c+1002,"top ctrl0 mux1 i0 lut", false,-1, 15,0);
        tracep->declBus(c+1105,"top ctrl0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1003+i*1,"top ctrl0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1005+i*1,"top ctrl0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1007+i*1,"top ctrl0 mux1 i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+1009,"top ctrl0 mux1 i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+1010,"top ctrl0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1099,"top ctrl0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+49,"top ctrl0 mux2 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux2 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux2 default_out", false,-1, 1,0);
        tracep->declBus(c+912,"top ctrl0 mux2 lut", false,-1, 11,0);
        tracep->declBus(c+1094,"top ctrl0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+49,"top ctrl0 mux2 i0 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux2 i0 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux2 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+912,"top ctrl0 mux2 i0 lut", false,-1, 11,0);
        tracep->declBus(c+1123,"top ctrl0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+913+i*1,"top ctrl0 mux2 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+915+i*1,"top ctrl0 mux2 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+917+i*1,"top ctrl0 mux2 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+919,"top ctrl0 mux2 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+920,"top ctrl0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1099,"top ctrl0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+50,"top ctrl0 mux3 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux3 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux3 default_out", false,-1, 1,0);
        tracep->declBus(c+921,"top ctrl0 mux3 lut", false,-1, 11,0);
        tracep->declBus(c+1094,"top ctrl0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+50,"top ctrl0 mux3 i0 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux3 i0 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux3 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+921,"top ctrl0 mux3 i0 lut", false,-1, 11,0);
        tracep->declBus(c+1123,"top ctrl0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+922+i*1,"top ctrl0 mux3 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+924+i*1,"top ctrl0 mux3 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+926+i*1,"top ctrl0 mux3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+928,"top ctrl0 mux3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+929,"top ctrl0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1099,"top ctrl0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+51,"top ctrl0 mux4 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux4 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux4 default_out", false,-1, 1,0);
        tracep->declBus(c+921,"top ctrl0 mux4 lut", false,-1, 11,0);
        tracep->declBus(c+1094,"top ctrl0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+51,"top ctrl0 mux4 i0 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux4 i0 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux4 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+921,"top ctrl0 mux4 i0 lut", false,-1, 11,0);
        tracep->declBus(c+1123,"top ctrl0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+930+i*1,"top ctrl0 mux4 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+932+i*1,"top ctrl0 mux4 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+934+i*1,"top ctrl0 mux4 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+936,"top ctrl0 mux4 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+937,"top ctrl0 mux4 i0 hit", false,-1);
        tracep->declBus(c+1099,"top ctrl0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+52,"top ctrl0 mux5 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux5 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux5 default_out", false,-1, 1,0);
        tracep->declBus(c+1124,"top ctrl0 mux5 lut", false,-1, 11,0);
        tracep->declBus(c+1094,"top ctrl0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+52,"top ctrl0 mux5 i0 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux5 i0 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux5 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1124,"top ctrl0 mux5 i0 lut", false,-1, 11,0);
        tracep->declBus(c+1123,"top ctrl0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+7+i*1,"top ctrl0 mux5 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+9+i*1,"top ctrl0 mux5 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+11+i*1,"top ctrl0 mux5 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+938,"top ctrl0 mux5 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+939,"top ctrl0 mux5 i0 hit", false,-1);
        tracep->declBus(c+1099,"top ctrl0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux6 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux6 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux6 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+53,"top ctrl0 mux6 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux6 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux6 default_out", false,-1, 1,0);
        tracep->declBus(c+1124,"top ctrl0 mux6 lut", false,-1, 11,0);
        tracep->declBus(c+1094,"top ctrl0 mux6 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1118,"top ctrl0 mux6 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1094,"top ctrl0 mux6 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1097,"top ctrl0 mux6 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+53,"top ctrl0 mux6 i0 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ctrl0 mux6 i0 key", false,-1, 3,0);
        tracep->declBus(c+1101,"top ctrl0 mux6 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1124,"top ctrl0 mux6 i0 lut", false,-1, 11,0);
        tracep->declBus(c+1123,"top ctrl0 mux6 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+13+i*1,"top ctrl0 mux6 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+15+i*1,"top ctrl0 mux6 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+17+i*1,"top ctrl0 mux6 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+940,"top ctrl0 mux6 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+941,"top ctrl0 mux6 i0 hit", false,-1);
        tracep->declBus(c+1099,"top ctrl0 mux6 i0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp1369;
    VlWide<5>/*159:0*/ __Vtemp1371;
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
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__if_id_to_id_pc),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__id_ex_to_ex_wreg));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
        tracep->fullIData(oldp+42,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__id_ex_to_ex_imm_sel));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__mem_wb_to_regfile_we));
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__ex0__DOT__branch_flag_t));
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__pc_to_if_id_pc),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
        tracep->fullBit(oldp+58,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
        tracep->fullWData(oldp+61,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
        tracep->fullWData(oldp+66,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+69,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+81,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4),132);
        tracep->fullWData(oldp+86,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+89,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__if_id0__DOT__pc_t),64);
        tracep->fullBit(oldp+103,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__if_id0__DOT__state),2);
        VL_EXTEND_WQ(66,64, __Vtemp1369, vlSelf->top__DOT__pc_to_if_id_pc);
        __Vtemp1371[0U] = 0U;
        __Vtemp1371[1U] = 0U;
        __Vtemp1371[2U] = (2U | (__Vtemp1369[0U] << 2U));
        __Vtemp1371[3U] = ((__Vtemp1369[0U] >> 0x1eU) 
                           | (__Vtemp1369[1U] << 2U));
        __Vtemp1371[4U] = ((__Vtemp1369[1U] >> 0x1eU) 
                           | (__Vtemp1369[2U] << 2U));
        tracep->fullWData(oldp+105,(__Vtemp1371),132);
        tracep->fullWData(oldp+110,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+113,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+125,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
        tracep->fullBit(oldp+251,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+252,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+253,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+254,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+255,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+256,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+257,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+258,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+259,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+260,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+261,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+262,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+263,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+264,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+265,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+266,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+267,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+268,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+269,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+270,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+271,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+272,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+273,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+274,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+275,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+276,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+277,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+278,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+279,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+280,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+281,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullWData(oldp+282,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
        tracep->fullWData(oldp+349,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+352,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+355,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+358,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+361,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+364,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+367,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+370,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+373,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+376,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+379,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+382,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+385,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+388,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+391,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+394,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+397,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+400,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+403,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+406,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+409,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+412,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+415,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+418,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+421,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+424,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+427,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+430,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+433,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+436,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+439,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+442,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+443,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+444,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+445,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+446,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+447,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+448,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+449,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+450,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+451,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+452,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+453,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+454,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+455,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+456,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+457,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+458,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+459,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+460,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+461,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+462,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+463,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+464,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+465,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+466,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+467,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+468,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+469,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+470,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+471,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+472,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+473,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+477,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+481,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+483,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+487,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
        tracep->fullWData(oldp+535,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
        tracep->fullWData(oldp+602,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+605,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+608,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+611,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+614,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+617,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+620,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+623,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+626,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+629,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+632,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+635,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+638,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+641,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+644,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+647,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+650,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+653,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+656,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+659,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+662,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+665,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+668,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+671,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+674,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+677,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+680,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+683,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+686,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+689,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+692,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+695,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+697,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+701,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+702,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+703,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+705,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+706,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+707,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+708,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+709,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+710,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+711,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+712,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+713,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+714,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+715,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+716,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+717,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+718,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+719,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+720,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+721,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+724,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+725,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+726,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+728,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+730,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+732,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+734,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+736,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+738,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+740,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+742,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+744,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+746,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+748,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+750,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+752,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+754,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+756,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+758,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+760,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+762,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+764,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+766,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+768,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+770,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+772,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+774,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+776,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+778,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+780,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+782,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+784,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+786,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
        tracep->fullBit(oldp+788,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
        tracep->fullQData(oldp+789,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                 ? vlSelf->top__DOT__if_id_to_id_pc
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+791,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
        tracep->fullQData(oldp+793,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
        tracep->fullIData(oldp+795,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
        tracep->fullQData(oldp+796,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+798,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
        tracep->fullQData(oldp+800,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
        tracep->fullQData(oldp+802,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        >> 0x13U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 0xcU)))))),64);
        tracep->fullQData(oldp+804,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                     >> 0x13U)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+806,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                     - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+808,((4ULL + vlSelf->top__DOT__id_ex_to_ex_pc)),64);
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
        tracep->fullQData(oldp+812,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
        tracep->fullBit(oldp+814,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                   == vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullBit(oldp+815,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullQData(oldp+816,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0x13U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 1U)))))),64);
        tracep->fullWData(oldp+818,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4),284);
        tracep->fullWData(oldp+827,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+830,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+833,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+836,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullCData(oldp+839,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+840,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+841,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+842,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[3]),7);
        tracep->fullQData(oldp+843,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+845,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+847,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+849,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+851,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+854,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4),201);
        tracep->fullWData(oldp+861,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+864,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+867,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+870,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+871,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+872,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+873,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+875,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+877,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+879,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+881,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+882,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4),142);
        tracep->fullWData(oldp+887,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+890,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+893,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+894,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+895,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+897,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+899,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+901,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+902,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                               ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                               : 0U))),5);
        tracep->fullBit(oldp+903,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
        tracep->fullBit(oldp+904,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
        tracep->fullQData(oldp+905,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                 ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+907,((0U == (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
        tracep->fullCData(oldp+908,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
        tracep->fullCData(oldp+909,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
        tracep->fullCData(oldp+910,((3U & (- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))))),2);
        tracep->fullCData(oldp+911,((2U & (- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))))),2);
        tracep->fullSData(oldp+912,((0xcU | (0xc0U 
                                             & ((- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))) 
                                                << 6U)))),12);
        tracep->fullCData(oldp+913,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+914,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+915,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+916,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+917,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+918,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+919,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+920,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+921,((0xcU | (0x80U 
                                             & ((- (IData)((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t))) 
                                                << 6U)))),12);
        tracep->fullCData(oldp+922,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+923,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+924,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+925,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+926,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+927,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+928,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+929,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+930,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+931,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+932,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+933,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+934,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+935,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+936,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+937,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+938,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+940,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+941,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+942,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+944,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+946,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__if_id_to_id_inst 
                                                >> 0xfU)))
                                      ? 0ULL : ((((0x1fU 
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
        tracep->fullQData(oldp+948,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__if_id_to_id_inst 
                                                >> 0x14U)))
                                      ? 0ULL : ((((0x1fU 
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
        tracep->fullCData(oldp+950,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xfU))
                                               : 0U))),5);
        tracep->fullCData(oldp+951,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0x14U))
                                               : 0U))),5);
        tracep->fullCData(oldp+952,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0x13U : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst)
                                                  : 0U))),7);
        tracep->fullCData(oldp+953,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (7U 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 0xcU))
                                               : 0U))),3);
        tracep->fullCData(oldp+954,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (vlSelf->top__DOT__if_id_to_id_inst 
                                                  >> 0x19U)
                                               : 0U))),7);
        tracep->fullQData(oldp+955,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
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
        tracep->fullQData(oldp+957,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
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
        tracep->fullCData(oldp+959,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__if_id_to_id_inst 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->fullBit(oldp+960,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                   | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
        tracep->fullIData(oldp+961,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                               ? vlSelf->top__DOT__id_to_id_ex_imm
                                               : 0U))),20);
        tracep->fullBit(oldp+962,(((2U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                   & ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                      & (((0x6fU == 
                                           (0x7fU & vlSelf->top__DOT__if_id_to_id_inst)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst))) 
                                         | (0x37U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__if_id_to_id_inst)))))));
        tracep->fullIData(oldp+963,(vlSelf->top__DOT__if_id_to_id_inst),32);
        tracep->fullCData(oldp+964,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+965,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+966,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+967,((0x7fU & vlSelf->top__DOT__if_id_to_id_inst)),7);
        tracep->fullCData(oldp+968,((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+969,((vlSelf->top__DOT__if_id_to_id_inst 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+970,(vlSelf->top__DOT__id_to_id_ex_wreg));
        tracep->fullIData(oldp+971,(vlSelf->top__DOT__id_to_id_ex_imm),20);
        tracep->fullBit(oldp+972,((((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__if_id_to_id_inst)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst))) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->top__DOT__if_id_to_id_inst)))));
        tracep->fullBit(oldp+973,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+974,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+975,((vlSelf->top__DOT__if_id_to_id_inst 
                                     >> 0x14U)),20);
        tracep->fullWData(oldp+976,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),81);
        tracep->fullIData(oldp+979,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
        tracep->fullIData(oldp+980,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
        tracep->fullIData(oldp+981,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
        tracep->fullCData(oldp+982,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+983,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+984,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
        tracep->fullIData(oldp+985,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
        tracep->fullIData(oldp+986,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
        tracep->fullIData(oldp+987,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
        tracep->fullIData(oldp+988,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
        tracep->fullBit(oldp+989,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+990,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
        tracep->fullQData(oldp+992,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
        tracep->fullQData(oldp+994,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+996,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+997,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+999,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1000,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
        tracep->fullCData(oldp+1001,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1),4);
        tracep->fullSData(oldp+1002,((0x30U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_1) 
                                               << 8U))),16);
        tracep->fullCData(oldp+1003,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+1004,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+1005,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1006,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1007,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+1008,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+1009,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+1010,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1011,(vlSelf->clk));
        tracep->fullBit(oldp+1012,(vlSelf->rst));
        tracep->fullBit(oldp+1013,(vlSelf->icache_data_valid_i));
        tracep->fullIData(oldp+1014,(vlSelf->icache_data_i),32);
        tracep->fullQData(oldp+1015,(vlSelf->icache_addr_o),64);
        tracep->fullBit(oldp+1017,(vlSelf->icache_req_valid_o));
        tracep->fullBit(oldp+1018,(vlSelf->icache_data_wen_o));
        tracep->fullQData(oldp+1019,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->fullQData(oldp+1021,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->fullQData(oldp+1023,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->fullQData(oldp+1025,(vlSelf->diff_regs_o[0]),64);
        tracep->fullQData(oldp+1027,(vlSelf->diff_regs_o[1]),64);
        tracep->fullQData(oldp+1029,(vlSelf->diff_regs_o[2]),64);
        tracep->fullQData(oldp+1031,(vlSelf->diff_regs_o[3]),64);
        tracep->fullQData(oldp+1033,(vlSelf->diff_regs_o[4]),64);
        tracep->fullQData(oldp+1035,(vlSelf->diff_regs_o[5]),64);
        tracep->fullQData(oldp+1037,(vlSelf->diff_regs_o[6]),64);
        tracep->fullQData(oldp+1039,(vlSelf->diff_regs_o[7]),64);
        tracep->fullQData(oldp+1041,(vlSelf->diff_regs_o[8]),64);
        tracep->fullQData(oldp+1043,(vlSelf->diff_regs_o[9]),64);
        tracep->fullQData(oldp+1045,(vlSelf->diff_regs_o[10]),64);
        tracep->fullQData(oldp+1047,(vlSelf->diff_regs_o[11]),64);
        tracep->fullQData(oldp+1049,(vlSelf->diff_regs_o[12]),64);
        tracep->fullQData(oldp+1051,(vlSelf->diff_regs_o[13]),64);
        tracep->fullQData(oldp+1053,(vlSelf->diff_regs_o[14]),64);
        tracep->fullQData(oldp+1055,(vlSelf->diff_regs_o[15]),64);
        tracep->fullQData(oldp+1057,(vlSelf->diff_regs_o[16]),64);
        tracep->fullQData(oldp+1059,(vlSelf->diff_regs_o[17]),64);
        tracep->fullQData(oldp+1061,(vlSelf->diff_regs_o[18]),64);
        tracep->fullQData(oldp+1063,(vlSelf->diff_regs_o[19]),64);
        tracep->fullQData(oldp+1065,(vlSelf->diff_regs_o[20]),64);
        tracep->fullQData(oldp+1067,(vlSelf->diff_regs_o[21]),64);
        tracep->fullQData(oldp+1069,(vlSelf->diff_regs_o[22]),64);
        tracep->fullQData(oldp+1071,(vlSelf->diff_regs_o[23]),64);
        tracep->fullQData(oldp+1073,(vlSelf->diff_regs_o[24]),64);
        tracep->fullQData(oldp+1075,(vlSelf->diff_regs_o[25]),64);
        tracep->fullQData(oldp+1077,(vlSelf->diff_regs_o[26]),64);
        tracep->fullQData(oldp+1079,(vlSelf->diff_regs_o[27]),64);
        tracep->fullQData(oldp+1081,(vlSelf->diff_regs_o[28]),64);
        tracep->fullQData(oldp+1083,(vlSelf->diff_regs_o[29]),64);
        tracep->fullQData(oldp+1085,(vlSelf->diff_regs_o[30]),64);
        tracep->fullQData(oldp+1087,(vlSelf->diff_regs_o[31]),64);
        tracep->fullBit(oldp+1089,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullIData(oldp+1090,(((2U == (IData)(vlSelf->top__DOT__if_id0__DOT__state))
                                       ? 0x13U : vlSelf->icache_data_i)),32);
        tracep->fullIData(oldp+1091,(0x40U),32);
        tracep->fullQData(oldp+1092,(0x7ffffffcULL),64);
        tracep->fullIData(oldp+1094,(2U),32);
        tracep->fullQData(oldp+1095,(0ULL),64);
        tracep->fullIData(oldp+1097,(1U),32);
        tracep->fullIData(oldp+1098,(0x42U),32);
        tracep->fullIData(oldp+1099,(2U),32);
        tracep->fullBit(oldp+1100,(0U));
        tracep->fullCData(oldp+1101,(0U),2);
        tracep->fullIData(oldp+1102,(7U),32);
        tracep->fullBit(oldp+1103,(1U));
        tracep->fullSData(oldp+1104,(0xc647U),16);
        tracep->fullIData(oldp+1105,(8U),32);
        tracep->fullIData(oldp+1106,(3U),32);
        tracep->fullIData(oldp+1107,(0x14U),32);
        tracep->fullIData(oldp+1108,(0x1bU),32);
        tracep->fullIData(oldp+1109,(3U),32);
        tracep->fullIData(oldp+1110,(0x1fU),32);
        tracep->fullIData(oldp+1111,(5U),32);
        tracep->fullIData(oldp+1112,(0x45U),32);
        tracep->fullIData(oldp+1113,(0x1fU),32);
        tracep->fullCData(oldp+1114,(0U),5);
        tracep->fullCData(oldp+1115,(0U),7);
        tracep->fullCData(oldp+1116,(0U),3);
        tracep->fullIData(oldp+1117,(0U),20);
        tracep->fullIData(oldp+1118,(4U),32);
        tracep->fullIData(oldp+1119,(0x47U),32);
        tracep->fullIData(oldp+1120,(4U),32);
        tracep->fullIData(oldp+1121,(0x43U),32);
        tracep->fullCData(oldp+1122,(0U),4);
        tracep->fullIData(oldp+1123,(6U),32);
        tracep->fullSData(oldp+1124,(0xcU),12);
    }
}
