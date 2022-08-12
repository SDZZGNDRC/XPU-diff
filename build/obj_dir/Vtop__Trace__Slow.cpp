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
        tracep->declBit(c+1477,"clk", false,-1);
        tracep->declBit(c+1478,"rst", false,-1);
        tracep->declBit(c+1479,"dcache_ready_i", false,-1);
        tracep->declBit(c+1480,"icache_data_valid_i", false,-1);
        tracep->declBit(c+1481,"dcache_data_valid_i", false,-1);
        tracep->declBus(c+1482,"icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1483,"dcache_data_i", false,-1, 63,0);
        tracep->declQuad(c+1485,"icache_addr_o", false,-1, 63,0);
        tracep->declQuad(c+1487,"dcache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1489,"icache_req_valid_o", false,-1);
        tracep->declBit(c+1490,"dcache_req_valid_o", false,-1);
        tracep->declBit(c+1491,"icache_wen_o", false,-1);
        tracep->declBit(c+1492,"dcache_wen_o", false,-1);
        tracep->declQuad(c+1493,"dcache_wdata_o", false,-1, 63,0);
        tracep->declBus(c+1495,"dcache_wlen_o", false,-1, 1,0);
        tracep->declQuad(c+1496,"diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1498,"diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1500,"diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1502,"diff_ex_to_ex_mem_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1504,"diff_ex_mem_to_mem_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1506,"diff_mem_to_mem_wb_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1508,"diff_mem_wb_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1510+i*2,"diff_regs_o", true,(i+0), 63,0);}}
        tracep->declBit(c+1477,"top clk", false,-1);
        tracep->declBit(c+1478,"top rst", false,-1);
        tracep->declBit(c+1479,"top dcache_ready_i", false,-1);
        tracep->declBit(c+1480,"top icache_data_valid_i", false,-1);
        tracep->declBit(c+1481,"top dcache_data_valid_i", false,-1);
        tracep->declBus(c+1482,"top icache_data_i", false,-1, 31,0);
        tracep->declQuad(c+1483,"top dcache_data_i", false,-1, 63,0);
        tracep->declQuad(c+1485,"top icache_addr_o", false,-1, 63,0);
        tracep->declQuad(c+1487,"top dcache_addr_o", false,-1, 63,0);
        tracep->declBit(c+1489,"top icache_req_valid_o", false,-1);
        tracep->declBit(c+1490,"top dcache_req_valid_o", false,-1);
        tracep->declBit(c+1491,"top icache_wen_o", false,-1);
        tracep->declBit(c+1492,"top dcache_wen_o", false,-1);
        tracep->declQuad(c+1493,"top dcache_wdata_o", false,-1, 63,0);
        tracep->declBus(c+1495,"top dcache_wlen_o", false,-1, 1,0);
        tracep->declQuad(c+1496,"top diff_if_id_to_id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1498,"top diff_id_to_id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1500,"top diff_id_ex_to_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1502,"top diff_ex_to_ex_mem_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1504,"top diff_ex_mem_to_mem_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1506,"top diff_mem_to_mem_wb_pc_o", false,-1, 63,0);
        tracep->declQuad(c+1508,"top diff_mem_wb_pc_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1510+i*2,"top diff_regs_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+46,"top if_id_to_id_pc", false,-1, 63,0);
        tracep->declQuad(c+46,"top id_to_id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top id_ex_to_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top ex_to_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+50,"top ex_mem_to_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+50,"top mem_to_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+1066,"top if_id_to_id_inst", false,-1, 31,0);
        tracep->declQuad(c+1044,"top regfile_to_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+1046,"top regfile_to_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+1067,"top csr_to_id_csr_data", false,-1, 63,0);
        tracep->declQuad(c+1069,"top id_to_id_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+52,"top id_ex_to_ex_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+1048,"top id_to_id_ex_csr_data", false,-1, 63,0);
        tracep->declQuad(c+1071,"top id_to_id_ex_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+54,"top id_ex_to_ex_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+56,"top id_ex_to_ex_csr_data", false,-1, 63,0);
        tracep->declBus(c+1073,"top id_to_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+1074,"top id_to_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+1075,"top id_to_csr_raddr", false,-1, 11,0);
        tracep->declBus(c+58,"top id_ex_to_ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+59,"top id_ex_to_ex_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+60,"top id_ex_to_ex_csr_raddr", false,-1, 11,0);
        tracep->declBus(c+1076,"top id_to_id_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+1075,"top id_to_id_ex_csr_waddr", false,-1, 11,0);
        tracep->declBus(c+61,"top id_ex_to_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+62,"top id_ex_to_ex_csr_waddr", false,-1, 11,0);
        tracep->declBus(c+61,"top ex_to_ex_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+62,"top ex_to_ex_mem_csr_waddr", false,-1, 11,0);
        tracep->declBus(c+63,"top ex_mem_to_mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+64,"top ex_mem_to_mem_csr_waddr", false,-1, 11,0);
        tracep->declBus(c+63,"top mem_to_mem_wb_rd_addr", false,-1, 4,0);
        tracep->declBus(c+64,"top mem_to_mem_wb_csr_waddr", false,-1, 11,0);
        tracep->declQuad(c+65,"top mem_wb_to_regfile_wdata", false,-1, 63,0);
        tracep->declQuad(c+67,"top mem_wb_to_csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+1077,"top ex_to_ex_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_to_ex_mem_csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+71,"top ex_mem_to_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+73,"top ex_mem_to_mem_csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+1079,"top mem_to_mem_wb_wdata", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem_to_mem_wb_csr_wdata", false,-1, 63,0);
        tracep->declBus(c+1081,"top id_to_id_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+75,"top id_ex_to_ex_opcode", false,-1, 6,0);
        tracep->declBus(c+1082,"top id_to_id_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+76,"top id_ex_to_ex_funct3", false,-1, 2,0);
        tracep->declBus(c+1083,"top id_to_id_ex_funct7", false,-1, 6,0);
        tracep->declBus(c+77,"top id_ex_to_ex_funct7", false,-1, 6,0);
        tracep->declBus(c+75,"top ex_to_ex_mem_opcode", false,-1, 6,0);
        tracep->declBus(c+76,"top ex_to_ex_mem_funct3", false,-1, 2,0);
        tracep->declBus(c+78,"top ex_mem_to_mem_opcode", false,-1, 6,0);
        tracep->declBus(c+79,"top ex_mem_to_mem_funct3", false,-1, 2,0);
        tracep->declBit(c+1084,"top id_to_id_ex_wreg", false,-1);
        tracep->declBit(c+1085,"top id_to_id_ex_csr_wreg", false,-1);
        tracep->declBit(c+80,"top id_ex_to_ex_wreg", false,-1);
        tracep->declBit(c+81,"top id_ex_to_ex_csr_wreg", false,-1);
        tracep->declBit(c+80,"top ex_to_ex_mem_wreg", false,-1);
        tracep->declBit(c+81,"top ex_to_ex_mem_csr_wreg", false,-1);
        tracep->declBit(c+82,"top ex_mem_to_mem_wreg", false,-1);
        tracep->declBit(c+83,"top ex_mem_to_mem_csr_wreg", false,-1);
        tracep->declBit(c+82,"top mem_to_mem_wb_wreg", false,-1);
        tracep->declBit(c+83,"top mem_to_mem_wb_csr_wreg", false,-1);
        tracep->declBus(c+1086,"top id_to_id_ex_imm", false,-1, 19,0);
        tracep->declBus(c+84,"top id_ex_to_ex_imm", false,-1, 19,0);
        tracep->declBit(c+1087,"top id_to_id_ex_imm_sel", false,-1);
        tracep->declBit(c+85,"top id_ex_to_ex_imm_sel", false,-1);
        tracep->declBit(c+86,"top mem_wb_to_regfile_we", false,-1);
        tracep->declBus(c+87,"top mem_wb_to_regfile_waddr", false,-1, 4,0);
        tracep->declBit(c+88,"top mem_wb_to_csr_we", false,-1);
        tracep->declBus(c+89,"top mem_wb_to_csr_waddr", false,-1, 11,0);
        tracep->declBus(c+61,"top ex_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBus(c+62,"top ex_to_id_back_csr_waddr", false,-1, 11,0);
        tracep->declBit(c+80,"top ex_to_id_back_wreg", false,-1);
        tracep->declBit(c+81,"top ex_to_id_back_csr_wreg", false,-1);
        tracep->declQuad(c+1077,"top ex_to_id_back_wdata", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_to_id_back_csr_wdata", false,-1, 63,0);
        tracep->declBus(c+63,"top mem_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBus(c+64,"top mem_to_id_back_csr_waddr", false,-1, 11,0);
        tracep->declBit(c+82,"top mem_to_id_back_wreg", false,-1);
        tracep->declBit(c+83,"top mem_to_id_back_csr_wreg", false,-1);
        tracep->declQuad(c+1079,"top mem_to_id_back_wdata", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem_to_id_back_csr_wdata", false,-1, 63,0);
        tracep->declBus(c+87,"top mem_wb_to_id_back_rd_addr", false,-1, 4,0);
        tracep->declBus(c+89,"top mem_wb_to_id_back_csr_waddr", false,-1, 11,0);
        tracep->declBit(c+86,"top mem_wb_to_id_back_wreg", false,-1);
        tracep->declBit(c+88,"top mem_wb_to_id_back_csr_wreg", false,-1);
        tracep->declQuad(c+65,"top mem_wb_to_id_back_wdata", false,-1, 63,0);
        tracep->declQuad(c+67,"top mem_wb_to_id_back_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+1088,"top ex_branch_flag", false,-1);
        tracep->declBit(c+1574,"top mem_to_ctrl_block_flag", false,-1);
        tracep->declQuad(c+90,"top ex_to_ctrl_pc_new", false,-1, 63,0);
        tracep->declBus(c+1089,"top ctrl_to_pc_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+1090,"top ctrl_to_if_id_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+1091,"top ctrl_to_id_ex_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+1092,"top ctrl_to_ex_mem_ctrl_signal", false,-1, 1,0);
        tracep->declBus(c+1093,"top ctrl_to_mem_wb_ctrl_signal", false,-1, 1,0);
        tracep->declQuad(c+90,"top ctrl_to_pc_pc_new", false,-1, 63,0);
        tracep->declQuad(c+92,"top pc_to_if_id_pc", false,-1, 63,0);
        tracep->declBit(c+1477,"top pc0 clk", false,-1);
        tracep->declBit(c+1478,"top pc0 rst", false,-1);
        tracep->declBus(c+1089,"top pc0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+90,"top pc0 pc_new_i", false,-1, 63,0);
        tracep->declQuad(c+1485,"top pc0 pc_ram_o", false,-1, 63,0);
        tracep->declQuad(c+92,"top pc0 pc_pipeline_o", false,-1, 63,0);
        tracep->declBit(c+1491,"top pc0 icache_wen_o", false,-1);
        tracep->declBit(c+1489,"top pc0 icache_req_valid_o", false,-1);
        tracep->declQuad(c+94,"top pc0 pc_ram_t", false,-1, 63,0);
        tracep->declBit(c+1094,"top pc0 pc_ram_wen", false,-1);
        tracep->declQuad(c+1095,"top pc0 pc_pipeline_t", false,-1, 63,0);
        tracep->declBit(c+1094,"top pc0 pc_pipeline_wen", false,-1);
        tracep->declBit(c+1094,"top pc0 icache_req_valid_wen", false,-1);
        tracep->declBus(c+1593,"top pc0 pc_ram WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1594,"top pc0 pc_ram RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top pc0 pc_ram clk", false,-1);
        tracep->declBit(c+1478,"top pc0 pc_ram rst", false,-1);
        tracep->declQuad(c+1485,"top pc0 pc_ram din", false,-1, 63,0);
        tracep->declQuad(c+94,"top pc0 pc_ram dout", false,-1, 63,0);
        tracep->declBit(c+1094,"top pc0 pc_ram wen", false,-1);
        tracep->declBus(c+1596,"top pc0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1596,"top pc0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top pc0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1485,"top pc0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+1089,"top pc0 mux1 key", false,-1, 1,0);
        tracep->declQuad(c+1597,"top pc0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+96,"top pc0 mux1 lut", false,-1, 131,0);
        tracep->declBus(c+1596,"top pc0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1596,"top pc0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top pc0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top pc0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1485,"top pc0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+1089,"top pc0 mux1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1597,"top pc0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+96,"top pc0 mux1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1600,"top pc0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+101+i*3,"top pc0 mux1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+107+i*1,"top pc0 mux1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+109+i*2,"top pc0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1097,"top pc0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1099,"top pc0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1601,"top pc0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1593,"top pc0 pc_pipeline WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1594,"top pc0 pc_pipeline RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top pc0 pc_pipeline clk", false,-1);
        tracep->declBit(c+1478,"top pc0 pc_pipeline rst", false,-1);
        tracep->declQuad(c+1095,"top pc0 pc_pipeline din", false,-1, 63,0);
        tracep->declQuad(c+92,"top pc0 pc_pipeline dout", false,-1, 63,0);
        tracep->declBit(c+1094,"top pc0 pc_pipeline wen", false,-1);
        tracep->declBus(c+1596,"top pc0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1596,"top pc0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top pc0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1095,"top pc0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+1089,"top pc0 mux3 key", false,-1, 1,0);
        tracep->declQuad(c+1597,"top pc0 mux3 default_out", false,-1, 63,0);
        tracep->declArray(c+113,"top pc0 mux3 lut", false,-1, 131,0);
        tracep->declBus(c+1596,"top pc0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1596,"top pc0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top pc0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top pc0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1095,"top pc0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+1089,"top pc0 mux3 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1597,"top pc0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+113,"top pc0 mux3 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1600,"top pc0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+118+i*3,"top pc0 mux3 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+124+i*1,"top pc0 mux3 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+126+i*2,"top pc0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1100,"top pc0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1102,"top pc0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1601,"top pc0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1599,"top pc0 icache_req_valid WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top pc0 icache_req_valid RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top pc0 icache_req_valid clk", false,-1);
        tracep->declBit(c+1478,"top pc0 icache_req_valid rst", false,-1);
        tracep->declBus(c+1575,"top pc0 icache_req_valid din", false,-1, 0,0);
        tracep->declBus(c+1489,"top pc0 icache_req_valid dout", false,-1, 0,0);
        tracep->declBit(c+1094,"top pc0 icache_req_valid wen", false,-1);
        tracep->declBit(c+1477,"top if_id0 clk", false,-1);
        tracep->declBit(c+1478,"top if_id0 rst", false,-1);
        tracep->declBus(c+1482,"top if_id0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+1090,"top if_id0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+92,"top if_id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+1066,"top if_id0 if_inst_o", false,-1, 31,0);
        tracep->declQuad(c+46,"top if_id0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+1103,"top if_id0 pc_t", false,-1, 63,0);
        tracep->declBit(c+1105,"top if_id0 pc_wen", false,-1);
        tracep->declBus(c+1576,"top if_id0 if_inst_t", false,-1, 31,0);
        tracep->declBus(c+130,"top if_id0 state", false,-1, 1,0);
        tracep->declBit(c+1105,"top if_id0 state_wen", false,-1);
        tracep->declBus(c+1593,"top if_id0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top if_id0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top if_id0 reg1 clk", false,-1);
        tracep->declBit(c+1478,"top if_id0 reg1 rst", false,-1);
        tracep->declQuad(c+1103,"top if_id0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+46,"top if_id0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+1105,"top if_id0 reg1 wen", false,-1);
        tracep->declBus(c+1596,"top if_id0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1596,"top if_id0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top if_id0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1103,"top if_id0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+1090,"top if_id0 mux1 key", false,-1, 1,0);
        tracep->declQuad(c+1597,"top if_id0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+131,"top if_id0 mux1 lut", false,-1, 131,0);
        tracep->declBus(c+1596,"top if_id0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1596,"top if_id0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top if_id0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top if_id0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1103,"top if_id0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+1090,"top if_id0 mux1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+1597,"top if_id0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+131,"top if_id0 mux1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+1600,"top if_id0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+136+i*3,"top if_id0 mux1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+142+i*1,"top if_id0 mux1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+144+i*2,"top if_id0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1106,"top if_id0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1108,"top if_id0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1601,"top if_id0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1596,"top if_id0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1603,"top if_id0 reg2 RESET_VAL", false,-1, 1,0);
        tracep->declBit(c+1477,"top if_id0 reg2 clk", false,-1);
        tracep->declBit(c+1478,"top if_id0 reg2 rst", false,-1);
        tracep->declBus(c+1090,"top if_id0 reg2 din", false,-1, 1,0);
        tracep->declBus(c+130,"top if_id0 reg2 dout", false,-1, 1,0);
        tracep->declBit(c+1105,"top if_id0 reg2 wen", false,-1);
        tracep->declBus(c+1066,"top id0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+1044,"top id0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1046,"top id0 rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+1067,"top id0 csr_data_i", false,-1, 63,0);
        tracep->declQuad(c+1077,"top id0 ex_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+61,"top id0 ex_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+80,"top id0 ex_back_wreg_i", false,-1);
        tracep->declQuad(c+1079,"top id0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+63,"top id0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+82,"top id0 mem_back_wreg_i", false,-1);
        tracep->declQuad(c+65,"top id0 mem_wb_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+87,"top id0 mem_wb_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+86,"top id0 mem_wb_back_wreg_i", false,-1);
        tracep->declQuad(c+69,"top id0 ex_back_csr_wdata_i", false,-1, 63,0);
        tracep->declBus(c+62,"top id0 ex_back_csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+81,"top id0 ex_back_csr_wreg_i", false,-1);
        tracep->declQuad(c+73,"top id0 mem_back_csr_wdata_i", false,-1, 63,0);
        tracep->declBus(c+64,"top id0 mem_back_csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+83,"top id0 mem_back_csr_wreg_i", false,-1);
        tracep->declQuad(c+67,"top id0 mem_wb_back_csr_wdata_i", false,-1, 63,0);
        tracep->declBus(c+89,"top id0 mem_wb_back_csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+88,"top id0 mem_wb_back_csr_wreg_i", false,-1);
        tracep->declQuad(c+46,"top id0 pc_i", false,-1, 63,0);
        tracep->declBit(c+1490,"top id0 dcache_req_valid_o", false,-1);
        tracep->declBit(c+1492,"top id0 dcache_wen_o", false,-1);
        tracep->declQuad(c+1493,"top id0 dcache_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+1487,"top id0 dcache_addr_o", false,-1, 63,0);
        tracep->declBus(c+1495,"top id0 dcache_wlen_o", false,-1, 1,0);
        tracep->declBus(c+1073,"top id0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+1074,"top id0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+1075,"top id0 csr_raddr_o", false,-1, 11,0);
        tracep->declBus(c+1081,"top id0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+1082,"top id0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+1083,"top id0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+1069,"top id0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+1071,"top id0 rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+1048,"top id0 csr_data_o", false,-1, 63,0);
        tracep->declBus(c+1076,"top id0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+1075,"top id0 csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+1084,"top id0 wreg_o", false,-1);
        tracep->declBit(c+1085,"top id0 csr_wreg_o", false,-1);
        tracep->declBus(c+1086,"top id0 imm_o", false,-1, 19,0);
        tracep->declBit(c+1087,"top id0 imm_sel_o", false,-1);
        tracep->declQuad(c+46,"top id0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+1109,"top id0 dcache_wdata_t_sb", false,-1, 63,0);
        tracep->declQuad(c+1071,"top id0 dcache_wdata_t_sd", false,-1, 63,0);
        tracep->declQuad(c+1111,"top id0 dcache_wdata_t_sh", false,-1, 63,0);
        tracep->declQuad(c+1113,"top id0 dcache_wdata_t_sw", false,-1, 63,0);
        tracep->declBus(c+1075,"top id0 dcache_addr_offset_load", false,-1, 11,0);
        tracep->declBus(c+1115,"top id0 dcache_addr_offset_store", false,-1, 11,0);
        tracep->declQuad(c+1116,"top id0 dcache_addr_t_load", false,-1, 63,0);
        tracep->declQuad(c+1118,"top id0 dcache_addr_t_store", false,-1, 63,0);
        tracep->declBus(c+1120,"top id0 dcache_wlen_t_load", false,-1, 1,0);
        tracep->declBus(c+1121,"top id0 dcache_wlen_t_store", false,-1, 1,0);
        tracep->declBus(c+1596,"top id0 mux_dcache_req_valid NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top id0 mux_dcache_req_valid KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux_dcache_req_valid DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1490,"top id0 mux_dcache_req_valid out", false,-1, 0,0);
        tracep->declBus(c+1081,"top id0 mux_dcache_req_valid key", false,-1, 6,0);
        tracep->declBus(c+1605,"top id0 mux_dcache_req_valid default_out", false,-1, 0,0);
        tracep->declBus(c+1606,"top id0 mux_dcache_req_valid lut", false,-1, 15,0);
        tracep->declBus(c+1596,"top id0 mux_dcache_req_valid i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top id0 mux_dcache_req_valid i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux_dcache_req_valid i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux_dcache_req_valid i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1490,"top id0 mux_dcache_req_valid i0 out", false,-1, 0,0);
        tracep->declBus(c+1081,"top id0 mux_dcache_req_valid i0 key", false,-1, 6,0);
        tracep->declBus(c+1605,"top id0 mux_dcache_req_valid i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1606,"top id0 mux_dcache_req_valid i0 lut", false,-1, 15,0);
        tracep->declBus(c+1607,"top id0 mux_dcache_req_valid i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1+i*1,"top id0 mux_dcache_req_valid i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+3+i*1,"top id0 mux_dcache_req_valid i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"top id0 mux_dcache_req_valid i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+1122,"top id0 mux_dcache_req_valid i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+1123,"top id0 mux_dcache_req_valid i0 hit", false,-1);
        tracep->declBus(c+1601,"top id0 mux_dcache_req_valid i0 i", false,-1, 31,0);
        tracep->declBus(c+1608,"top id0 mux_dcache_wdata NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top id0 mux_dcache_wdata KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top id0 mux_dcache_wdata DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1493,"top id0 mux_dcache_wdata out", false,-1, 63,0);
        tracep->declBus(c+1082,"top id0 mux_dcache_wdata key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top id0 mux_dcache_wdata default_out", false,-1, 63,0);
        tracep->declArray(c+1124,"top id0 mux_dcache_wdata lut", false,-1, 267,0);
        tracep->declBus(c+1608,"top id0 mux_dcache_wdata i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top id0 mux_dcache_wdata i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top id0 mux_dcache_wdata i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux_dcache_wdata i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1493,"top id0 mux_dcache_wdata i0 out", false,-1, 63,0);
        tracep->declBus(c+1082,"top id0 mux_dcache_wdata i0 key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top id0 mux_dcache_wdata i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1124,"top id0 mux_dcache_wdata i0 lut", false,-1, 267,0);
        tracep->declBus(c+1610,"top id0 mux_dcache_wdata i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1133+i*3,"top id0 mux_dcache_wdata i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1145+i*1,"top id0 mux_dcache_wdata i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1149+i*2,"top id0 mux_dcache_wdata i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1157,"top id0 mux_dcache_wdata i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1159,"top id0 mux_dcache_wdata i0 hit", false,-1);
        tracep->declBus(c+1611,"top id0 mux_dcache_wdata i0 i", false,-1, 31,0);
        tracep->declBus(c+1604,"top id0 mux_dcache_wlen_t_load NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top id0 mux_dcache_wlen_t_load KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top id0 mux_dcache_wlen_t_load DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1120,"top id0 mux_dcache_wlen_t_load out", false,-1, 1,0);
        tracep->declBus(c+1082,"top id0 mux_dcache_wlen_t_load key", false,-1, 2,0);
        tracep->declBus(c+1603,"top id0 mux_dcache_wlen_t_load default_out", false,-1, 1,0);
        tracep->declQuad(c+1612,"top id0 mux_dcache_wlen_t_load lut", false,-1, 34,0);
        tracep->declBus(c+1604,"top id0 mux_dcache_wlen_t_load i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top id0 mux_dcache_wlen_t_load i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top id0 mux_dcache_wlen_t_load i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux_dcache_wlen_t_load i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1120,"top id0 mux_dcache_wlen_t_load i0 out", false,-1, 1,0);
        tracep->declBus(c+1082,"top id0 mux_dcache_wlen_t_load i0 key", false,-1, 2,0);
        tracep->declBus(c+1603,"top id0 mux_dcache_wlen_t_load i0 default_out", false,-1, 1,0);
        tracep->declQuad(c+1612,"top id0 mux_dcache_wlen_t_load i0 lut", false,-1, 34,0);
        tracep->declBus(c+1614,"top id0 mux_dcache_wlen_t_load i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+7+i*1,"top id0 mux_dcache_wlen_t_load i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+14+i*1,"top id0 mux_dcache_wlen_t_load i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+21+i*1,"top id0 mux_dcache_wlen_t_load i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1160,"top id0 mux_dcache_wlen_t_load i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1161,"top id0 mux_dcache_wlen_t_load i0 hit", false,-1);
        tracep->declBus(c+1615,"top id0 mux_dcache_wlen_t_load i0 i", false,-1, 31,0);
        tracep->declBus(c+1608,"top id0 mux_dcache_wlen_t_store NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top id0 mux_dcache_wlen_t_store KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top id0 mux_dcache_wlen_t_store DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1121,"top id0 mux_dcache_wlen_t_store out", false,-1, 1,0);
        tracep->declBus(c+1082,"top id0 mux_dcache_wlen_t_store key", false,-1, 2,0);
        tracep->declBus(c+1603,"top id0 mux_dcache_wlen_t_store default_out", false,-1, 1,0);
        tracep->declBus(c+1616,"top id0 mux_dcache_wlen_t_store lut", false,-1, 19,0);
        tracep->declBus(c+1608,"top id0 mux_dcache_wlen_t_store i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top id0 mux_dcache_wlen_t_store i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top id0 mux_dcache_wlen_t_store i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux_dcache_wlen_t_store i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1121,"top id0 mux_dcache_wlen_t_store i0 out", false,-1, 1,0);
        tracep->declBus(c+1082,"top id0 mux_dcache_wlen_t_store i0 key", false,-1, 2,0);
        tracep->declBus(c+1603,"top id0 mux_dcache_wlen_t_store i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1616,"top id0 mux_dcache_wlen_t_store i0 lut", false,-1, 19,0);
        tracep->declBus(c+1614,"top id0 mux_dcache_wlen_t_store i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+28+i*1,"top id0 mux_dcache_wlen_t_store i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+32+i*1,"top id0 mux_dcache_wlen_t_store i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+36+i*1,"top id0 mux_dcache_wlen_t_store i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1162,"top id0 mux_dcache_wlen_t_store i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1163,"top id0 mux_dcache_wlen_t_store i0 hit", false,-1);
        tracep->declBus(c+1611,"top id0 mux_dcache_wlen_t_store i0 i", false,-1, 31,0);
        tracep->declBus(c+1596,"top id0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top id0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1084,"top id0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+1081,"top id0 mux1 key", false,-1, 6,0);
        tracep->declBus(c+1617,"top id0 mux1 default_out", false,-1, 0,0);
        tracep->declBus(c+1618,"top id0 mux1 lut", false,-1, 15,0);
        tracep->declBus(c+1596,"top id0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top id0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1084,"top id0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+1081,"top id0 mux1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1617,"top id0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1618,"top id0 mux1 i0 lut", false,-1, 15,0);
        tracep->declBus(c+1607,"top id0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+40+i*1,"top id0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+42+i*1,"top id0 mux1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+44+i*1,"top id0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+1164,"top id0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+1165,"top id0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1601,"top id0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1608,"top id0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top id0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1619,"top id0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1086,"top id0 mux2 out", false,-1, 19,0);
        tracep->declBus(c+1081,"top id0 mux2 key", false,-1, 6,0);
        tracep->declBus(c+1166,"top id0 mux2 default_out", false,-1, 19,0);
        tracep->declArray(c+1167,"top id0 mux2 lut", false,-1, 107,0);
        tracep->declBus(c+1608,"top id0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top id0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1619,"top id0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top id0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1086,"top id0 mux2 i0 out", false,-1, 19,0);
        tracep->declBus(c+1081,"top id0 mux2 i0 key", false,-1, 6,0);
        tracep->declBus(c+1166,"top id0 mux2 i0 default_out", false,-1, 19,0);
        tracep->declArray(c+1167,"top id0 mux2 i0 lut", false,-1, 107,0);
        tracep->declBus(c+1620,"top id0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1171+i*1,"top id0 mux2 i0 pair_list", true,(i+0), 26,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1175+i*1,"top id0 mux2 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1179+i*1,"top id0 mux2 i0 data_list", true,(i+0), 19,0);}}
        tracep->declBus(c+1183,"top id0 mux2 i0 lut_out", false,-1, 19,0);
        tracep->declBit(c+1184,"top id0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1611,"top id0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1477,"top regfile0 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 rst", false,-1);
        tracep->declBit(c+86,"top regfile0 we_i", false,-1);
        tracep->declBus(c+87,"top regfile0 waddr_i", false,-1, 4,0);
        tracep->declQuad(c+65,"top regfile0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+1073,"top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declQuad(c+1044,"top regfile0 rdata1_o", false,-1, 63,0);
        tracep->declBus(c+1074,"top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declQuad(c+1046,"top regfile0 rdata2_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+148+i*2,"top regfile0 diff_reg_o", true,(i+0), 63,0);}}
        tracep->declQuad(c+212,"top regfile0 out_x1", false,-1, 63,0);
        tracep->declQuad(c+214,"top regfile0 out_x2", false,-1, 63,0);
        tracep->declQuad(c+216,"top regfile0 out_x3", false,-1, 63,0);
        tracep->declQuad(c+218,"top regfile0 out_x4", false,-1, 63,0);
        tracep->declQuad(c+220,"top regfile0 out_x5", false,-1, 63,0);
        tracep->declQuad(c+222,"top regfile0 out_x6", false,-1, 63,0);
        tracep->declQuad(c+224,"top regfile0 out_x7", false,-1, 63,0);
        tracep->declQuad(c+226,"top regfile0 out_x8", false,-1, 63,0);
        tracep->declQuad(c+228,"top regfile0 out_x9", false,-1, 63,0);
        tracep->declQuad(c+230,"top regfile0 out_x10", false,-1, 63,0);
        tracep->declQuad(c+232,"top regfile0 out_x11", false,-1, 63,0);
        tracep->declQuad(c+234,"top regfile0 out_x12", false,-1, 63,0);
        tracep->declQuad(c+236,"top regfile0 out_x13", false,-1, 63,0);
        tracep->declQuad(c+238,"top regfile0 out_x14", false,-1, 63,0);
        tracep->declQuad(c+240,"top regfile0 out_x15", false,-1, 63,0);
        tracep->declQuad(c+242,"top regfile0 out_x16", false,-1, 63,0);
        tracep->declQuad(c+244,"top regfile0 out_x17", false,-1, 63,0);
        tracep->declQuad(c+246,"top regfile0 out_x18", false,-1, 63,0);
        tracep->declQuad(c+248,"top regfile0 out_x19", false,-1, 63,0);
        tracep->declQuad(c+250,"top regfile0 out_x20", false,-1, 63,0);
        tracep->declQuad(c+252,"top regfile0 out_x21", false,-1, 63,0);
        tracep->declQuad(c+254,"top regfile0 out_x22", false,-1, 63,0);
        tracep->declQuad(c+256,"top regfile0 out_x23", false,-1, 63,0);
        tracep->declQuad(c+258,"top regfile0 out_x24", false,-1, 63,0);
        tracep->declQuad(c+260,"top regfile0 out_x25", false,-1, 63,0);
        tracep->declQuad(c+262,"top regfile0 out_x26", false,-1, 63,0);
        tracep->declQuad(c+264,"top regfile0 out_x27", false,-1, 63,0);
        tracep->declQuad(c+266,"top regfile0 out_x28", false,-1, 63,0);
        tracep->declQuad(c+268,"top regfile0 out_x29", false,-1, 63,0);
        tracep->declQuad(c+270,"top regfile0 out_x30", false,-1, 63,0);
        tracep->declQuad(c+272,"top regfile0 out_x31", false,-1, 63,0);
        tracep->declBit(c+274,"top regfile0 wen_x1", false,-1);
        tracep->declBit(c+275,"top regfile0 wen_x2", false,-1);
        tracep->declBit(c+276,"top regfile0 wen_x3", false,-1);
        tracep->declBit(c+277,"top regfile0 wen_x4", false,-1);
        tracep->declBit(c+278,"top regfile0 wen_x5", false,-1);
        tracep->declBit(c+279,"top regfile0 wen_x6", false,-1);
        tracep->declBit(c+280,"top regfile0 wen_x7", false,-1);
        tracep->declBit(c+281,"top regfile0 wen_x8", false,-1);
        tracep->declBit(c+282,"top regfile0 wen_x9", false,-1);
        tracep->declBit(c+283,"top regfile0 wen_x10", false,-1);
        tracep->declBit(c+284,"top regfile0 wen_x11", false,-1);
        tracep->declBit(c+285,"top regfile0 wen_x12", false,-1);
        tracep->declBit(c+286,"top regfile0 wen_x13", false,-1);
        tracep->declBit(c+287,"top regfile0 wen_x14", false,-1);
        tracep->declBit(c+288,"top regfile0 wen_x15", false,-1);
        tracep->declBit(c+289,"top regfile0 wen_x16", false,-1);
        tracep->declBit(c+290,"top regfile0 wen_x17", false,-1);
        tracep->declBit(c+291,"top regfile0 wen_x18", false,-1);
        tracep->declBit(c+292,"top regfile0 wen_x19", false,-1);
        tracep->declBit(c+293,"top regfile0 wen_x20", false,-1);
        tracep->declBit(c+294,"top regfile0 wen_x21", false,-1);
        tracep->declBit(c+295,"top regfile0 wen_x22", false,-1);
        tracep->declBit(c+296,"top regfile0 wen_x23", false,-1);
        tracep->declBit(c+297,"top regfile0 wen_x24", false,-1);
        tracep->declBit(c+298,"top regfile0 wen_x25", false,-1);
        tracep->declBit(c+299,"top regfile0 wen_x26", false,-1);
        tracep->declBit(c+300,"top regfile0 wen_x27", false,-1);
        tracep->declBit(c+301,"top regfile0 wen_x28", false,-1);
        tracep->declBit(c+302,"top regfile0 wen_x29", false,-1);
        tracep->declBit(c+303,"top regfile0 wen_x30", false,-1);
        tracep->declBit(c+304,"top regfile0 wen_x31", false,-1);
        tracep->declQuad(c+1185,"top regfile0 rdata1_t", false,-1, 63,0);
        tracep->declQuad(c+1187,"top regfile0 rdata2_t", false,-1, 63,0);
        tracep->declBus(c+1593,"top regfile0 x1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x1 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x1 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x1 din", false,-1, 63,0);
        tracep->declQuad(c+212,"top regfile0 x1 dout", false,-1, 63,0);
        tracep->declBit(c+274,"top regfile0 x1 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x2 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x2 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x2 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x2 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x2 din", false,-1, 63,0);
        tracep->declQuad(c+214,"top regfile0 x2 dout", false,-1, 63,0);
        tracep->declBit(c+275,"top regfile0 x2 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x3 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x3 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x3 din", false,-1, 63,0);
        tracep->declQuad(c+216,"top regfile0 x3 dout", false,-1, 63,0);
        tracep->declBit(c+276,"top regfile0 x3 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x4 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x4 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x4 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x4 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x4 din", false,-1, 63,0);
        tracep->declQuad(c+218,"top regfile0 x4 dout", false,-1, 63,0);
        tracep->declBit(c+277,"top regfile0 x4 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x5 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x5 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x5 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x5 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x5 din", false,-1, 63,0);
        tracep->declQuad(c+220,"top regfile0 x5 dout", false,-1, 63,0);
        tracep->declBit(c+278,"top regfile0 x5 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x6 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x6 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x6 din", false,-1, 63,0);
        tracep->declQuad(c+222,"top regfile0 x6 dout", false,-1, 63,0);
        tracep->declBit(c+279,"top regfile0 x6 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x7 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x7 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x7 din", false,-1, 63,0);
        tracep->declQuad(c+224,"top regfile0 x7 dout", false,-1, 63,0);
        tracep->declBit(c+280,"top regfile0 x7 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x8 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x8 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x8 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x8 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x8 din", false,-1, 63,0);
        tracep->declQuad(c+226,"top regfile0 x8 dout", false,-1, 63,0);
        tracep->declBit(c+281,"top regfile0 x8 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x9 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x9 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x9 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x9 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x9 din", false,-1, 63,0);
        tracep->declQuad(c+228,"top regfile0 x9 dout", false,-1, 63,0);
        tracep->declBit(c+282,"top regfile0 x9 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x10 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x10 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x10 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x10 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x10 din", false,-1, 63,0);
        tracep->declQuad(c+230,"top regfile0 x10 dout", false,-1, 63,0);
        tracep->declBit(c+283,"top regfile0 x10 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x11 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x11 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x11 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x11 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x11 din", false,-1, 63,0);
        tracep->declQuad(c+232,"top regfile0 x11 dout", false,-1, 63,0);
        tracep->declBit(c+284,"top regfile0 x11 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x12 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x12 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x12 din", false,-1, 63,0);
        tracep->declQuad(c+234,"top regfile0 x12 dout", false,-1, 63,0);
        tracep->declBit(c+285,"top regfile0 x12 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x13 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x13 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x13 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x13 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x13 din", false,-1, 63,0);
        tracep->declQuad(c+236,"top regfile0 x13 dout", false,-1, 63,0);
        tracep->declBit(c+286,"top regfile0 x13 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x14 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x14 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x14 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x14 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x14 din", false,-1, 63,0);
        tracep->declQuad(c+238,"top regfile0 x14 dout", false,-1, 63,0);
        tracep->declBit(c+287,"top regfile0 x14 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x15 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x15 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x15 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x15 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x15 din", false,-1, 63,0);
        tracep->declQuad(c+240,"top regfile0 x15 dout", false,-1, 63,0);
        tracep->declBit(c+288,"top regfile0 x15 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x16 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x16 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x16 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x16 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x16 din", false,-1, 63,0);
        tracep->declQuad(c+242,"top regfile0 x16 dout", false,-1, 63,0);
        tracep->declBit(c+289,"top regfile0 x16 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x17 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x17 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x17 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x17 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x17 din", false,-1, 63,0);
        tracep->declQuad(c+244,"top regfile0 x17 dout", false,-1, 63,0);
        tracep->declBit(c+290,"top regfile0 x17 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x18 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x18 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x18 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x18 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x18 din", false,-1, 63,0);
        tracep->declQuad(c+246,"top regfile0 x18 dout", false,-1, 63,0);
        tracep->declBit(c+291,"top regfile0 x18 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x19 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x19 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x19 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x19 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x19 din", false,-1, 63,0);
        tracep->declQuad(c+248,"top regfile0 x19 dout", false,-1, 63,0);
        tracep->declBit(c+292,"top regfile0 x19 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x20 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x20 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x20 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x20 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x20 din", false,-1, 63,0);
        tracep->declQuad(c+250,"top regfile0 x20 dout", false,-1, 63,0);
        tracep->declBit(c+293,"top regfile0 x20 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x21 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x21 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x21 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x21 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x21 din", false,-1, 63,0);
        tracep->declQuad(c+252,"top regfile0 x21 dout", false,-1, 63,0);
        tracep->declBit(c+294,"top regfile0 x21 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x22 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x22 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x22 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x22 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x22 din", false,-1, 63,0);
        tracep->declQuad(c+254,"top regfile0 x22 dout", false,-1, 63,0);
        tracep->declBit(c+295,"top regfile0 x22 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x23 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x23 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x23 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x23 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x23 din", false,-1, 63,0);
        tracep->declQuad(c+256,"top regfile0 x23 dout", false,-1, 63,0);
        tracep->declBit(c+296,"top regfile0 x23 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x24 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x24 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x24 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x24 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x24 din", false,-1, 63,0);
        tracep->declQuad(c+258,"top regfile0 x24 dout", false,-1, 63,0);
        tracep->declBit(c+297,"top regfile0 x24 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x25 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x25 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x25 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x25 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x25 din", false,-1, 63,0);
        tracep->declQuad(c+260,"top regfile0 x25 dout", false,-1, 63,0);
        tracep->declBit(c+298,"top regfile0 x25 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x26 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x26 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x26 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x26 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x26 din", false,-1, 63,0);
        tracep->declQuad(c+262,"top regfile0 x26 dout", false,-1, 63,0);
        tracep->declBit(c+299,"top regfile0 x26 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x27 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x27 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x27 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x27 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x27 din", false,-1, 63,0);
        tracep->declQuad(c+264,"top regfile0 x27 dout", false,-1, 63,0);
        tracep->declBit(c+300,"top regfile0 x27 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x28 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x28 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x28 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x28 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x28 din", false,-1, 63,0);
        tracep->declQuad(c+266,"top regfile0 x28 dout", false,-1, 63,0);
        tracep->declBit(c+301,"top regfile0 x28 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x29 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x29 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x29 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x29 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x29 din", false,-1, 63,0);
        tracep->declQuad(c+268,"top regfile0 x29 dout", false,-1, 63,0);
        tracep->declBit(c+302,"top regfile0 x29 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x30 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x30 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x30 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x30 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x30 din", false,-1, 63,0);
        tracep->declQuad(c+270,"top regfile0 x30 dout", false,-1, 63,0);
        tracep->declBit(c+303,"top regfile0 x30 wen", false,-1);
        tracep->declBus(c+1593,"top regfile0 x31 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top regfile0 x31 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top regfile0 x31 clk", false,-1);
        tracep->declBit(c+1478,"top regfile0 x31 rst", false,-1);
        tracep->declQuad(c+65,"top regfile0 x31 din", false,-1, 63,0);
        tracep->declQuad(c+272,"top regfile0 x31 dout", false,-1, 63,0);
        tracep->declBit(c+304,"top regfile0 x31 wen", false,-1);
        tracep->declBus(c+1621,"top regfile0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1614,"top regfile0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top regfile0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1185,"top regfile0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+1073,"top regfile0 mux1 key", false,-1, 4,0);
        tracep->declQuad(c+1597,"top regfile0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+305,"top regfile0 mux1 lut", false,-1, 2138,0);
        tracep->declBus(c+1621,"top regfile0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1614,"top regfile0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top regfile0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top regfile0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1185,"top regfile0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+1073,"top regfile0 mux1 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1597,"top regfile0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+305,"top regfile0 mux1 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1622,"top regfile0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+372+i*3,"top regfile0 mux1 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+465+i*1,"top regfile0 mux1 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+496+i*2,"top regfile0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1189,"top regfile0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1191,"top regfile0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1623,"top regfile0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1621,"top regfile0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1614,"top regfile0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top regfile0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1187,"top regfile0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+1074,"top regfile0 mux2 key", false,-1, 4,0);
        tracep->declQuad(c+1597,"top regfile0 mux2 default_out", false,-1, 63,0);
        tracep->declArray(c+558,"top regfile0 mux2 lut", false,-1, 2138,0);
        tracep->declBus(c+1621,"top regfile0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1614,"top regfile0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top regfile0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top regfile0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1187,"top regfile0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+1074,"top regfile0 mux2 i0 key", false,-1, 4,0);
        tracep->declQuad(c+1597,"top regfile0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+558,"top regfile0 mux2 i0 lut", false,-1, 2138,0);
        tracep->declBus(c+1622,"top regfile0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declArray(c+625+i*3,"top regfile0 mux2 i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+718+i*1,"top regfile0 mux2 i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+749+i*2,"top regfile0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1192,"top regfile0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1194,"top regfile0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1623,"top regfile0 mux2 i0 i", false,-1, 31,0);
        tracep->declBit(c+1477,"top csr0 clk", false,-1);
        tracep->declBit(c+1478,"top csr0 rst", false,-1);
        tracep->declBit(c+88,"top csr0 we_i", false,-1);
        tracep->declBus(c+89,"top csr0 waddr_i", false,-1, 11,0);
        tracep->declQuad(c+67,"top csr0 wdata_i", false,-1, 63,0);
        tracep->declBus(c+1075,"top csr0 raddr_i", false,-1, 11,0);
        tracep->declQuad(c+1067,"top csr0 rdata_o", false,-1, 63,0);
        tracep->declQuad(c+1597,"top csr0 out_marchid", false,-1, 63,0);
        tracep->declQuad(c+811,"top csr0 out_mtval", false,-1, 63,0);
        tracep->declQuad(c+813,"top csr0 out_mcause", false,-1, 63,0);
        tracep->declQuad(c+1597,"top csr0 out_mcpuid", false,-1, 63,0);
        tracep->declQuad(c+815,"top csr0 out_mepc", false,-1, 63,0);
        tracep->declQuad(c+1597,"top csr0 out_mhartid", false,-1, 63,0);
        tracep->declQuad(c+1597,"top csr0 out_mimpid", false,-1, 63,0);
        tracep->declQuad(c+817,"top csr0 out_mie", false,-1, 63,0);
        tracep->declQuad(c+819,"top csr0 out_mip", false,-1, 63,0);
        tracep->declQuad(c+1597,"top csr0 out_misa", false,-1, 63,0);
        tracep->declQuad(c+821,"top csr0 out_mscratch", false,-1, 63,0);
        tracep->declQuad(c+823,"top csr0 out_mstatus", false,-1, 63,0);
        tracep->declQuad(c+1624,"top csr0 out_mtvec", false,-1, 63,0);
        tracep->declQuad(c+1597,"top csr0 out_mvendorid", false,-1, 63,0);
        tracep->declBit(c+825,"top csr0 wen_mtval", false,-1);
        tracep->declBit(c+826,"top csr0 wen_mcause", false,-1);
        tracep->declBit(c+827,"top csr0 wen_mepc", false,-1);
        tracep->declBit(c+828,"top csr0 wen_mie", false,-1);
        tracep->declBit(c+829,"top csr0 wen_mip", false,-1);
        tracep->declBit(c+830,"top csr0 wen_mscratch", false,-1);
        tracep->declBit(c+831,"top csr0 wen_mstatus", false,-1);
        tracep->declBit(c+832,"top csr0 out_mcause_interrupt", false,-1);
        tracep->declBus(c+833,"top csr0 out_mcause_code", false,-1, 4,0);
        tracep->declQuad(c+834,"top csr0 out_mepc_H62", false,-1, 61,0);
        tracep->declBit(c+836,"top csr0 out_mie_mtie", false,-1);
        tracep->declBit(c+837,"top csr0 out_mie_msie", false,-1);
        tracep->declBit(c+838,"top csr0 out_mip_mtip", false,-1);
        tracep->declBit(c+839,"top csr0 out_mip_msip", false,-1);
        tracep->declBit(c+840,"top csr0 out_mstatus_ie1", false,-1);
        tracep->declBit(c+841,"top csr0 out_mstatus_ie", false,-1);
        tracep->declBus(c+1593,"top csr0 reg_mtval WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top csr0 reg_mtval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top csr0 reg_mtval clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mtval rst", false,-1);
        tracep->declQuad(c+67,"top csr0 reg_mtval din", false,-1, 63,0);
        tracep->declQuad(c+811,"top csr0 reg_mtval dout", false,-1, 63,0);
        tracep->declBit(c+825,"top csr0 reg_mtval wen", false,-1);
        tracep->declBus(c+1599,"top csr0 reg_mcause_interrupt WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top csr0 reg_mcause_interrupt RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top csr0 reg_mcause_interrupt clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mcause_interrupt rst", false,-1);
        tracep->declBus(c+842,"top csr0 reg_mcause_interrupt din", false,-1, 0,0);
        tracep->declBus(c+832,"top csr0 reg_mcause_interrupt dout", false,-1, 0,0);
        tracep->declBit(c+826,"top csr0 reg_mcause_interrupt wen", false,-1);
        tracep->declBus(c+1614,"top csr0 reg_mcause_code WIDTH", false,-1, 31,0);
        tracep->declBus(c+1626,"top csr0 reg_mcause_code RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1477,"top csr0 reg_mcause_code clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mcause_code rst", false,-1);
        tracep->declBus(c+843,"top csr0 reg_mcause_code din", false,-1, 4,0);
        tracep->declBus(c+833,"top csr0 reg_mcause_code dout", false,-1, 4,0);
        tracep->declBit(c+826,"top csr0 reg_mcause_code wen", false,-1);
        tracep->declBus(c+1627,"top csr0 reg_mepc_H62 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1628,"top csr0 reg_mepc_H62 RESET_VAL", false,-1, 61,0);
        tracep->declBit(c+1477,"top csr0 reg_mepc_H62 clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mepc_H62 rst", false,-1);
        tracep->declQuad(c+844,"top csr0 reg_mepc_H62 din", false,-1, 61,0);
        tracep->declQuad(c+834,"top csr0 reg_mepc_H62 dout", false,-1, 61,0);
        tracep->declBit(c+827,"top csr0 reg_mepc_H62 wen", false,-1);
        tracep->declBus(c+1599,"top csr0 reg_mie_mtie WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top csr0 reg_mie_mtie RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top csr0 reg_mie_mtie clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mie_mtie rst", false,-1);
        tracep->declBus(c+846,"top csr0 reg_mie_mtie din", false,-1, 0,0);
        tracep->declBus(c+836,"top csr0 reg_mie_mtie dout", false,-1, 0,0);
        tracep->declBit(c+828,"top csr0 reg_mie_mtie wen", false,-1);
        tracep->declBus(c+1599,"top csr0 reg_mie_msie WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top csr0 reg_mie_msie RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top csr0 reg_mie_msie clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mie_msie rst", false,-1);
        tracep->declBus(c+847,"top csr0 reg_mie_msie din", false,-1, 0,0);
        tracep->declBus(c+837,"top csr0 reg_mie_msie dout", false,-1, 0,0);
        tracep->declBit(c+828,"top csr0 reg_mie_msie wen", false,-1);
        tracep->declBus(c+1599,"top csr0 reg_mip_mtip WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top csr0 reg_mip_mtip RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top csr0 reg_mip_mtip clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mip_mtip rst", false,-1);
        tracep->declBus(c+846,"top csr0 reg_mip_mtip din", false,-1, 0,0);
        tracep->declBus(c+838,"top csr0 reg_mip_mtip dout", false,-1, 0,0);
        tracep->declBit(c+829,"top csr0 reg_mip_mtip wen", false,-1);
        tracep->declBus(c+1599,"top csr0 reg_mip_msip WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top csr0 reg_mip_msip RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top csr0 reg_mip_msip clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mip_msip rst", false,-1);
        tracep->declBus(c+848,"top csr0 reg_mip_msip din", false,-1, 0,0);
        tracep->declBus(c+839,"top csr0 reg_mip_msip dout", false,-1, 0,0);
        tracep->declBit(c+829,"top csr0 reg_mip_msip wen", false,-1);
        tracep->declBus(c+1593,"top csr0 reg_mscratch WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top csr0 reg_mscratch RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top csr0 reg_mscratch clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mscratch rst", false,-1);
        tracep->declQuad(c+67,"top csr0 reg_mscratch din", false,-1, 63,0);
        tracep->declQuad(c+821,"top csr0 reg_mscratch dout", false,-1, 63,0);
        tracep->declBit(c+830,"top csr0 reg_mscratch wen", false,-1);
        tracep->declBus(c+1599,"top csr0 reg_mstatus_ie1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top csr0 reg_mstatus_ie1 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top csr0 reg_mstatus_ie1 clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mstatus_ie1 rst", false,-1);
        tracep->declBus(c+847,"top csr0 reg_mstatus_ie1 din", false,-1, 0,0);
        tracep->declBus(c+840,"top csr0 reg_mstatus_ie1 dout", false,-1, 0,0);
        tracep->declBit(c+831,"top csr0 reg_mstatus_ie1 wen", false,-1);
        tracep->declBus(c+1599,"top csr0 reg_mstatus_ie WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top csr0 reg_mstatus_ie RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top csr0 reg_mstatus_ie clk", false,-1);
        tracep->declBit(c+1478,"top csr0 reg_mstatus_ie rst", false,-1);
        tracep->declBus(c+849,"top csr0 reg_mstatus_ie din", false,-1, 0,0);
        tracep->declBus(c+841,"top csr0 reg_mstatus_ie dout", false,-1, 0,0);
        tracep->declBit(c+831,"top csr0 reg_mstatus_ie wen", false,-1);
        tracep->declBus(c+1630,"top csr0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1631,"top csr0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top csr0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1067,"top csr0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+1075,"top csr0 mux1 key", false,-1, 11,0);
        tracep->declQuad(c+1597,"top csr0 mux1 default_out", false,-1, 63,0);
        tracep->declArray(c+850,"top csr0 mux1 lut", false,-1, 1063,0);
        tracep->declBus(c+1630,"top csr0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1631,"top csr0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top csr0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top csr0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1067,"top csr0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+1075,"top csr0 mux1 i0 key", false,-1, 11,0);
        tracep->declQuad(c+1597,"top csr0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+850,"top csr0 mux1 i0 lut", false,-1, 1063,0);
        tracep->declBus(c+1632,"top csr0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<14; i++) {
                tracep->declArray(c+884+i*3,"top csr0 mux1 i0 pair_list", true,(i+0), 75,0);}}
        {int i; for (i=0; i<14; i++) {
                tracep->declBus(c+926+i*1,"top csr0 mux1 i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<14; i++) {
                tracep->declQuad(c+940+i*2,"top csr0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1195,"top csr0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1197,"top csr0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1633,"top csr0 mux1 i0 i", false,-1, 31,0);
        tracep->declBit(c+1477,"top id_ex0 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 rst", false,-1);
        tracep->declBus(c+1073,"top id_ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+1074,"top id_ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+1075,"top id_ex0 csr_raddr_i", false,-1, 11,0);
        tracep->declBus(c+1081,"top id_ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+1082,"top id_ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+1083,"top id_ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+1069,"top id_ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1071,"top id_ex0 rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+1048,"top id_ex0 csr_data_i", false,-1, 63,0);
        tracep->declBus(c+1076,"top id_ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+1075,"top id_ex0 csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+1084,"top id_ex0 wreg_i", false,-1);
        tracep->declBit(c+1085,"top id_ex0 csr_wreg_i", false,-1);
        tracep->declBus(c+1086,"top id_ex0 imm_i", false,-1, 19,0);
        tracep->declBit(c+1087,"top id_ex0 imm_sel_i", false,-1);
        tracep->declQuad(c+46,"top id_ex0 pc_i", false,-1, 63,0);
        tracep->declBus(c+1091,"top id_ex0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+58,"top id_ex0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+59,"top id_ex0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+60,"top id_ex0 csr_raddr_o", false,-1, 11,0);
        tracep->declBus(c+75,"top id_ex0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+76,"top id_ex0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+77,"top id_ex0 funct7_o", false,-1, 6,0);
        tracep->declQuad(c+52,"top id_ex0 rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+54,"top id_ex0 rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+56,"top id_ex0 csr_data_o", false,-1, 63,0);
        tracep->declBus(c+61,"top id_ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+62,"top id_ex0 csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+80,"top id_ex0 wreg_o", false,-1);
        tracep->declBit(c+81,"top id_ex0 csr_wreg_o", false,-1);
        tracep->declBus(c+84,"top id_ex0 imm_o", false,-1, 19,0);
        tracep->declBit(c+85,"top id_ex0 imm_sel_o", false,-1);
        tracep->declQuad(c+48,"top id_ex0 pc_o", false,-1, 63,0);
        tracep->declBus(c+1198,"top id_ex0 rs1_addr_t", false,-1, 4,0);
        tracep->declBit(c+1199,"top id_ex0 rs1_addr_wen", false,-1);
        tracep->declBus(c+1200,"top id_ex0 rs2_addr_t", false,-1, 4,0);
        tracep->declBit(c+1199,"top id_ex0 rs2_addr_wen", false,-1);
        tracep->declBus(c+1201,"top id_ex0 csr_raddr_t", false,-1, 11,0);
        tracep->declBit(c+1199,"top id_ex0 csr_raddr_wen", false,-1);
        tracep->declBus(c+1202,"top id_ex0 opcode_t", false,-1, 6,0);
        tracep->declBit(c+1199,"top id_ex0 opcode_wen", false,-1);
        tracep->declBus(c+1203,"top id_ex0 funct3_t", false,-1, 2,0);
        tracep->declBit(c+1199,"top id_ex0 funct3_wen", false,-1);
        tracep->declBus(c+1204,"top id_ex0 funct7_t", false,-1, 6,0);
        tracep->declBit(c+1199,"top id_ex0 funct7_wen", false,-1);
        tracep->declQuad(c+1205,"top id_ex0 rs1_data_t", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 rs1_data_wen", false,-1);
        tracep->declQuad(c+1207,"top id_ex0 rs2_data_t", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 rs2_data_wen", false,-1);
        tracep->declQuad(c+1050,"top id_ex0 csr_data_t", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 csr_data_wen", false,-1);
        tracep->declBus(c+1209,"top id_ex0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+1199,"top id_ex0 rd_addr_wen", false,-1);
        tracep->declBus(c+1201,"top id_ex0 csr_waddr_t", false,-1, 11,0);
        tracep->declBit(c+1199,"top id_ex0 csr_waddr_wen", false,-1);
        tracep->declBit(c+1210,"top id_ex0 wreg_t", false,-1);
        tracep->declBit(c+1199,"top id_ex0 wreg_wen", false,-1);
        tracep->declBit(c+1211,"top id_ex0 csr_wreg_t", false,-1);
        tracep->declBit(c+1199,"top id_ex0 csr_wreg_wen", false,-1);
        tracep->declBus(c+1212,"top id_ex0 imm_t", false,-1, 19,0);
        tracep->declBit(c+1199,"top id_ex0 imm_wen", false,-1);
        tracep->declBit(c+1213,"top id_ex0 imm_sel_t", false,-1);
        tracep->declBit(c+1199,"top id_ex0 imm_sel_wen", false,-1);
        tracep->declQuad(c+1052,"top id_ex0 pc_t", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 pc_wen", false,-1);
        tracep->declBus(c+1614,"top id_ex0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1626,"top id_ex0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1477,"top id_ex0 reg1 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg1 rst", false,-1);
        tracep->declBus(c+1198,"top id_ex0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+58,"top id_ex0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+1199,"top id_ex0 reg1 wen", false,-1);
        tracep->declBus(c+1614,"top id_ex0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1626,"top id_ex0 reg2 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1477,"top id_ex0 reg2 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg2 rst", false,-1);
        tracep->declBus(c+1200,"top id_ex0 reg2 din", false,-1, 4,0);
        tracep->declBus(c+59,"top id_ex0 reg2 dout", false,-1, 4,0);
        tracep->declBit(c+1199,"top id_ex0 reg2 wen", false,-1);
        tracep->declBus(c+1631,"top id_ex0 reg_csr_raddr WIDTH", false,-1, 31,0);
        tracep->declBus(c+1634,"top id_ex0 reg_csr_raddr RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+1477,"top id_ex0 reg_csr_raddr clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg_csr_raddr rst", false,-1);
        tracep->declBus(c+1201,"top id_ex0 reg_csr_raddr din", false,-1, 11,0);
        tracep->declBus(c+60,"top id_ex0 reg_csr_raddr dout", false,-1, 11,0);
        tracep->declBit(c+1199,"top id_ex0 reg_csr_raddr wen", false,-1);
        tracep->declBus(c+1604,"top id_ex0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1635,"top id_ex0 reg3 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1477,"top id_ex0 reg3 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg3 rst", false,-1);
        tracep->declBus(c+1202,"top id_ex0 reg3 din", false,-1, 6,0);
        tracep->declBus(c+75,"top id_ex0 reg3 dout", false,-1, 6,0);
        tracep->declBit(c+1199,"top id_ex0 reg3 wen", false,-1);
        tracep->declBus(c+1609,"top id_ex0 reg4 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1636,"top id_ex0 reg4 RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+1477,"top id_ex0 reg4 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg4 rst", false,-1);
        tracep->declBus(c+1203,"top id_ex0 reg4 din", false,-1, 2,0);
        tracep->declBus(c+76,"top id_ex0 reg4 dout", false,-1, 2,0);
        tracep->declBit(c+1199,"top id_ex0 reg4 wen", false,-1);
        tracep->declBus(c+1604,"top id_ex0 reg5 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1635,"top id_ex0 reg5 RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1477,"top id_ex0 reg5 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg5 rst", false,-1);
        tracep->declBus(c+1204,"top id_ex0 reg5 din", false,-1, 6,0);
        tracep->declBus(c+77,"top id_ex0 reg5 dout", false,-1, 6,0);
        tracep->declBit(c+1199,"top id_ex0 reg5 wen", false,-1);
        tracep->declBus(c+1593,"top id_ex0 reg6 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top id_ex0 reg6 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top id_ex0 reg6 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg6 rst", false,-1);
        tracep->declQuad(c+1205,"top id_ex0 reg6 din", false,-1, 63,0);
        tracep->declQuad(c+52,"top id_ex0 reg6 dout", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 reg6 wen", false,-1);
        tracep->declBus(c+1593,"top id_ex0 reg7 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top id_ex0 reg7 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top id_ex0 reg7 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg7 rst", false,-1);
        tracep->declQuad(c+1207,"top id_ex0 reg7 din", false,-1, 63,0);
        tracep->declQuad(c+54,"top id_ex0 reg7 dout", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 reg7 wen", false,-1);
        tracep->declBus(c+1593,"top id_ex0 reg_csr_data WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top id_ex0 reg_csr_data RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top id_ex0 reg_csr_data clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg_csr_data rst", false,-1);
        tracep->declQuad(c+1050,"top id_ex0 reg_csr_data din", false,-1, 63,0);
        tracep->declQuad(c+56,"top id_ex0 reg_csr_data dout", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 reg_csr_data wen", false,-1);
        tracep->declBus(c+1614,"top id_ex0 reg8 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1626,"top id_ex0 reg8 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1477,"top id_ex0 reg8 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg8 rst", false,-1);
        tracep->declBus(c+1209,"top id_ex0 reg8 din", false,-1, 4,0);
        tracep->declBus(c+61,"top id_ex0 reg8 dout", false,-1, 4,0);
        tracep->declBit(c+1199,"top id_ex0 reg8 wen", false,-1);
        tracep->declBus(c+1631,"top id_ex0 reg_csr_waddr WIDTH", false,-1, 31,0);
        tracep->declBus(c+1634,"top id_ex0 reg_csr_waddr RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+1477,"top id_ex0 reg_csr_waddr clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg_csr_waddr rst", false,-1);
        tracep->declBus(c+1201,"top id_ex0 reg_csr_waddr din", false,-1, 11,0);
        tracep->declBus(c+62,"top id_ex0 reg_csr_waddr dout", false,-1, 11,0);
        tracep->declBit(c+1199,"top id_ex0 reg_csr_waddr wen", false,-1);
        tracep->declBus(c+1599,"top id_ex0 reg9 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top id_ex0 reg9 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top id_ex0 reg9 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg9 rst", false,-1);
        tracep->declBus(c+1210,"top id_ex0 reg9 din", false,-1, 0,0);
        tracep->declBus(c+80,"top id_ex0 reg9 dout", false,-1, 0,0);
        tracep->declBit(c+1199,"top id_ex0 reg9 wen", false,-1);
        tracep->declBus(c+1599,"top id_ex0 reg_csr_wreg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top id_ex0 reg_csr_wreg RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top id_ex0 reg_csr_wreg clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg_csr_wreg rst", false,-1);
        tracep->declBus(c+1211,"top id_ex0 reg_csr_wreg din", false,-1, 0,0);
        tracep->declBus(c+81,"top id_ex0 reg_csr_wreg dout", false,-1, 0,0);
        tracep->declBit(c+1199,"top id_ex0 reg_csr_wreg wen", false,-1);
        tracep->declBus(c+1619,"top id_ex0 reg10 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1637,"top id_ex0 reg10 RESET_VAL", false,-1, 19,0);
        tracep->declBit(c+1477,"top id_ex0 reg10 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg10 rst", false,-1);
        tracep->declBus(c+1212,"top id_ex0 reg10 din", false,-1, 19,0);
        tracep->declBus(c+84,"top id_ex0 reg10 dout", false,-1, 19,0);
        tracep->declBit(c+1199,"top id_ex0 reg10 wen", false,-1);
        tracep->declBus(c+1599,"top id_ex0 reg_imm_sel WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top id_ex0 reg_imm_sel RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top id_ex0 reg_imm_sel clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg_imm_sel rst", false,-1);
        tracep->declBus(c+1213,"top id_ex0 reg_imm_sel din", false,-1, 0,0);
        tracep->declBus(c+85,"top id_ex0 reg_imm_sel dout", false,-1, 0,0);
        tracep->declBit(c+1199,"top id_ex0 reg_imm_sel wen", false,-1);
        tracep->declBus(c+1593,"top id_ex0 reg12 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top id_ex0 reg12 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top id_ex0 reg12 clk", false,-1);
        tracep->declBit(c+1478,"top id_ex0 reg12 rst", false,-1);
        tracep->declQuad(c+1052,"top id_ex0 reg12 din", false,-1, 63,0);
        tracep->declQuad(c+48,"top id_ex0 reg12 dout", false,-1, 63,0);
        tracep->declBit(c+1199,"top id_ex0 reg12 wen", false,-1);
        tracep->declBus(c+58,"top ex0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+59,"top ex0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+60,"top ex0 csr_raddr_i", false,-1, 11,0);
        tracep->declBus(c+75,"top ex0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+76,"top ex0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+77,"top ex0 funct7_i", false,-1, 6,0);
        tracep->declQuad(c+52,"top ex0 rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+54,"top ex0 rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex0 csr_data_i", false,-1, 63,0);
        tracep->declBus(c+61,"top ex0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+62,"top ex0 csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+80,"top ex0 wreg_i", false,-1);
        tracep->declBit(c+81,"top ex0 csr_wreg_i", false,-1);
        tracep->declBus(c+84,"top ex0 imm_i", false,-1, 19,0);
        tracep->declBit(c+85,"top ex0 imm_sel_i", false,-1);
        tracep->declQuad(c+48,"top ex0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+1079,"top ex0 mem_back_wdata_i", false,-1, 63,0);
        tracep->declBus(c+63,"top ex0 mem_back_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+82,"top ex0 mem_back_wreg_i", false,-1);
        tracep->declQuad(c+73,"top ex0 mem_back_csr_wdata_i", false,-1, 63,0);
        tracep->declBus(c+64,"top ex0 mem_back_csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+83,"top ex0 mem_back_csr_wreg_i", false,-1);
        tracep->declBus(c+61,"top ex0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+62,"top ex0 csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+80,"top ex0 wreg_o", false,-1);
        tracep->declBit(c+81,"top ex0 csr_wreg_o", false,-1);
        tracep->declQuad(c+1077,"top ex0 wdata_o", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex0 csr_wdata_o", false,-1, 63,0);
        tracep->declBus(c+75,"top ex0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+76,"top ex0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+61,"top ex0 ex_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+80,"top ex0 ex_back_wreg_o", false,-1);
        tracep->declQuad(c+1077,"top ex0 ex_back_wdata_o", false,-1, 63,0);
        tracep->declBus(c+62,"top ex0 ex_back_csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+81,"top ex0 ex_back_csr_wreg_o", false,-1);
        tracep->declQuad(c+69,"top ex0 ex_back_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+1088,"top ex0 branch_flag_o", false,-1);
        tracep->declQuad(c+48,"top ex0 ex_to_ex_mem_pc_o", false,-1, 63,0);
        tracep->declQuad(c+90,"top ex0 pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+1214,"top ex0 rs1_data", false,-1, 63,0);
        tracep->declQuad(c+1216,"top ex0 rs2_data", false,-1, 63,0);
        tracep->declQuad(c+968,"top ex0 csr_data", false,-1, 63,0);
        tracep->declBus(c+1218,"top ex0 wdata_addiw", false,-1, 31,0);
        tracep->declQuad(c+1077,"top ex0 wdata_t", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex0 csr_wdata_t", false,-1, 63,0);
        tracep->declQuad(c+1219,"top ex0 wdata_t_add", false,-1, 63,0);
        tracep->declQuad(c+1054,"top ex0 wdata_t_addi", false,-1, 63,0);
        tracep->declQuad(c+1221,"top ex0 wdata_t_addiw", false,-1, 63,0);
        tracep->declQuad(c+970,"top ex0 wdata_t_auipc", false,-1, 63,0);
        tracep->declQuad(c+972,"top ex0 wdata_t_lui", false,-1, 63,0);
        tracep->declQuad(c+1223,"top ex0 wdata_t_sub", false,-1, 63,0);
        tracep->declQuad(c+968,"top ex0 wdata_t_csr", false,-1, 63,0);
        tracep->declQuad(c+968,"top ex0 wdata_opcode_I_csr", false,-1, 63,0);
        tracep->declQuad(c+974,"top ex0 wdata_opcode_J", false,-1, 63,0);
        tracep->declQuad(c+1225,"top ex0 wdata_opcode_R", false,-1, 63,0);
        tracep->declQuad(c+970,"top ex0 wdata_opcode_U_auipc", false,-1, 63,0);
        tracep->declQuad(c+972,"top ex0 wdata_opcode_U_lui", false,-1, 63,0);
        tracep->declQuad(c+1227,"top ex0 wdata_funct3_add_sub_mul", false,-1, 63,0);
        tracep->declBus(c+58,"top ex0 zimm", false,-1, 4,0);
        tracep->declQuad(c+976,"top ex0 csr_wdata_t_csrrc", false,-1, 63,0);
        tracep->declQuad(c+978,"top ex0 csr_wdata_t_csrrci", false,-1, 63,0);
        tracep->declQuad(c+980,"top ex0 csr_wdata_t_csrrs", false,-1, 63,0);
        tracep->declQuad(c+982,"top ex0 csr_wdata_t_csrrsi", false,-1, 63,0);
        tracep->declQuad(c+52,"top ex0 csr_wdata_t_csrrw", false,-1, 63,0);
        tracep->declQuad(c+984,"top ex0 csr_wdata_t_csrrwi", false,-1, 63,0);
        tracep->declBit(c+1088,"top ex0 branch_flag_t", false,-1);
        tracep->declBit(c+1229,"top ex0 branch_flag_t_beq", false,-1);
        tracep->declBit(c+1230,"top ex0 branch_flag_t_bge", false,-1);
        tracep->declBit(c+1231,"top ex0 branch_flag_t_bne", false,-1);
        tracep->declQuad(c+986,"top ex0 pc_new_bne", false,-1, 63,0);
        tracep->declQuad(c+988,"top ex0 pc_new_jal", false,-1, 63,0);
        tracep->declBus(c+1614,"top ex0 mux_t NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top ex0 mux_t KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_t DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1077,"top ex0 mux_t out", false,-1, 63,0);
        tracep->declBus(c+75,"top ex0 mux_t key", false,-1, 6,0);
        tracep->declQuad(c+1597,"top ex0 mux_t default_out", false,-1, 63,0);
        tracep->declArray(c+1232,"top ex0 mux_t lut", false,-1, 354,0);
        tracep->declBus(c+1614,"top ex0 mux_t i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top ex0 mux_t i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_t i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ex0 mux_t i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1077,"top ex0 mux_t i0 out", false,-1, 63,0);
        tracep->declBus(c+75,"top ex0 mux_t i0 key", false,-1, 6,0);
        tracep->declQuad(c+1597,"top ex0 mux_t i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1232,"top ex0 mux_t i0 lut", false,-1, 354,0);
        tracep->declBus(c+1638,"top ex0 mux_t i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+1244+i*3,"top ex0 mux_t i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1259+i*1,"top ex0 mux_t i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+1264+i*2,"top ex0 mux_t i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1274,"top ex0 mux_t i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1276,"top ex0 mux_t i0 hit", false,-1);
        tracep->declBus(c+1639,"top ex0 mux_t i0 i", false,-1, 31,0);
        tracep->declBus(c+1609,"top ex0 mux_R NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top ex0 mux_R KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_R DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1225,"top ex0 mux_R out", false,-1, 63,0);
        tracep->declBus(c+76,"top ex0 mux_R key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top ex0 mux_R default_out", false,-1, 63,0);
        tracep->declArray(c+1277,"top ex0 mux_R lut", false,-1, 200,0);
        tracep->declBus(c+1609,"top ex0 mux_R i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top ex0 mux_R i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_R i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ex0 mux_R i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1225,"top ex0 mux_R i0 out", false,-1, 63,0);
        tracep->declBus(c+76,"top ex0 mux_R i0 key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top ex0 mux_R i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1277,"top ex0 mux_R i0 lut", false,-1, 200,0);
        tracep->declBus(c+1610,"top ex0 mux_R i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1284+i*3,"top ex0 mux_R i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1293+i*1,"top ex0 mux_R i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1296+i*2,"top ex0 mux_R i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1302,"top ex0 mux_R i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1304,"top ex0 mux_R i0 hit", false,-1);
        tracep->declBus(c+1640,"top ex0 mux_R i0 i", false,-1, 31,0);
        tracep->declBus(c+1596,"top ex0 mux_funct3_asm NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top ex0 mux_funct3_asm KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_funct3_asm DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1227,"top ex0 mux_funct3_asm out", false,-1, 63,0);
        tracep->declBus(c+77,"top ex0 mux_funct3_asm key", false,-1, 6,0);
        tracep->declQuad(c+1597,"top ex0 mux_funct3_asm default_out", false,-1, 63,0);
        tracep->declArray(c+1305,"top ex0 mux_funct3_asm lut", false,-1, 141,0);
        tracep->declBus(c+1596,"top ex0 mux_funct3_asm i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top ex0 mux_funct3_asm i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_funct3_asm i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ex0 mux_funct3_asm i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1227,"top ex0 mux_funct3_asm i0 out", false,-1, 63,0);
        tracep->declBus(c+77,"top ex0 mux_funct3_asm i0 key", false,-1, 6,0);
        tracep->declQuad(c+1597,"top ex0 mux_funct3_asm i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1305,"top ex0 mux_funct3_asm i0 lut", false,-1, 141,0);
        tracep->declBus(c+1638,"top ex0 mux_funct3_asm i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+1310+i*3,"top ex0 mux_funct3_asm i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1316+i*1,"top ex0 mux_funct3_asm i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1318+i*2,"top ex0 mux_funct3_asm i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1322,"top ex0 mux_funct3_asm i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1324,"top ex0 mux_funct3_asm i0 hit", false,-1);
        tracep->declBus(c+1601,"top ex0 mux_funct3_asm i0 i", false,-1, 31,0);
        tracep->declBus(c+1641,"top ex0 mux_csr_wdata NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top ex0 mux_csr_wdata KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_csr_wdata DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+69,"top ex0 mux_csr_wdata out", false,-1, 63,0);
        tracep->declBus(c+76,"top ex0 mux_csr_wdata key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top ex0 mux_csr_wdata default_out", false,-1, 63,0);
        tracep->declArray(c+990,"top ex0 mux_csr_wdata lut", false,-1, 401,0);
        tracep->declBus(c+1641,"top ex0 mux_csr_wdata i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top ex0 mux_csr_wdata i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top ex0 mux_csr_wdata i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ex0 mux_csr_wdata i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+69,"top ex0 mux_csr_wdata i0 out", false,-1, 63,0);
        tracep->declBus(c+76,"top ex0 mux_csr_wdata i0 key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top ex0 mux_csr_wdata i0 default_out", false,-1, 63,0);
        tracep->declArray(c+990,"top ex0 mux_csr_wdata i0 lut", false,-1, 401,0);
        tracep->declBus(c+1610,"top ex0 mux_csr_wdata i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+1003+i*3,"top ex0 mux_csr_wdata i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1021+i*1,"top ex0 mux_csr_wdata i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+1027+i*2,"top ex0 mux_csr_wdata i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1039,"top ex0 mux_csr_wdata i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1041,"top ex0 mux_csr_wdata i0 hit", false,-1);
        tracep->declBus(c+1642,"top ex0 mux_csr_wdata i0 i", false,-1, 31,0);
        tracep->declBit(c+1477,"top ex_mem0 clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 rst", false,-1);
        tracep->declBus(c+61,"top ex_mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+62,"top ex_mem0 csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+80,"top ex_mem0 wreg_i", false,-1);
        tracep->declBit(c+81,"top ex_mem0 csr_wreg_i", false,-1);
        tracep->declQuad(c+1077,"top ex_mem0 wdata_i", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_mem0 csr_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+48,"top ex_mem0 ex_to_ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+75,"top ex_mem0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+76,"top ex_mem0 funct3_i", false,-1, 2,0);
        tracep->declBus(c+1092,"top ex_mem0 ctrl_signal_i", false,-1, 1,0);
        tracep->declBus(c+63,"top ex_mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+64,"top ex_mem0 csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+82,"top ex_mem0 wreg_o", false,-1);
        tracep->declBit(c+83,"top ex_mem0 csr_wreg_o", false,-1);
        tracep->declQuad(c+71,"top ex_mem0 wdata_o", false,-1, 63,0);
        tracep->declQuad(c+73,"top ex_mem0 csr_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+50,"top ex_mem0 ex_mem_to_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+78,"top ex_mem0 opcode_o", false,-1, 6,0);
        tracep->declBus(c+79,"top ex_mem0 funct3_o", false,-1, 2,0);
        tracep->declBus(c+1056,"top ex_mem0 rd_addr_t", false,-1, 4,0);
        tracep->declBit(c+1325,"top ex_mem0 rd_addr_wen", false,-1);
        tracep->declBus(c+1057,"top ex_mem0 csr_waddr_t", false,-1, 11,0);
        tracep->declBit(c+1325,"top ex_mem0 csr_waddr_wen", false,-1);
        tracep->declBit(c+1058,"top ex_mem0 wreg_t", false,-1);
        tracep->declBit(c+1325,"top ex_mem0 wreg_wen", false,-1);
        tracep->declBit(c+1059,"top ex_mem0 csr_wreg_t", false,-1);
        tracep->declBit(c+1325,"top ex_mem0 csr_wreg_wen", false,-1);
        tracep->declQuad(c+1326,"top ex_mem0 wdata_t", false,-1, 63,0);
        tracep->declBit(c+1325,"top ex_mem0 wdata_wen", false,-1);
        tracep->declQuad(c+1060,"top ex_mem0 csr_wdata_t", false,-1, 63,0);
        tracep->declBit(c+1325,"top ex_mem0 csr_wdata_wen", false,-1);
        tracep->declQuad(c+1062,"top ex_mem0 ex_mem_to_mem_pc_t", false,-1, 63,0);
        tracep->declBit(c+1325,"top ex_mem0 ex_mem_to_mem_pc_wen", false,-1);
        tracep->declBus(c+1064,"top ex_mem0 opcode_t", false,-1, 6,0);
        tracep->declBit(c+1325,"top ex_mem0 opcode_wen", false,-1);
        tracep->declBus(c+1065,"top ex_mem0 funct3_t", false,-1, 2,0);
        tracep->declBit(c+1325,"top ex_mem0 funct3_wen", false,-1);
        tracep->declBus(c+1614,"top ex_mem0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1626,"top ex_mem0 reg1 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1477,"top ex_mem0 reg1 clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg1 rst", false,-1);
        tracep->declBus(c+1056,"top ex_mem0 reg1 din", false,-1, 4,0);
        tracep->declBus(c+63,"top ex_mem0 reg1 dout", false,-1, 4,0);
        tracep->declBit(c+1325,"top ex_mem0 reg1 wen", false,-1);
        tracep->declBus(c+1631,"top ex_mem0 reg_csr_waddr WIDTH", false,-1, 31,0);
        tracep->declBus(c+1634,"top ex_mem0 reg_csr_waddr RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+1477,"top ex_mem0 reg_csr_waddr clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg_csr_waddr rst", false,-1);
        tracep->declBus(c+1057,"top ex_mem0 reg_csr_waddr din", false,-1, 11,0);
        tracep->declBus(c+64,"top ex_mem0 reg_csr_waddr dout", false,-1, 11,0);
        tracep->declBit(c+1325,"top ex_mem0 reg_csr_waddr wen", false,-1);
        tracep->declBus(c+1599,"top ex_mem0 reg_2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top ex_mem0 reg_2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top ex_mem0 reg_2 clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg_2 rst", false,-1);
        tracep->declBus(c+1058,"top ex_mem0 reg_2 din", false,-1, 0,0);
        tracep->declBus(c+82,"top ex_mem0 reg_2 dout", false,-1, 0,0);
        tracep->declBit(c+1325,"top ex_mem0 reg_2 wen", false,-1);
        tracep->declBus(c+1599,"top ex_mem0 reg_csr_wreg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top ex_mem0 reg_csr_wreg RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top ex_mem0 reg_csr_wreg clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg_csr_wreg rst", false,-1);
        tracep->declBus(c+1059,"top ex_mem0 reg_csr_wreg din", false,-1, 0,0);
        tracep->declBus(c+83,"top ex_mem0 reg_csr_wreg dout", false,-1, 0,0);
        tracep->declBit(c+1325,"top ex_mem0 reg_csr_wreg wen", false,-1);
        tracep->declBus(c+1593,"top ex_mem0 reg3 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top ex_mem0 reg3 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top ex_mem0 reg3 clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg3 rst", false,-1);
        tracep->declQuad(c+1326,"top ex_mem0 reg3 din", false,-1, 63,0);
        tracep->declQuad(c+71,"top ex_mem0 reg3 dout", false,-1, 63,0);
        tracep->declBit(c+1325,"top ex_mem0 reg3 wen", false,-1);
        tracep->declBus(c+1593,"top ex_mem0 reg_csr_wdata WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top ex_mem0 reg_csr_wdata RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top ex_mem0 reg_csr_wdata clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg_csr_wdata rst", false,-1);
        tracep->declQuad(c+1060,"top ex_mem0 reg_csr_wdata din", false,-1, 63,0);
        tracep->declQuad(c+73,"top ex_mem0 reg_csr_wdata dout", false,-1, 63,0);
        tracep->declBit(c+1325,"top ex_mem0 reg_csr_wdata wen", false,-1);
        tracep->declBus(c+1593,"top ex_mem0 reg_ex_mem_to_mem_pc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top ex_mem0 reg_ex_mem_to_mem_pc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top ex_mem0 reg_ex_mem_to_mem_pc clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg_ex_mem_to_mem_pc rst", false,-1);
        tracep->declQuad(c+1062,"top ex_mem0 reg_ex_mem_to_mem_pc din", false,-1, 63,0);
        tracep->declQuad(c+50,"top ex_mem0 reg_ex_mem_to_mem_pc dout", false,-1, 63,0);
        tracep->declBit(c+1325,"top ex_mem0 reg_ex_mem_to_mem_pc wen", false,-1);
        tracep->declBus(c+1604,"top ex_mem0 reg_opcode WIDTH", false,-1, 31,0);
        tracep->declBus(c+1635,"top ex_mem0 reg_opcode RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+1477,"top ex_mem0 reg_opcode clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg_opcode rst", false,-1);
        tracep->declBus(c+1064,"top ex_mem0 reg_opcode din", false,-1, 6,0);
        tracep->declBus(c+78,"top ex_mem0 reg_opcode dout", false,-1, 6,0);
        tracep->declBit(c+1325,"top ex_mem0 reg_opcode wen", false,-1);
        tracep->declBus(c+1609,"top ex_mem0 reg_funct3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1636,"top ex_mem0 reg_funct3 RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+1477,"top ex_mem0 reg_funct3 clk", false,-1);
        tracep->declBit(c+1478,"top ex_mem0 reg_funct3 rst", false,-1);
        tracep->declBus(c+1065,"top ex_mem0 reg_funct3 din", false,-1, 2,0);
        tracep->declBus(c+79,"top ex_mem0 reg_funct3 dout", false,-1, 2,0);
        tracep->declBit(c+1325,"top ex_mem0 reg_funct3 wen", false,-1);
        tracep->declBus(c+63,"top mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+64,"top mem0 csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+82,"top mem0 wreg_i", false,-1);
        tracep->declBit(c+83,"top mem0 csr_wreg_i", false,-1);
        tracep->declQuad(c+71,"top mem0 wdata_i", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem0 csr_wdata_i", false,-1, 63,0);
        tracep->declBit(c+1481,"top mem0 dcache_data_valid_i", false,-1);
        tracep->declQuad(c+1483,"top mem0 dcache_data_i", false,-1, 63,0);
        tracep->declQuad(c+50,"top mem0 ex_mem_to_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+78,"top mem0 opcode_i", false,-1, 6,0);
        tracep->declBus(c+79,"top mem0 funct3_i", false,-1, 2,0);
        tracep->declBit(c+1574,"top mem0 block_flag_o", false,-1);
        tracep->declBus(c+63,"top mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+64,"top mem0 csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+82,"top mem0 wreg_o", false,-1);
        tracep->declBit(c+83,"top mem0 csr_wreg_o", false,-1);
        tracep->declQuad(c+1079,"top mem0 wdata_o", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem0 csr_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+50,"top mem0 mem_to_mem_wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+63,"top mem0 mem_back_rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+64,"top mem0 mem_back_csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+82,"top mem0 mem_back_wreg_o", false,-1);
        tracep->declBit(c+83,"top mem0 mem_back_csr_wreg_o", false,-1);
        tracep->declQuad(c+1079,"top mem0 mem_back_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem0 mem_back_csr_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+1328,"top mem0 wdata_t_load", false,-1, 63,0);
        tracep->declQuad(c+1577,"top mem0 wdata_t_lb", false,-1, 63,0);
        tracep->declQuad(c+1579,"top mem0 wdata_t_lbu", false,-1, 63,0);
        tracep->declQuad(c+1483,"top mem0 wdata_t_ld", false,-1, 63,0);
        tracep->declQuad(c+1581,"top mem0 wdata_t_lh", false,-1, 63,0);
        tracep->declQuad(c+1583,"top mem0 wdata_t_lhu", false,-1, 63,0);
        tracep->declQuad(c+1585,"top mem0 wdata_t_lw", false,-1, 63,0);
        tracep->declQuad(c+1587,"top mem0 wdata_t_lwu", false,-1, 63,0);
        tracep->declBus(c+1599,"top mem0 mux_wdata_o NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top mem0 mux_wdata_o KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top mem0 mux_wdata_o DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1079,"top mem0 mux_wdata_o out", false,-1, 63,0);
        tracep->declBus(c+78,"top mem0 mux_wdata_o key", false,-1, 6,0);
        tracep->declQuad(c+71,"top mem0 mux_wdata_o default_out", false,-1, 63,0);
        tracep->declArray(c+1330,"top mem0 mux_wdata_o lut", false,-1, 70,0);
        tracep->declBus(c+1599,"top mem0 mux_wdata_o i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1604,"top mem0 mux_wdata_o i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top mem0 mux_wdata_o i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top mem0 mux_wdata_o i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1079,"top mem0 mux_wdata_o i0 out", false,-1, 63,0);
        tracep->declBus(c+78,"top mem0 mux_wdata_o i0 key", false,-1, 6,0);
        tracep->declQuad(c+71,"top mem0 mux_wdata_o i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1330,"top mem0 mux_wdata_o i0 lut", false,-1, 70,0);
        tracep->declBus(c+1638,"top mem0 mux_wdata_o i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+1333+i*3,"top mem0 mux_wdata_o i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1336+i*1,"top mem0 mux_wdata_o i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+1337+i*2,"top mem0 mux_wdata_o i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1339,"top mem0 mux_wdata_o i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1341,"top mem0 mux_wdata_o i0 hit", false,-1);
        tracep->declBus(c+1643,"top mem0 mux_wdata_o i0 i", false,-1, 31,0);
        tracep->declBus(c+1604,"top mem0 mux_wdata_t_load NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top mem0 mux_wdata_t_load KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top mem0 mux_wdata_t_load DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1328,"top mem0 mux_wdata_t_load out", false,-1, 63,0);
        tracep->declBus(c+79,"top mem0 mux_wdata_t_load key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top mem0 mux_wdata_t_load default_out", false,-1, 63,0);
        tracep->declArray(c+1342,"top mem0 mux_wdata_t_load lut", false,-1, 468,0);
        tracep->declBus(c+1604,"top mem0 mux_wdata_t_load i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1609,"top mem0 mux_wdata_t_load i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1593,"top mem0 mux_wdata_t_load i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top mem0 mux_wdata_t_load i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1328,"top mem0 mux_wdata_t_load i0 out", false,-1, 63,0);
        tracep->declBus(c+79,"top mem0 mux_wdata_t_load i0 key", false,-1, 2,0);
        tracep->declQuad(c+1597,"top mem0 mux_wdata_t_load i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1342,"top mem0 mux_wdata_t_load i0 lut", false,-1, 468,0);
        tracep->declBus(c+1610,"top mem0 mux_wdata_t_load i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+1357+i*3,"top mem0 mux_wdata_t_load i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1378+i*1,"top mem0 mux_wdata_t_load i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+1385+i*2,"top mem0 mux_wdata_t_load i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1399,"top mem0 mux_wdata_t_load i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1401,"top mem0 mux_wdata_t_load i0 hit", false,-1);
        tracep->declBus(c+1615,"top mem0 mux_wdata_t_load i0 i", false,-1, 31,0);
        tracep->declBit(c+1477,"top mem_wb0 clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 rst", false,-1);
        tracep->declBus(c+63,"top mem_wb0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+64,"top mem_wb0 csr_waddr_i", false,-1, 11,0);
        tracep->declBit(c+82,"top mem_wb0 wreg_i", false,-1);
        tracep->declBit(c+83,"top mem_wb0 csr_wreg_i", false,-1);
        tracep->declQuad(c+1079,"top mem_wb0 wdata_i", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem_wb0 csr_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+50,"top mem_wb0 mem_to_mem_wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+1093,"top mem_wb0 ctrl_signal_i", false,-1, 1,0);
        tracep->declQuad(c+65,"top mem_wb0 wdata_o", false,-1, 63,0);
        tracep->declQuad(c+67,"top mem_wb0 csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+86,"top mem_wb0 wreg_o", false,-1);
        tracep->declBit(c+88,"top mem_wb0 csr_wreg_o", false,-1);
        tracep->declBus(c+87,"top mem_wb0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+89,"top mem_wb0 csr_waddr_o", false,-1, 11,0);
        tracep->declQuad(c+1508,"top mem_wb0 diff_mem_wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+87,"top mem_wb0 mem_wb_back_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+86,"top mem_wb0 mem_wb_back_wreg_o", false,-1);
        tracep->declQuad(c+65,"top mem_wb0 mem_wb_back_wdata_o", false,-1, 63,0);
        tracep->declBus(c+89,"top mem_wb0 mem_wb_back_csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+88,"top mem_wb0 mem_wb_back_csr_wreg_o", false,-1);
        tracep->declQuad(c+67,"top mem_wb0 mem_wb_back_csr_wdata_o", false,-1, 63,0);
        tracep->declBit(c+1402,"top mem_wb0 wdata_wen", false,-1);
        tracep->declBit(c+1402,"top mem_wb0 csr_wdata_wen", false,-1);
        tracep->declBit(c+1402,"top mem_wb0 wreg_wen", false,-1);
        tracep->declBit(c+1402,"top mem_wb0 csr_wreg_wen", false,-1);
        tracep->declBit(c+1402,"top mem_wb0 rd_addr_wen", false,-1);
        tracep->declBit(c+1402,"top mem_wb0 csr_waddr_wen", false,-1);
        tracep->declBit(c+1402,"top mem_wb0 diff_mem_to_mem_wb_pc_wen", false,-1);
        tracep->declBus(c+1593,"top mem_wb0 reg1 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top mem_wb0 reg1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top mem_wb0 reg1 clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 reg1 rst", false,-1);
        tracep->declQuad(c+1079,"top mem_wb0 reg1 din", false,-1, 63,0);
        tracep->declQuad(c+65,"top mem_wb0 reg1 dout", false,-1, 63,0);
        tracep->declBit(c+1402,"top mem_wb0 reg1 wen", false,-1);
        tracep->declBus(c+1593,"top mem_wb0 reg_csr_wdata WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top mem_wb0 reg_csr_wdata RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top mem_wb0 reg_csr_wdata clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 reg_csr_wdata rst", false,-1);
        tracep->declQuad(c+73,"top mem_wb0 reg_csr_wdata din", false,-1, 63,0);
        tracep->declQuad(c+67,"top mem_wb0 reg_csr_wdata dout", false,-1, 63,0);
        tracep->declBit(c+1402,"top mem_wb0 reg_csr_wdata wen", false,-1);
        tracep->declBus(c+1599,"top mem_wb0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top mem_wb0 reg2 RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top mem_wb0 reg2 clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 reg2 rst", false,-1);
        tracep->declBus(c+82,"top mem_wb0 reg2 din", false,-1, 0,0);
        tracep->declBus(c+86,"top mem_wb0 reg2 dout", false,-1, 0,0);
        tracep->declBit(c+1402,"top mem_wb0 reg2 wen", false,-1);
        tracep->declBus(c+1599,"top mem_wb0 reg_csr_wreg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1602,"top mem_wb0 reg_csr_wreg RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+1477,"top mem_wb0 reg_csr_wreg clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 reg_csr_wreg rst", false,-1);
        tracep->declBus(c+83,"top mem_wb0 reg_csr_wreg din", false,-1, 0,0);
        tracep->declBus(c+88,"top mem_wb0 reg_csr_wreg dout", false,-1, 0,0);
        tracep->declBit(c+1402,"top mem_wb0 reg_csr_wreg wen", false,-1);
        tracep->declBus(c+1614,"top mem_wb0 reg3 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1626,"top mem_wb0 reg3 RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+1477,"top mem_wb0 reg3 clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 reg3 rst", false,-1);
        tracep->declBus(c+63,"top mem_wb0 reg3 din", false,-1, 4,0);
        tracep->declBus(c+87,"top mem_wb0 reg3 dout", false,-1, 4,0);
        tracep->declBit(c+1402,"top mem_wb0 reg3 wen", false,-1);
        tracep->declBus(c+1631,"top mem_wb0 reg_csr_waddr WIDTH", false,-1, 31,0);
        tracep->declBus(c+1644,"top mem_wb0 reg_csr_waddr RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+1477,"top mem_wb0 reg_csr_waddr clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 reg_csr_waddr rst", false,-1);
        tracep->declBus(c+64,"top mem_wb0 reg_csr_waddr din", false,-1, 11,0);
        tracep->declBus(c+89,"top mem_wb0 reg_csr_waddr dout", false,-1, 11,0);
        tracep->declBit(c+1402,"top mem_wb0 reg_csr_waddr wen", false,-1);
        tracep->declBus(c+1593,"top mem_wb0 reg_diff_mem_to_mem_wb_pc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1597,"top mem_wb0 reg_diff_mem_to_mem_wb_pc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1477,"top mem_wb0 reg_diff_mem_to_mem_wb_pc clk", false,-1);
        tracep->declBit(c+1478,"top mem_wb0 reg_diff_mem_to_mem_wb_pc rst", false,-1);
        tracep->declQuad(c+50,"top mem_wb0 reg_diff_mem_to_mem_wb_pc din", false,-1, 63,0);
        tracep->declQuad(c+1508,"top mem_wb0 reg_diff_mem_to_mem_wb_pc dout", false,-1, 63,0);
        tracep->declBit(c+1402,"top mem_wb0 reg_diff_mem_to_mem_wb_pc wen", false,-1);
        tracep->declBit(c+1477,"top ctrl0 clk", false,-1);
        tracep->declBit(c+1478,"top ctrl0 rst", false,-1);
        tracep->declBit(c+1479,"top ctrl0 dcache_ready_i", false,-1);
        tracep->declBit(c+1480,"top ctrl0 icache_data_valid_i", false,-1);
        tracep->declQuad(c+90,"top ctrl0 ex_pc_new_i", false,-1, 63,0);
        tracep->declBit(c+1088,"top ctrl0 ex_branch_flag_i", false,-1);
        tracep->declBit(c+1574,"top ctrl0 mem_block_flag_i", false,-1);
        tracep->declBus(c+1089,"top ctrl0 ctrl_signal_pc_o", false,-1, 1,0);
        tracep->declBus(c+1090,"top ctrl0 ctrl_signal_if_id_o", false,-1, 1,0);
        tracep->declBus(c+1091,"top ctrl0 ctrl_signal_id_ex_o", false,-1, 1,0);
        tracep->declBus(c+1092,"top ctrl0 ctrl_signal_ex_mem_o", false,-1, 1,0);
        tracep->declBus(c+1093,"top ctrl0 ctrl_signal_mem_wb_o", false,-1, 1,0);
        tracep->declQuad(c+90,"top ctrl0 ctrl_to_pc_new_o", false,-1, 63,0);
        tracep->declBus(c+1403,"top ctrl0 FSM_next_state", false,-1, 3,0);
        tracep->declBus(c+1589,"top ctrl0 FSM_next_state_logic_default", false,-1, 3,0);
        tracep->declBus(c+1590,"top ctrl0 FSM_next_state_logic_block_1", false,-1, 3,0);
        tracep->declBus(c+1042,"top ctrl0 FSM_next_state_t", false,-1, 3,0);
        tracep->declBus(c+1043,"top ctrl0 FSM_pre_state_t", false,-1, 3,0);
        tracep->declBus(c+1404,"top ctrl0 ctrl_signal_pc_t_1", false,-1, 1,0);
        tracep->declBus(c+1405,"top ctrl0 ctrl_signal_if_id_t_1", false,-1, 1,0);
        tracep->declBus(c+1406,"top ctrl0 ctrl_signal_id_ex_t_1", false,-1, 1,0);
        tracep->declBus(c+1591,"top ctrl0 ctrl_signal_ex_mem_t_1", false,-1, 1,0);
        tracep->declBus(c+1591,"top ctrl0 ctrl_signal_mem_wb_t_1", false,-1, 1,0);
        tracep->declBus(c+1608,"top ctrl0 reg1 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1645,"top ctrl0 reg1 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1477,"top ctrl0 reg1 clk", false,-1);
        tracep->declBit(c+1478,"top ctrl0 reg1 rst", false,-1);
        tracep->declBus(c+1403,"top ctrl0 reg1 din", false,-1, 3,0);
        tracep->declBus(c+1042,"top ctrl0 reg1 dout", false,-1, 3,0);
        tracep->declBit(c+1617,"top ctrl0 reg1 wen", false,-1);
        tracep->declBus(c+1608,"top ctrl0 reg2 WIDTH", false,-1, 31,0);
        tracep->declBus(c+1645,"top ctrl0 reg2 RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+1477,"top ctrl0 reg2 clk", false,-1);
        tracep->declBit(c+1478,"top ctrl0 reg2 rst", false,-1);
        tracep->declBus(c+1042,"top ctrl0 reg2 din", false,-1, 3,0);
        tracep->declBus(c+1043,"top ctrl0 reg2 dout", false,-1, 3,0);
        tracep->declBit(c+1617,"top ctrl0 reg2 wen", false,-1);
        tracep->declBus(c+1609,"top ctrl0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ctrl0 mux1 out", false,-1, 3,0);
        tracep->declBus(c+1043,"top ctrl0 mux1 key", false,-1, 3,0);
        tracep->declBus(c+1645,"top ctrl0 mux1 default_out", false,-1, 3,0);
        tracep->declBus(c+1407,"top ctrl0 mux1 lut", false,-1, 23,0);
        tracep->declBus(c+1609,"top ctrl0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ctrl0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1403,"top ctrl0 mux1 i0 out", false,-1, 3,0);
        tracep->declBus(c+1043,"top ctrl0 mux1 i0 key", false,-1, 3,0);
        tracep->declBus(c+1645,"top ctrl0 mux1 i0 default_out", false,-1, 3,0);
        tracep->declBus(c+1407,"top ctrl0 mux1 i0 lut", false,-1, 23,0);
        tracep->declBus(c+1607,"top ctrl0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1408+i*1,"top ctrl0 mux1 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1411+i*1,"top ctrl0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1414+i*1,"top ctrl0 mux1 i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+1417,"top ctrl0 mux1 i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+1418,"top ctrl0 mux1 i0 hit", false,-1);
        tracep->declBus(c+1640,"top ctrl0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1609,"top ctrl0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1089,"top ctrl0 mux2 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux2 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux2 default_out", false,-1, 1,0);
        tracep->declBus(c+1419,"top ctrl0 mux2 lut", false,-1, 17,0);
        tracep->declBus(c+1609,"top ctrl0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ctrl0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1089,"top ctrl0 mux2 i0 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux2 i0 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux2 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1419,"top ctrl0 mux2 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1641,"top ctrl0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1420+i*1,"top ctrl0 mux2 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1423+i*1,"top ctrl0 mux2 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1426+i*1,"top ctrl0 mux2 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1429,"top ctrl0 mux2 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1430,"top ctrl0 mux2 i0 hit", false,-1);
        tracep->declBus(c+1640,"top ctrl0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1609,"top ctrl0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1090,"top ctrl0 mux3 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux3 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux3 default_out", false,-1, 1,0);
        tracep->declBus(c+1431,"top ctrl0 mux3 lut", false,-1, 17,0);
        tracep->declBus(c+1609,"top ctrl0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ctrl0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1090,"top ctrl0 mux3 i0 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux3 i0 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux3 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1431,"top ctrl0 mux3 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1641,"top ctrl0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1432+i*1,"top ctrl0 mux3 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1435+i*1,"top ctrl0 mux3 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1438+i*1,"top ctrl0 mux3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1441,"top ctrl0 mux3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1442,"top ctrl0 mux3 i0 hit", false,-1);
        tracep->declBus(c+1640,"top ctrl0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+1609,"top ctrl0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1091,"top ctrl0 mux4 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux4 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux4 default_out", false,-1, 1,0);
        tracep->declBus(c+1443,"top ctrl0 mux4 lut", false,-1, 17,0);
        tracep->declBus(c+1609,"top ctrl0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ctrl0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1091,"top ctrl0 mux4 i0 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux4 i0 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux4 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1443,"top ctrl0 mux4 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1641,"top ctrl0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1444+i*1,"top ctrl0 mux4 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1447+i*1,"top ctrl0 mux4 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1450+i*1,"top ctrl0 mux4 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1453,"top ctrl0 mux4 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1454,"top ctrl0 mux4 i0 hit", false,-1);
        tracep->declBus(c+1640,"top ctrl0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+1609,"top ctrl0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1092,"top ctrl0 mux5 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux5 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux5 default_out", false,-1, 1,0);
        tracep->declBus(c+1592,"top ctrl0 mux5 lut", false,-1, 17,0);
        tracep->declBus(c+1609,"top ctrl0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ctrl0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1092,"top ctrl0 mux5 i0 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux5 i0 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux5 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1592,"top ctrl0 mux5 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1641,"top ctrl0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1455+i*1,"top ctrl0 mux5 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1458+i*1,"top ctrl0 mux5 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1461+i*1,"top ctrl0 mux5 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1464,"top ctrl0 mux5 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1465,"top ctrl0 mux5 i0 hit", false,-1);
        tracep->declBus(c+1640,"top ctrl0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+1609,"top ctrl0 mux6 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux6 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux6 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1093,"top ctrl0 mux6 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux6 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux6 default_out", false,-1, 1,0);
        tracep->declBus(c+1592,"top ctrl0 mux6 lut", false,-1, 17,0);
        tracep->declBus(c+1609,"top ctrl0 mux6 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1608,"top ctrl0 mux6 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1596,"top ctrl0 mux6 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1599,"top ctrl0 mux6 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1093,"top ctrl0 mux6 i0 out", false,-1, 1,0);
        tracep->declBus(c+1043,"top ctrl0 mux6 i0 key", false,-1, 3,0);
        tracep->declBus(c+1603,"top ctrl0 mux6 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1592,"top ctrl0 mux6 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1641,"top ctrl0 mux6 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1466+i*1,"top ctrl0 mux6 i0 pair_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1469+i*1,"top ctrl0 mux6 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1472+i*1,"top ctrl0 mux6 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+1475,"top ctrl0 mux6 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+1476,"top ctrl0 mux6 i0 hit", false,-1);
        tracep->declBus(c+1640,"top ctrl0 mux6 i0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp1983;
    VlWide<5>/*159:0*/ __Vtemp1985;
    VlWide<3>/*95:0*/ __Vtemp1986;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__key_list[1]),7);
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__data_list[1]));
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[3]),2);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[4]),2);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[5]),2);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__data_list[6]),2);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__data_list[3]),2);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__data_list[1]));
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__if_id_to_id_pc),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__id_ex_to_ex_pc),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__ex_mem_to_mem_pc),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__id_ex_to_ex_rs1_data),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__id_ex_to_ex_rs2_data),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__id_ex_to_ex_csr_data),64);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__id_ex_to_ex_rs1_addr),5);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__id_ex_to_ex_rs2_addr),5);
        tracep->fullSData(oldp+60,(vlSelf->top__DOT__id_ex_to_ex_csr_raddr),12);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__id_ex_to_ex_rd_addr),5);
        tracep->fullSData(oldp+62,(vlSelf->top__DOT__id_ex_to_ex_csr_waddr),12);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__ex_mem_to_mem_rd_addr),5);
        tracep->fullSData(oldp+64,(vlSelf->top__DOT__ex_mem_to_mem_csr_waddr),12);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__mem_wb_to_regfile_wdata),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__mem_wb_to_csr_wdata),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__ex0__DOT__csr_wdata_t),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__ex_mem_to_mem_wdata),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__ex_mem_to_mem_csr_wdata),64);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__id_ex_to_ex_opcode),7);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__id_ex_to_ex_funct3),3);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__id_ex_to_ex_funct7),7);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__ex_mem_to_mem_opcode),7);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__ex_mem_to_mem_funct3),3);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__id_ex_to_ex_wreg));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__id_ex_to_ex_csr_wreg));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__ex_mem_to_mem_wreg));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__ex_mem_to_mem_csr_wreg));
        tracep->fullIData(oldp+84,(vlSelf->top__DOT__id_ex_to_ex_imm),20);
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__id_ex_to_ex_imm_sel));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__mem_wb_to_regfile_we));
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__mem_wb_to_regfile_waddr),5);
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__mem_wb_to_csr_we));
        tracep->fullSData(oldp+89,(vlSelf->top__DOT__mem_wb_to_csr_waddr),12);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__ex_to_ctrl_pc_new),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__pc_to_if_id_pc),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__pc0__DOT__pc_ram_t),64);
        tracep->fullWData(oldp+96,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux1____pinNumber4),132);
        tracep->fullWData(oldp+101,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+104,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+107,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullWData(oldp+113,(vlSelf->top__DOT__pc0__DOT____Vcellinp__mux3____pinNumber4),132);
        tracep->fullWData(oldp+118,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+121,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__if_id0__DOT__state),2);
        VL_EXTEND_WQ(66,64, __Vtemp1983, vlSelf->top__DOT__pc_to_if_id_pc);
        __Vtemp1985[0U] = 0U;
        __Vtemp1985[1U] = 0U;
        __Vtemp1985[2U] = (2U | (__Vtemp1983[0U] << 2U));
        __Vtemp1985[3U] = ((__Vtemp1983[0U] >> 0x1eU) 
                           | (__Vtemp1983[1U] << 2U));
        __Vtemp1985[4U] = ((__Vtemp1983[1U] >> 0x1eU) 
                           | (__Vtemp1983[2U] << 2U));
        tracep->fullWData(oldp+131,(__Vtemp1985),132);
        tracep->fullWData(oldp+136,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+139,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[0]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[1]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[2]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[3]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[4]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[5]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[6]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[7]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[8]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[9]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[10]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[11]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[12]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[13]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[14]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[15]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[16]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[17]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[18]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[19]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[20]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[21]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[22]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[23]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[24]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[25]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[26]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[27]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[28]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[29]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[30]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT____Vcellout__regfile0__diff_reg_o[31]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__regfile0__DOT__out_x1),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__regfile0__DOT__out_x2),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__regfile0__DOT__out_x3),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__regfile0__DOT__out_x4),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__regfile0__DOT__out_x5),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__regfile0__DOT__out_x6),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__regfile0__DOT__out_x7),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__regfile0__DOT__out_x8),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__regfile0__DOT__out_x9),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__regfile0__DOT__out_x10),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__regfile0__DOT__out_x11),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__regfile0__DOT__out_x12),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__regfile0__DOT__out_x13),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__regfile0__DOT__out_x14),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__regfile0__DOT__out_x15),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__regfile0__DOT__out_x16),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__regfile0__DOT__out_x17),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__regfile0__DOT__out_x18),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__regfile0__DOT__out_x19),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__regfile0__DOT__out_x20),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__regfile0__DOT__out_x21),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__regfile0__DOT__out_x22),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__regfile0__DOT__out_x23),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__regfile0__DOT__out_x24),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__regfile0__DOT__out_x25),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__regfile0__DOT__out_x26),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__regfile0__DOT__out_x27),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__regfile0__DOT__out_x28),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__regfile0__DOT__out_x29),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__regfile0__DOT__out_x30),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__regfile0__DOT__out_x31),64);
        tracep->fullBit(oldp+274,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (1U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+275,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+276,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (3U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+277,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (4U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+278,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (5U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+279,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (6U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+280,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (7U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+281,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (8U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+282,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (9U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+283,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xaU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+284,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xbU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+285,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xcU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+286,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xdU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+287,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xeU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+288,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0xfU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+289,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x10U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+290,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x11U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+291,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x12U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+292,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x13U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+293,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x14U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+294,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x15U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+295,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x16U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+296,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x17U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+297,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x18U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+298,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x19U == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+299,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1aU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+300,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1bU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+301,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1cU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+302,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1dU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+303,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1eU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullBit(oldp+304,(((IData)(vlSelf->top__DOT__mem_wb_to_regfile_we) 
                                   & (0x1fU == (IData)(vlSelf->top__DOT__mem_wb_to_regfile_waddr)))));
        tracep->fullWData(oldp+305,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux1____pinNumber4),2139);
        tracep->fullWData(oldp+372,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+375,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+378,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+381,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+384,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+387,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+390,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+393,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+396,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+399,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+402,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+405,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+408,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+411,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+414,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+417,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+420,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+423,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+426,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+429,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+432,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+435,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+438,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+441,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+444,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+447,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+450,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+453,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+456,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+459,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+462,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+465,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+466,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+467,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+468,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+469,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+470,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+471,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+472,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+473,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+474,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+475,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+476,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+477,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+478,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+479,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+480,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+481,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+482,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+483,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+484,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+485,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+486,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+487,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+488,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+489,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+490,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+491,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+492,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+493,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+494,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+514,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+522,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+526,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+528,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+530,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+532,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+538,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+540,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+542,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+544,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+546,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+548,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+550,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+552,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+554,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+556,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__data_list[30]),64);
        tracep->fullWData(oldp+558,(vlSelf->top__DOT__regfile0__DOT____Vcellinp__mux2____pinNumber4),2139);
        tracep->fullWData(oldp+625,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+628,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+631,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+634,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+637,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+640,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+643,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+646,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+649,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+652,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+655,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+658,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+661,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+664,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+667,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+670,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+673,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+676,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+679,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+682,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+685,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+691,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+694,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+697,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+700,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+703,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+706,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+709,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+712,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+715,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullCData(oldp+718,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+719,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+720,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+721,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+724,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+725,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+726,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+727,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+728,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+729,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+730,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+731,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+732,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+733,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+734,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+735,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+736,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+737,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+738,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+739,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+740,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+742,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+743,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+744,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+745,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+746,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+747,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+748,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__key_list[30]),5);
        tracep->fullQData(oldp+749,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+751,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+753,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+755,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+757,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+761,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+763,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+767,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+769,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+779,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+781,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+783,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+785,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+789,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+791,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+793,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+795,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+797,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+799,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+801,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+803,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+805,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+807,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+809,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+811,(vlSelf->top__DOT__csr0__DOT__out_mtval),64);
        tracep->fullQData(oldp+813,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt)) 
                                      << 0x3fU) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mcause_code)))),64);
        tracep->fullQData(oldp+815,((vlSelf->top__DOT__csr0__DOT__out_mepc_H62 
                                     << 2U)),64);
        tracep->fullQData(oldp+817,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_mtie)) 
                                      << 7U) | (QData)((IData)(
                                                               ((IData)(vlSelf->top__DOT__csr0__DOT__out_mie_msie) 
                                                                << 3U))))),64);
        tracep->fullQData(oldp+819,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_mtip)) 
                                      << 7U) | (QData)((IData)(
                                                               ((IData)(vlSelf->top__DOT__csr0__DOT__out_mip_msip) 
                                                                << 3U))))),64);
        tracep->fullQData(oldp+821,(vlSelf->top__DOT__csr0__DOT__out_mscratch),64);
        tracep->fullQData(oldp+823,((((QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1)) 
                                      << 3U) | (QData)((IData)(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie)))),64);
        tracep->fullBit(oldp+825,(((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                   & (0x343U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))));
        tracep->fullBit(oldp+826,(vlSelf->top__DOT__csr0__DOT__wen_mcause));
        tracep->fullBit(oldp+827,(((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                   & (0x341U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))));
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__csr0__DOT__wen_mie));
        tracep->fullBit(oldp+829,(vlSelf->top__DOT__csr0__DOT__wen_mip));
        tracep->fullBit(oldp+830,(((IData)(vlSelf->top__DOT__mem_wb_to_csr_we) 
                                   & (0x340U == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)))));
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__csr0__DOT__wen_mstatus));
        tracep->fullBit(oldp+832,(vlSelf->top__DOT__csr0__DOT__out_mcause_interrupt));
        tracep->fullCData(oldp+833,(vlSelf->top__DOT__csr0__DOT__out_mcause_code),5);
        tracep->fullQData(oldp+834,(vlSelf->top__DOT__csr0__DOT__out_mepc_H62),62);
        tracep->fullBit(oldp+836,(vlSelf->top__DOT__csr0__DOT__out_mie_mtie));
        tracep->fullBit(oldp+837,(vlSelf->top__DOT__csr0__DOT__out_mie_msie));
        tracep->fullBit(oldp+838,(vlSelf->top__DOT__csr0__DOT__out_mip_mtip));
        tracep->fullBit(oldp+839,(vlSelf->top__DOT__csr0__DOT__out_mip_msip));
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie1));
        tracep->fullBit(oldp+841,(vlSelf->top__DOT__csr0__DOT__out_mstatus_ie));
        tracep->fullBit(oldp+842,((1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                 >> 0x3fU)))));
        tracep->fullCData(oldp+843,((0x1fU & (IData)(vlSelf->top__DOT__mem_wb_to_csr_wdata))),5);
        tracep->fullQData(oldp+844,((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                     >> 2U)),62);
        tracep->fullBit(oldp+846,((1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                 >> 7U)))));
        tracep->fullBit(oldp+847,((1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                 >> 3U)))));
        tracep->fullBit(oldp+848,((1U & (IData)((vlSelf->top__DOT__mem_wb_to_csr_wdata 
                                                 >> 2U)))));
        tracep->fullBit(oldp+849,((1U & (IData)(vlSelf->top__DOT__mem_wb_to_csr_wdata))));
        tracep->fullWData(oldp+850,(vlSelf->top__DOT__csr0__DOT____Vcellinp__mux1____pinNumber4),1064);
        tracep->fullWData(oldp+884,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[0]),76);
        tracep->fullWData(oldp+887,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[1]),76);
        tracep->fullWData(oldp+890,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[2]),76);
        tracep->fullWData(oldp+893,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[3]),76);
        tracep->fullWData(oldp+896,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[4]),76);
        tracep->fullWData(oldp+899,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[5]),76);
        tracep->fullWData(oldp+902,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[6]),76);
        tracep->fullWData(oldp+905,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[7]),76);
        tracep->fullWData(oldp+908,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[8]),76);
        tracep->fullWData(oldp+911,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[9]),76);
        tracep->fullWData(oldp+914,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[10]),76);
        tracep->fullWData(oldp+917,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[11]),76);
        tracep->fullWData(oldp+920,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[12]),76);
        tracep->fullWData(oldp+923,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__pair_list[13]),76);
        tracep->fullSData(oldp+926,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+927,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+928,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+929,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+930,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+931,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+932,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+933,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+934,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+935,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[9]),12);
        tracep->fullSData(oldp+936,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[10]),12);
        tracep->fullSData(oldp+937,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[11]),12);
        tracep->fullSData(oldp+938,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[12]),12);
        tracep->fullSData(oldp+939,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__key_list[13]),12);
        tracep->fullQData(oldp+940,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+942,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+944,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+946,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+948,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+950,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+952,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+954,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+956,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+958,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+960,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+962,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+964,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+966,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+968,(vlSelf->top__DOT__ex0__DOT__csr_data),64);
        tracep->fullQData(oldp+970,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        >> 0x13U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 0xcU)))))),64);
        tracep->fullQData(oldp+972,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                     >> 0x13U)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+974,((4ULL + vlSelf->top__DOT__id_ex_to_ex_pc)),64);
        tracep->fullQData(oldp+976,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                     & (~ vlSelf->top__DOT__id_ex_to_ex_rs1_data))),64);
        tracep->fullQData(oldp+978,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                     & (~ (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))))),64);
        tracep->fullQData(oldp+980,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                     | vlSelf->top__DOT__id_ex_to_ex_rs1_data)),64);
        tracep->fullQData(oldp+982,((vlSelf->top__DOT__ex0__DOT__csr_data 
                                     | (QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr)))),64);
        tracep->fullQData(oldp+984,((QData)((IData)(vlSelf->top__DOT__id_ex_to_ex_rs1_addr))),64);
        tracep->fullQData(oldp+986,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0xbU))))) 
                                         << 0xdU) | (QData)((IData)(
                                                                    (0x1ffeU 
                                                                     & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                        << 1U))))))),64);
        tracep->fullQData(oldp+988,((vlSelf->top__DOT__id_ex_to_ex_pc 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                >> 0x13U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                           << 1U)))))),64);
        tracep->fullWData(oldp+990,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_csr_wdata____pinNumber4),402);
        tracep->fullWData(oldp+1003,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1006,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1009,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1012,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1015,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1018,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullCData(oldp+1021,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1022,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1023,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1024,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1025,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1026,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__key_list[5]),3);
        tracep->fullQData(oldp+1027,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1029,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1031,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1033,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1035,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1037,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1039,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1041,(vlSelf->top__DOT__ex0__DOT__mux_csr_wdata__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1042,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state_t),4);
        tracep->fullCData(oldp+1043,(vlSelf->top__DOT__ctrl0__DOT__FSM_pre_state_t),4);
        tracep->fullQData(oldp+1044,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+1046,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+1048,(((((vlSelf->top__DOT__if_id_to_id_inst 
                                         >> 0x14U) 
                                        == (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_waddr)) 
                                       & (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_wreg))
                                       ? vlSelf->top__DOT__ex0__DOT__csr_wdata_t
                                       : ((((vlSelf->top__DOT__if_id_to_id_inst 
                                             >> 0x14U) 
                                            == (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_waddr)) 
                                           & (IData)(vlSelf->top__DOT__ex_mem_to_mem_csr_wreg))
                                           ? vlSelf->top__DOT__ex_mem_to_mem_csr_wdata
                                           : ((((vlSelf->top__DOT__if_id_to_id_inst 
                                                 >> 0x14U) 
                                                == (IData)(vlSelf->top__DOT__mem_wb_to_csr_waddr)) 
                                               & (IData)(vlSelf->top__DOT__mem_wb_to_csr_we))
                                               ? vlSelf->top__DOT__mem_wb_to_csr_wdata
                                               : vlSelf->top__DOT__csr_to_id_csr_data)))),64);
        tracep->fullQData(oldp+1050,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0ULL : ((0U 
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
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+1052,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0ULL : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? vlSelf->top__DOT__if_id_to_id_pc
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+1054,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                      + (((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__id_ex_to_ex_imm 
                                                                 >> 0xbU))))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (0xfffU 
                                                            & vlSelf->top__DOT__id_ex_to_ex_imm)))))),64);
        tracep->fullCData(oldp+1056,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                ? (IData)(vlSelf->top__DOT__id_ex_to_ex_rd_addr)
                                                : 0U))),5);
        tracep->fullSData(oldp+1057,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                       ? 0xf12U : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                    ? (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_waddr)
                                                    : 0xf12U))),12);
        tracep->fullBit(oldp+1058,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                    | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                       | (IData)(vlSelf->top__DOT__id_ex_to_ex_wreg)))));
        tracep->fullBit(oldp+1059,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                    | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal)) 
                                       | (IData)(vlSelf->top__DOT__id_ex_to_ex_csr_wreg)))));
        tracep->fullQData(oldp+1060,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                       ? 0ULL : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                  ? vlSelf->top__DOT__ex0__DOT__csr_wdata_t
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+1062,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                       ? 0ULL : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                  ? vlSelf->top__DOT__id_ex_to_ex_pc
                                                  : 0ULL))),64);
        tracep->fullCData(oldp+1064,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                       ? 0x13U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                   ? (IData)(vlSelf->top__DOT__id_ex_to_ex_opcode)
                                                   : 0x13U))),7);
        tracep->fullCData(oldp+1065,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                ? (IData)(vlSelf->top__DOT__id_ex_to_ex_funct3)
                                                : 0U))),3);
        tracep->fullIData(oldp+1066,(vlSelf->top__DOT__if_id_to_id_inst),32);
        tracep->fullQData(oldp+1067,(vlSelf->top__DOT__csr_to_id_csr_data),64);
        tracep->fullQData(oldp+1069,(vlSelf->top__DOT__id_to_id_ex_rs1_data),64);
        tracep->fullQData(oldp+1071,(vlSelf->top__DOT__id_to_id_ex_rs2_data),64);
        tracep->fullCData(oldp+1073,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                               >> 0xfU))),5);
        tracep->fullCData(oldp+1074,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                               >> 0x14U))),5);
        tracep->fullSData(oldp+1075,((vlSelf->top__DOT__if_id_to_id_inst 
                                      >> 0x14U)),12);
        tracep->fullCData(oldp+1076,((0x1fU & (vlSelf->top__DOT__if_id_to_id_inst 
                                               >> 7U))),5);
        tracep->fullQData(oldp+1077,(vlSelf->top__DOT__ex0__DOT__wdata_t),64);
        tracep->fullQData(oldp+1079,(vlSelf->top__DOT__mem_to_mem_wb_wdata),64);
        tracep->fullCData(oldp+1081,((0x7fU & vlSelf->top__DOT__if_id_to_id_inst)),7);
        tracep->fullCData(oldp+1082,((7U & (vlSelf->top__DOT__if_id_to_id_inst 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1083,((vlSelf->top__DOT__if_id_to_id_inst 
                                      >> 0x19U)),7);
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__id_to_id_ex_wreg));
        tracep->fullBit(oldp+1085,((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__if_id_to_id_inst))));
        tracep->fullIData(oldp+1086,(vlSelf->top__DOT__id_to_id_ex_imm),20);
        tracep->fullBit(oldp+1087,((((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__if_id_to_id_inst)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst)))));
        tracep->fullBit(oldp+1088,(vlSelf->top__DOT__ex0__DOT__branch_flag_t));
        tracep->fullCData(oldp+1089,(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal),2);
        tracep->fullCData(oldp+1090,(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal),2);
        tracep->fullCData(oldp+1091,(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal),2);
        tracep->fullCData(oldp+1092,(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal),2);
        tracep->fullCData(oldp+1093,(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal),2);
        tracep->fullBit(oldp+1094,((1U != (IData)(vlSelf->top__DOT__ctrl_to_pc_ctrl_signal))));
        tracep->fullQData(oldp+1095,(vlSelf->top__DOT__pc0__DOT__pc_pipeline_t),64);
        tracep->fullQData(oldp+1097,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1099,(vlSelf->top__DOT__pc0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1100,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1102,(vlSelf->top__DOT__pc0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1103,(vlSelf->top__DOT__if_id0__DOT__pc_t),64);
        tracep->fullBit(oldp+1105,((1U != (IData)(vlSelf->top__DOT__ctrl_to_if_id_ctrl_signal))));
        tracep->fullQData(oldp+1106,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1108,(vlSelf->top__DOT__if_id0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1109,((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))))),64);
        tracep->fullQData(oldp+1111,((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))))),64);
        tracep->fullQData(oldp+1113,((QData)((IData)(vlSelf->top__DOT__id_to_id_ex_rs2_data))),64);
        tracep->fullSData(oldp+1115,(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store),12);
        tracep->fullQData(oldp+1116,((vlSelf->top__DOT__id_to_id_ex_rs1_data 
                                      + (((- (QData)((IData)(
                                                             (vlSelf->top__DOT__if_id_to_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->top__DOT__if_id_to_id_inst 
                                                            >> 0x14U)))))),64);
        tracep->fullQData(oldp+1118,((vlSelf->top__DOT__id_to_id_ex_rs1_data 
                                      + (((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store) 
                                                                 >> 0xbU))))) 
                                          << 0xcU) 
                                         | (QData)((IData)(vlSelf->top__DOT__id0__DOT__dcache_addr_offset_store))))),64);
        tracep->fullCData(oldp+1120,(vlSelf->top__DOT__id0__DOT__dcache_wlen_t_load),2);
        tracep->fullCData(oldp+1121,(vlSelf->top__DOT__id0__DOT__dcache_wlen_t_store),2);
        tracep->fullBit(oldp+1122,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+1123,(vlSelf->top__DOT__id0__DOT__mux_dcache_req_valid__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1124,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux_dcache_wdata____pinNumber4),268);
        tracep->fullWData(oldp+1133,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1136,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1139,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1142,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullCData(oldp+1145,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1146,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1147,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1148,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__key_list[3]),3);
        tracep->fullQData(oldp+1149,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1151,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1153,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1155,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1157,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1159,(vlSelf->top__DOT__id0__DOT__mux_dcache_wdata__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1160,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1161,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_load__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1162,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1163,(vlSelf->top__DOT__id0__DOT__mux_dcache_wlen_t_store__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1164,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+1165,(vlSelf->top__DOT__id0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+1166,((vlSelf->top__DOT__if_id_to_id_inst 
                                      >> 0x14U)),20);
        tracep->fullWData(oldp+1167,(vlSelf->top__DOT__id0__DOT____Vcellinp__mux2____pinNumber4),108);
        tracep->fullIData(oldp+1171,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[0]),27);
        tracep->fullIData(oldp+1172,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[1]),27);
        tracep->fullIData(oldp+1173,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[2]),27);
        tracep->fullIData(oldp+1174,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__pair_list[3]),27);
        tracep->fullCData(oldp+1175,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+1176,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+1177,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+1178,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__key_list[3]),7);
        tracep->fullIData(oldp+1179,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[0]),20);
        tracep->fullIData(oldp+1180,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[1]),20);
        tracep->fullIData(oldp+1181,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[2]),20);
        tracep->fullIData(oldp+1182,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__data_list[3]),20);
        tracep->fullIData(oldp+1183,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__lut_out),20);
        tracep->fullBit(oldp+1184,(vlSelf->top__DOT__id0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1185,(vlSelf->top__DOT__regfile0__DOT__rdata1_t),64);
        tracep->fullQData(oldp+1187,(vlSelf->top__DOT__regfile0__DOT__rdata2_t),64);
        tracep->fullQData(oldp+1189,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1191,(vlSelf->top__DOT__regfile0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1192,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1194,(vlSelf->top__DOT__regfile0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1195,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1197,(vlSelf->top__DOT__csr0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1198,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (0x1fU 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 0xfU))
                                                : 0U))),5);
        tracep->fullBit(oldp+1199,((1U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))));
        tracep->fullCData(oldp+1200,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (0x1fU 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 0x14U))
                                                : 0U))),5);
        tracep->fullSData(oldp+1201,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0xf12U : (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                    ? 
                                                   (vlSelf->top__DOT__if_id_to_id_inst 
                                                    >> 0x14U)
                                                    : 0xf12U))),12);
        tracep->fullCData(oldp+1202,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0x13U : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                   ? 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__if_id_to_id_inst)
                                                   : 0U))),7);
        tracep->fullCData(oldp+1203,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (7U 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 0xcU))
                                                : 0U))),3);
        tracep->fullCData(oldp+1204,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (vlSelf->top__DOT__if_id_to_id_inst 
                                                   >> 0x19U)
                                                : 0U))),7);
        tracep->fullQData(oldp+1205,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0ULL : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? vlSelf->top__DOT__id_to_id_ex_rs1_data
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+1207,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0ULL : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                  ? vlSelf->top__DOT__id_to_id_ex_rs2_data
                                                  : 0ULL))),64);
        tracep->fullCData(oldp+1209,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? (0x1fU 
                                                   & (vlSelf->top__DOT__if_id_to_id_inst 
                                                      >> 7U))
                                                : 0U))),5);
        tracep->fullBit(oldp+1210,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                    | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                       | (IData)(vlSelf->top__DOT__id_to_id_ex_wreg)))));
        tracep->fullBit(oldp+1211,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                    | ((0U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                       | (0x73U == 
                                          (0x7fU & vlSelf->top__DOT__if_id_to_id_inst))))));
        tracep->fullIData(oldp+1212,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                       ? 0U : ((0U 
                                                == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal))
                                                ? vlSelf->top__DOT__id_to_id_ex_imm
                                                : 0U))),20);
        tracep->fullBit(oldp+1213,(((2U != (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                    & ((0U == (IData)(vlSelf->top__DOT__ctrl_to_id_ex_ctrl_signal)) 
                                       & (((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__if_id_to_id_inst)) 
                                           | (0x17U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__if_id_to_id_inst))) 
                                          | (0x37U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__if_id_to_id_inst)))))));
        tracep->fullQData(oldp+1214,(vlSelf->top__DOT__ex0__DOT__rs1_data),64);
        tracep->fullQData(oldp+1216,(vlSelf->top__DOT__ex0__DOT__rs2_data),64);
        tracep->fullIData(oldp+1218,(vlSelf->top__DOT__ex0__DOT__wdata_addiw),32);
        tracep->fullQData(oldp+1219,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                      + vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+1221,((((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->top__DOT__ex0__DOT__wdata_addiw 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex0__DOT__wdata_addiw)))),64);
        tracep->fullQData(oldp+1223,((vlSelf->top__DOT__ex0__DOT__rs1_data 
                                      - vlSelf->top__DOT__ex0__DOT__rs2_data)),64);
        tracep->fullQData(oldp+1225,(vlSelf->top__DOT__ex0__DOT__wdata_opcode_R),64);
        tracep->fullQData(oldp+1227,(vlSelf->top__DOT__ex0__DOT__wdata_funct3_add_sub_mul),64);
        tracep->fullBit(oldp+1229,(vlSelf->top__DOT__ex0__DOT__branch_flag_t_beq));
        tracep->fullBit(oldp+1230,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__ex0__DOT__rs1_data, vlSelf->top__DOT__ex0__DOT__rs2_data)));
        tracep->fullBit(oldp+1231,((1U & (~ (IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t_beq)))));
        tracep->fullWData(oldp+1232,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_t____pinNumber4),355);
        tracep->fullWData(oldp+1244,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+1247,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+1250,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+1253,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+1256,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullCData(oldp+1259,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+1260,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+1261,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+1262,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+1263,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__key_list[4]),7);
        tracep->fullQData(oldp+1264,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1266,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1268,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1270,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1272,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1274,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1276,(vlSelf->top__DOT__ex0__DOT__mux_t__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1277,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_R____pinNumber4),201);
        tracep->fullWData(oldp+1284,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1287,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1290,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+1293,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1294,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1295,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+1296,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1298,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1300,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1302,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1304,(vlSelf->top__DOT__ex0__DOT__mux_R__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1305,(vlSelf->top__DOT__ex0__DOT____Vcellinp__mux_funct3_asm____pinNumber4),142);
        tracep->fullWData(oldp+1310,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+1313,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+1316,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+1317,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+1318,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1320,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1322,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1324,(vlSelf->top__DOT__ex0__DOT__mux_funct3_asm__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1325,((1U != (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))));
        tracep->fullQData(oldp+1326,(((2U == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                       ? 0ULL : ((0U 
                                                  == (IData)(vlSelf->top__DOT__ctrl_to_ex_mem_ctrl_signal))
                                                  ? vlSelf->top__DOT__ex0__DOT__wdata_t
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+1328,(vlSelf->top__DOT__mem0__DOT__wdata_t_load),64);
        __Vtemp1986[0U] = (IData)(vlSelf->top__DOT__mem0__DOT__wdata_t_load);
        __Vtemp1986[1U] = (IData)((vlSelf->top__DOT__mem0__DOT__wdata_t_load 
                                   >> 0x20U));
        __Vtemp1986[2U] = 3U;
        tracep->fullWData(oldp+1330,(__Vtemp1986),71);
        tracep->fullWData(oldp+1333,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullCData(oldp+1336,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__key_list[0]),7);
        tracep->fullQData(oldp+1337,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1339,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1341,(vlSelf->top__DOT__mem0__DOT__mux_wdata_o__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1342,(vlSelf->top__DOT__mem0__DOT____Vcellinp__mux_wdata_t_load____pinNumber4),469);
        tracep->fullWData(oldp+1357,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1360,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1363,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1366,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1369,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1372,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1375,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+1378,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1379,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1380,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1381,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1382,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1383,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1384,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__key_list[6]),3);
        tracep->fullQData(oldp+1385,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1387,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1389,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1391,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1393,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1395,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1397,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1399,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1401,(vlSelf->top__DOT__mem0__DOT__mux_wdata_t_load__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1402,((1U != (IData)(vlSelf->top__DOT__ctrl_to_mem_wb_ctrl_signal))));
        tracep->fullCData(oldp+1403,(vlSelf->top__DOT__ctrl0__DOT__FSM_next_state),4);
        tracep->fullCData(oldp+1404,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1),2);
        tracep->fullCData(oldp+1405,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1),2);
        tracep->fullCData(oldp+1406,(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1),2);
        tracep->fullIData(oldp+1407,(vlSelf->top__DOT__ctrl0__DOT____Vcellinp__mux1____pinNumber4),24);
        tracep->fullCData(oldp+1408,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+1409,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+1410,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+1411,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1412,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1413,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1414,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+1415,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+1416,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+1417,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+1418,(vlSelf->top__DOT__ctrl0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+1419,((0x148U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_pc_t_1) 
                                                << 0xcU))),18);
        tracep->fullCData(oldp+1420,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+1421,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+1422,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+1423,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1424,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1425,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1426,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+1427,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+1428,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+1429,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1430,(vlSelf->top__DOT__ctrl0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+1431,((0x148U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_if_id_t_1) 
                                                << 0xcU))),18);
        tracep->fullCData(oldp+1432,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+1433,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+1434,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+1435,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1436,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1437,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1438,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+1439,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+1440,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+1441,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1442,(vlSelf->top__DOT__ctrl0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+1443,((0x148U | ((IData)(vlSelf->top__DOT__ctrl0__DOT__ctrl_signal_id_ex_t_1) 
                                                << 0xcU))),18);
        tracep->fullCData(oldp+1444,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+1445,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+1446,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+1447,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1448,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1449,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1450,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+1451,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+1452,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+1453,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1454,(vlSelf->top__DOT__ctrl0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1455,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+1456,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+1457,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+1458,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1459,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1460,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1461,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+1462,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+1463,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+1464,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1465,(vlSelf->top__DOT__ctrl0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1466,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[0]),6);
        tracep->fullCData(oldp+1467,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[1]),6);
        tracep->fullCData(oldp+1468,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__pair_list[2]),6);
        tracep->fullCData(oldp+1469,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1470,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1471,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1472,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+1473,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+1474,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+1475,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+1476,(vlSelf->top__DOT__ctrl0__DOT__mux6__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1477,(vlSelf->clk));
        tracep->fullBit(oldp+1478,(vlSelf->rst));
        tracep->fullBit(oldp+1479,(vlSelf->dcache_ready_i));
        tracep->fullBit(oldp+1480,(vlSelf->icache_data_valid_i));
        tracep->fullBit(oldp+1481,(vlSelf->dcache_data_valid_i));
        tracep->fullIData(oldp+1482,(vlSelf->icache_data_i),32);
        tracep->fullQData(oldp+1483,(vlSelf->dcache_data_i),64);
        tracep->fullQData(oldp+1485,(vlSelf->icache_addr_o),64);
        tracep->fullQData(oldp+1487,(vlSelf->dcache_addr_o),64);
        tracep->fullBit(oldp+1489,(vlSelf->icache_req_valid_o));
        tracep->fullBit(oldp+1490,(vlSelf->dcache_req_valid_o));
        tracep->fullBit(oldp+1491,(vlSelf->icache_wen_o));
        tracep->fullBit(oldp+1492,(vlSelf->dcache_wen_o));
        tracep->fullQData(oldp+1493,(vlSelf->dcache_wdata_o),64);
        tracep->fullCData(oldp+1495,(vlSelf->dcache_wlen_o),2);
        tracep->fullQData(oldp+1496,(vlSelf->diff_if_id_to_id_pc_o),64);
        tracep->fullQData(oldp+1498,(vlSelf->diff_id_to_id_ex_pc_o),64);
        tracep->fullQData(oldp+1500,(vlSelf->diff_id_ex_to_ex_pc_o),64);
        tracep->fullQData(oldp+1502,(vlSelf->diff_ex_to_ex_mem_pc_o),64);
        tracep->fullQData(oldp+1504,(vlSelf->diff_ex_mem_to_mem_pc_o),64);
        tracep->fullQData(oldp+1506,(vlSelf->diff_mem_to_mem_wb_pc_o),64);
        tracep->fullQData(oldp+1508,(vlSelf->diff_mem_wb_pc_o),64);
        tracep->fullQData(oldp+1510,(vlSelf->diff_regs_o[0]),64);
        tracep->fullQData(oldp+1512,(vlSelf->diff_regs_o[1]),64);
        tracep->fullQData(oldp+1514,(vlSelf->diff_regs_o[2]),64);
        tracep->fullQData(oldp+1516,(vlSelf->diff_regs_o[3]),64);
        tracep->fullQData(oldp+1518,(vlSelf->diff_regs_o[4]),64);
        tracep->fullQData(oldp+1520,(vlSelf->diff_regs_o[5]),64);
        tracep->fullQData(oldp+1522,(vlSelf->diff_regs_o[6]),64);
        tracep->fullQData(oldp+1524,(vlSelf->diff_regs_o[7]),64);
        tracep->fullQData(oldp+1526,(vlSelf->diff_regs_o[8]),64);
        tracep->fullQData(oldp+1528,(vlSelf->diff_regs_o[9]),64);
        tracep->fullQData(oldp+1530,(vlSelf->diff_regs_o[10]),64);
        tracep->fullQData(oldp+1532,(vlSelf->diff_regs_o[11]),64);
        tracep->fullQData(oldp+1534,(vlSelf->diff_regs_o[12]),64);
        tracep->fullQData(oldp+1536,(vlSelf->diff_regs_o[13]),64);
        tracep->fullQData(oldp+1538,(vlSelf->diff_regs_o[14]),64);
        tracep->fullQData(oldp+1540,(vlSelf->diff_regs_o[15]),64);
        tracep->fullQData(oldp+1542,(vlSelf->diff_regs_o[16]),64);
        tracep->fullQData(oldp+1544,(vlSelf->diff_regs_o[17]),64);
        tracep->fullQData(oldp+1546,(vlSelf->diff_regs_o[18]),64);
        tracep->fullQData(oldp+1548,(vlSelf->diff_regs_o[19]),64);
        tracep->fullQData(oldp+1550,(vlSelf->diff_regs_o[20]),64);
        tracep->fullQData(oldp+1552,(vlSelf->diff_regs_o[21]),64);
        tracep->fullQData(oldp+1554,(vlSelf->diff_regs_o[22]),64);
        tracep->fullQData(oldp+1556,(vlSelf->diff_regs_o[23]),64);
        tracep->fullQData(oldp+1558,(vlSelf->diff_regs_o[24]),64);
        tracep->fullQData(oldp+1560,(vlSelf->diff_regs_o[25]),64);
        tracep->fullQData(oldp+1562,(vlSelf->diff_regs_o[26]),64);
        tracep->fullQData(oldp+1564,(vlSelf->diff_regs_o[27]),64);
        tracep->fullQData(oldp+1566,(vlSelf->diff_regs_o[28]),64);
        tracep->fullQData(oldp+1568,(vlSelf->diff_regs_o[29]),64);
        tracep->fullQData(oldp+1570,(vlSelf->diff_regs_o[30]),64);
        tracep->fullQData(oldp+1572,(vlSelf->diff_regs_o[31]),64);
        tracep->fullBit(oldp+1574,((1U & (~ (IData)(vlSelf->dcache_data_valid_i)))));
        tracep->fullBit(oldp+1575,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullIData(oldp+1576,(((2U == (IData)(vlSelf->top__DOT__if_id0__DOT__state))
                                       ? 0x13U : vlSelf->icache_data_i)),32);
        tracep->fullQData(oldp+1577,((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->dcache_data_i 
                                                                      >> 7U)))))) 
                                       << 8U) | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->dcache_data_i)))))),64);
        tracep->fullQData(oldp+1579,((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->dcache_data_i))))),64);
        tracep->fullQData(oldp+1581,((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->dcache_data_i 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->dcache_data_i)))))),64);
        tracep->fullQData(oldp+1583,((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->dcache_data_i))))),64);
        tracep->fullQData(oldp+1585,((((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dcache_data_i 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->dcache_data_i)))),64);
        tracep->fullQData(oldp+1587,((QData)((IData)(vlSelf->dcache_data_i))),64);
        tracep->fullCData(oldp+1589,(((IData)(vlSelf->dcache_data_valid_i)
                                       ? ((IData)(vlSelf->top__DOT__ex0__DOT__branch_flag_t)
                                           ? 2U : 0U)
                                       : 1U)),4);
        tracep->fullCData(oldp+1590,(((IData)(vlSelf->dcache_ready_i)
                                       ? 0U : 1U)),4);
        tracep->fullCData(oldp+1591,(((IData)(vlSelf->dcache_data_valid_i)
                                       ? 0U : 1U)),2);
        tracep->fullIData(oldp+1592,((0x148U | (((IData)(vlSelf->dcache_data_valid_i)
                                                  ? 0U
                                                  : 1U) 
                                                << 0xcU))),18);
        tracep->fullIData(oldp+1593,(0x40U),32);
        tracep->fullQData(oldp+1594,(0x7ffffffcULL),64);
        tracep->fullIData(oldp+1596,(2U),32);
        tracep->fullQData(oldp+1597,(0ULL),64);
        tracep->fullIData(oldp+1599,(1U),32);
        tracep->fullIData(oldp+1600,(0x42U),32);
        tracep->fullIData(oldp+1601,(2U),32);
        tracep->fullBit(oldp+1602,(0U));
        tracep->fullCData(oldp+1603,(0U),2);
        tracep->fullIData(oldp+1604,(7U),32);
        tracep->fullBit(oldp+1605,(0U));
        tracep->fullSData(oldp+1606,(0x4707U),16);
        tracep->fullIData(oldp+1607,(8U),32);
        tracep->fullIData(oldp+1608,(4U),32);
        tracep->fullIData(oldp+1609,(3U),32);
        tracep->fullIData(oldp+1610,(0x43U),32);
        tracep->fullIData(oldp+1611,(4U),32);
        tracep->fullQData(oldp+1612,(0x20f2d55aULL),35);
        tracep->fullIData(oldp+1614,(5U),32);
        tracep->fullIData(oldp+1615,(7U),32);
        tracep->fullIData(oldp+1616,(0x154fU),20);
        tracep->fullBit(oldp+1617,(1U));
        tracep->fullSData(oldp+1618,(0xc647U),16);
        tracep->fullIData(oldp+1619,(0x14U),32);
        tracep->fullIData(oldp+1620,(0x1bU),32);
        tracep->fullIData(oldp+1621,(0x1fU),32);
        tracep->fullIData(oldp+1622,(0x45U),32);
        tracep->fullIData(oldp+1623,(0x1fU),32);
        tracep->fullQData(oldp+1624,(0x100ULL),64);
        tracep->fullCData(oldp+1626,(0U),5);
        tracep->fullIData(oldp+1627,(0x3eU),32);
        tracep->fullQData(oldp+1628,(0ULL),62);
        tracep->fullIData(oldp+1630,(0xeU),32);
        tracep->fullIData(oldp+1631,(0xcU),32);
        tracep->fullIData(oldp+1632,(0x4cU),32);
        tracep->fullIData(oldp+1633,(0xeU),32);
        tracep->fullSData(oldp+1634,(0xf12U),12);
        tracep->fullCData(oldp+1635,(0U),7);
        tracep->fullCData(oldp+1636,(0U),3);
        tracep->fullIData(oldp+1637,(0U),20);
        tracep->fullIData(oldp+1638,(0x47U),32);
        tracep->fullIData(oldp+1639,(5U),32);
        tracep->fullIData(oldp+1640,(3U),32);
        tracep->fullIData(oldp+1641,(6U),32);
        tracep->fullIData(oldp+1642,(6U),32);
        tracep->fullIData(oldp+1643,(1U),32);
        tracep->fullSData(oldp+1644,(0U),12);
        tracep->fullCData(oldp+1645,(0U),4);
    }
}
