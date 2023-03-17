#include <stdio.h>
/**
*main - print number of base 10 using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
/*this will add 9 to 48 and print out from0 to 9*/
}
putchar('\n');
return (0);
}
