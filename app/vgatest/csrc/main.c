#include "RISCV.h"
int main()
{
    uint32 a = 0x561b12;
    volatile uint32* pixel_p = (uint32*)VMEM_ADDR_BASE;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 640; j++)
        {
            *pixel_p = a;
            pixel_p++;
        }
    }
    return 0;
}