#include "main.h"
/**
* print_binary - Prints the binary representation of a number
* @n: The number to print in binary
*/
void print_binary(unsigned long int n)
{
unsigned long int m = 1UL << ((sizeof(unsigned long int) * 8) - 1);
int std = 0;
if (n == 0)
{
putchar(48);
return;
}
while (m)
{
if (n & m)
{
putchar('1');
std = 1;
}
else if (std)
{
putchar(48);
}
m >>= 1;
}
}
