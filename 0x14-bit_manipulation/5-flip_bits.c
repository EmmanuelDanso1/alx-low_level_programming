#include "main.h"
/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, cnt_bit = 0;
unsigned long int start;
unsigned long int exception = n ^ m;
for (i = 63; i >= 0; i--)
{
start = exception >> i;
if (start & 1)
cnt_bit++;
}
}
