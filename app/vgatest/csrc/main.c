#include "RISCV.h"
int main()
{
    uint32 a = 0x38f047;
    volatile uint32* pixel_p = (uint32*)VMEM_ADDR_BASE;
    for(int i = 0; i < 480; i++)
    {
        for(int j = 0; j < 640; j++)
        {
        	pixel_p = ((uint32*)VMEM_ADDR_BASE)+i*640+j;
            *pixel_p = a;
        }
    }
    return 0;
}
