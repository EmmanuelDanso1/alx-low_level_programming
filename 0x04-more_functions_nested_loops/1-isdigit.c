#include "main.h"
/**
*_isdigit - checks if a character is digit
*@c: The number to be checked
*Return: 1 for a character that will be a digit or 0 otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
