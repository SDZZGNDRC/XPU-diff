#include "Vtop.h"
#include "verilated.h"
#include "mif.h"

#define RESET_VALUE_PC 0x80000000
#define ECALL 0x00000073

class Dut
{
private:
    VerilatedContext* contextp_t;
    Vtop* top_t;
    mif* mif_t;
    bool finished = false;
    /* Signals */
    reg_t icache_addr_i_t = RESET_VALUE_PC-0x4; // The address received last cycle.
    reg_t icache_addr_i = RESET_VALUE_PC-0x4; // The address received last cycle.
    uint8_t icache_req_valid_i = 0;
    uint8_t icache_wen_i = 0;
    reg_t dcache_addr_i_t;
    reg_t dcache_addr_i;
    uint8_t icache_req_valid_i_t;
    uint8_t icache_req_valid_i;
    uint8_t dcache_req_valid_i_t;
    uint8_t dcache_req_valid_i;
    uint8_t icache_wen_i;
    uint8_t dcache_wen_i;
    reg_t dcache_wdata_i;
    uint8_t dcache_wlen_i;
    reg_t diff_if_id_to_id_pc_i;
    reg_t diff_id_to_id_ex_pc_i;
    reg_t diff_id_ex_to_ex_pc_i;
    reg_t *diff_regs_i;

    uint8_t dcache_ready_o;
    uint8_t icache_data_valid_o;
    uint8_t dcache_data_valid_o;
    reg_t icache_data_o;
    reg_t dcache_data_o;
public:
    Dut(VerilatedContext* _contextp_t, Vtop* _top_t, mif* _mif_t);
    ~Dut();
    void init();
    void update_output();
    void step_one_cycle();
    bool is_finished() { return finished; };
};


