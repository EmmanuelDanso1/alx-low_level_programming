#include <stdio.h>
/**
*main - Printing alphabet in lowercase using the putchar int type
*Return: Always 0 (Success)
*/
int main(void)
{
/*using ASCII codes from 97 to 122 alphabet*/
int n = 97;
while (n <= 122)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
