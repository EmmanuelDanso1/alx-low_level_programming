#include <stdio.h>
/**
*main - Printing alphabet in lowercase using the putchar int type
*Return: Always 0 (Success)
*/
int main(void)
{
/*usign ASCII code to print the alphabet game in lowercase which start from 97 and ends at 122*/
/*initializing using a while loop*/
int n = 97;
while (n <= 122)
{
putchar(n);
n++;
}
/*putchar accepts only single quotes when initializing a new line*/
putchar('\n');
return (0);
}
