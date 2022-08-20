#include <stdio.h>
#include <stdint.h>
void printf_int128(__int128_t x)
{
	__int128_t temp = x;
	for(int i = 0; i < 32; i++)
	{
		x = temp >> 4*(31-i);
		if((x&0xf)>9)
		{
			putchar((x&0xf)+87);
		}else
		{
			putchar((x&0xf)+'0');
		}
		x = x >> 4;
	}
}

int main()
{
	__uint128_t op_1 = 0xffffffff80000000;
	__uint128_t op_2 = 0xffffffffffff8000;
	uint64_t result_l;
	uint64_t result_h;
	__uint128_t result = op_1 * op_2;
	result_l = (uint64_t)result;
	result_h = (uint64_t)(((__int128_t)result)>>64);
	printf("%016lx, %ld, %lu\n", (uint64_t)op_1, (uint64_t)op_1, (uint64_t)op_1);
	printf("%016lx, %ld, %lu\n", (uint64_t)op_2, (uint64_t)op_2, (uint64_t)op_2);
	printf("%016lx, %ld, %lu\n", result_l, result_l, result_l);
	printf("%016lx, %ld, %lu\n", result_h, result_h, result_h);
	printf_int128(result);
	printf("\n");
	return 0;
}
