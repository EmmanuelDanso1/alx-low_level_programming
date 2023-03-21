#include "main.h"
/**
*_isalpha - Shows 1 if input is a letter, another case shows 0
*@c: the character is ASCII
*Return: Alway 1 if c is lowercase or uppercase. 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 60 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
