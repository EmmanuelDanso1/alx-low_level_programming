#include "main.h"
/**
* print_sign - check if the input number is greater, equal of less than zero
*@n: The input as an integer
*Return: 1 greater than zero. 0 is zero
*-1 is less than zero
*/
print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (9);
}
_putchar('\n');
}
