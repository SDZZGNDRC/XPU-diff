#include "DCache.h"

DCache::DCache(mif *_mif_p)
{
    /* srand((unsigned int)(time(NULL))); */
    mif_p = _mif_p;
    state = Default;
}

DCache::~DCache()
{
}

void DCache::posedge()
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
        if(reload_delay_cycle == DCache_Reload_Cycle)
        {
            dcache_ready_o = 1;
        }
        if(reload_delay_cycle>DCache_Reload_Cycle)
        {
            reload_flag = false;
            reload_delay_cycle = 0;
        }
        return;
    }
    /* Get the input for the sequential circuit */
    dcache_addr_i_t2 = dcache_addr_i_t1;
    dcache_req_valid_i_t2 = dcache_req_valid_i_t1;

    dcache_addr_i_t1 = dcache_addr_i;
    dcache_req_valid_i_t1 = dcache_req_valid_i;

    /* Drive the output */
    if(dcache_wen_i_t2 == 0)
    {
        if(rand()%100<=((int)(DCache_Miss_Rate*100)))
        {
            reload_delay_cycle = 0;
            reload_flag = true;
            dcache_data_o = 0;
            dcache_data_valid_o = 0;
            dcache_ready_o = 0;
            printf("DCache: Load Missing\n");
        }else
        {
            mif_p->load(dcache_addr_i_t2, 8, (uint8_t*)(&dcache_data_o));
            dcache_data_valid_o = 1;
            dcache_ready_o = 1;
        }
    }else
    {
        dcache_ready_o = 1;
        dcache_data_valid_o = 1;
        mif_p->store(dcache_addr_i_t2, (size_t)dcache_wlen_i_t2, (uint8_t*)dcache_wdata_i_t2);
    }
}



