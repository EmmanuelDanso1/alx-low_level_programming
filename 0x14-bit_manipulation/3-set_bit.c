#include "main.h"
/**
* set_bit - prog sets the value of a bit to 1 at a given index.
* @n: number to set
* @index: index at which to set bit
*
* Return: 1 if success, or -1 for error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int start_bit;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
start_bit = 1 << index;
*n = *n | start_bit;
return (1);
}
