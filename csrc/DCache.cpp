#include "DCache.h"

DCache::DCache(mif *_mif_p)
{
    /* srand((unsigned int)(time(NULL))); */
    mif_p = _mif_p;
    state = Default;
    flag = true;
    count = 0;
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
#ifndef NODIFF
        printf("DCache: Block\n");
#endif
        return;
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
            flag = false;
        }
        else
        {
            return;
        }
    }
/*     if (state==Block)
    {
        return;
    } */
    
    /* Get the input for the sequential circuit */
    if(flag)
    {
        dcache_addr_i_t2 = dcache_addr_i_t1;
        dcache_req_valid_i_t2 = dcache_req_valid_i_t1;
        dcache_wen_i_t2 = dcache_wen_i_t1;
        dcache_wlen_i_t2 = dcache_wlen_i_t1;
        dcache_wdata_i_t2 = dcache_wdata_i_t1;

        dcache_addr_i_t1 = dcache_addr_i;
        dcache_req_valid_i_t1 = dcache_req_valid_i;
        dcache_wen_i_t1 = dcache_wen_i;
        dcache_wlen_i_t1 = dcache_wlen_i;
        dcache_wdata_i_t1 = dcache_wdata_i;
    }

    if(!dcache_req_valid_i_t2)
    {
        dcache_data_valid_o = 1;
        dcache_ready_o = 1;
        return;
    }
    /* Drive the output */
    if(count <= DCache_Miss_Delay)
    {
        count++;
    }
    if(dcache_wen_i_t2 == 0)
    {
        if(rand()%100<=((int)(DCache_Miss_Rate*100)) && flag && count > DCache_Miss_Delay)
        {
            reload_delay_cycle = 0;
            reload_flag = true;
            dcache_data_o = 0;
            dcache_data_valid_o = 0;
            dcache_ready_o = 0;
#ifndef NODIFF
            printf("\033[34mDCache: Load Missing\033[0m\n");
#endif
        }else
        {
            mif_p->load(dcache_addr_i_t2, 8, (uint8_t*)(&dcache_data_o));
            dcache_data_valid_o = 1;
            dcache_ready_o = 1;
#ifndef NODIFF
            printf("\033[36mDCache: Load 0x%016lx: 0x%016lx\033[0m\n", dcache_addr_i_t2, dcache_data_o);
#endif
        }
        if(!flag)
        {
            flag = true;
        }
    }else
    {
        if(dcache_addr_i_t2>=VMEM_ADDR_BASE \
            &&dcache_addr_i_t2<VMEM_ADDR_BASE+VMEM_ADDR_LENGTH)
        {
#ifndef NODIFF
            printf("\033[5mDCache:Write VMEM 0x%016lx: 0x%016lx wlen:%d\033[0m\n", dcache_addr_i_t2, dcache_wdata_i_t2, 1<<(size_t)dcache_wlen_i_t2);
#endif
            vga_waddr_h_o = ((dcache_addr_i_t2-VMEM_ADDR_BASE)>>2) % 640;
            vga_waddr_v_o = ((dcache_addr_i_t2-VMEM_ADDR_BASE)>>2) / 640;
            vga_we_o = 1;
            vga_wdata_o = dcache_wdata_i_t2 & 0xFFFFFF;
        }else
        {
            vga_we_o = 0;
        }
#ifndef NODIFF
        printf("\033[36mDCache:Store 0x%016lx: 0x%016lx wlen:%d\033[0m\n", dcache_addr_i_t2, dcache_wdata_i_t2, 1<<(size_t)dcache_wlen_i_t2);
#endif
        dcache_ready_o = 1;
        dcache_data_valid_o = 1;
        mif_p->store(dcache_addr_i_t2, 1<<(size_t)dcache_wlen_i_t2, (uint8_t*)&dcache_wdata_i_t2);
    }
}



