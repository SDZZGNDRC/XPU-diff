#include "ICache.h"


ICache::ICache(mif *_mif_p)
{
    srand((unsigned int)(time(NULL)));
    mif_p = _mif_p;
}

ICache::~ICache()
{
}

void ICache::posedge()
{
    /* Change the state according to the input */
    if(ctrl_signal_i == CTRL_STATE_Block)
    {
        state = Block;
    }else if(ctrl_signal_i == CTRL_STATE_Default)
    {
        state = Default;
    }

    if(reload_flag)
    {
        reload_delay_cycle += 1;
        if(reload_delay_cycle == ICache_Reload_Cycle)
        {
            icache_ready_o = 1;
        }
        if(reload_delay_cycle>ICache_Reload_Cycle)
        {
            reload_flag = false;
            reload_delay_cycle = 0;
        }
        return;
    }
    /* Get the input for the sequential circuit */
    icache_addr_i_t2 = icache_addr_i_t1;
    icache_req_valid_i_t2 = icache_req_valid_i_t1;

    icache_addr_i_t1 = icache_addr_i;
    icache_req_valid_i_t1 = icache_req_valid_i;

    /* Drive the output */
    icache_ready_o = 1;
    if(rand()%100<=((int)(ICache_Miss_Rate*100)))
    {
        reload_delay_cycle = 0;
        reload_flag = true;
        icache_data_o = 0;
        icache_data_valid_o = 0;
    }else
    {
        mif_p->load(icache_addr_i_t2, 4, (uint8_t*)icache_data_o);
        icache_data_valid_o = 1;
    }

}


