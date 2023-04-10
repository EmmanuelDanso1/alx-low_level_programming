#include "main.h"
/**
*main - prints the number of arguments passed to the program
*@argc: counts the number of arguments
*@argv: vector array of arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
