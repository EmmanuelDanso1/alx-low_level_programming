#include "main.h"
/**
* _pow - func calculates (base ^ power)
* @base: base of the exponent
* @power: power of the exponent
*
* Return: value of (base ^ power)
*/
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int num = 0;
unsigned int cnt = 1;
while (cnt < power)
{
num *= base;
cnt++;
}
return (num);
}
/**
* print_binary - prints a number in binary notation
* @n: number to print
*
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int div, chk;
char flg;
flg = 0;
div = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (div != 0)
{
chk = n & div;
if (chk == div)
{
flg = 1;
_putchar('1');
}
else if (flg == 1 || div == 1)
{
_putchar('0');
}
div >>= 1;
}
}
