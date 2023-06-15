#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit character
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 if not
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int len_1, len_2, len, i, remainder, dig_1, dig_2, *result, a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
len_1 = _strlen(s1);
len_2 = _strlen(s2);
len = len_1 + len_2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len_1 + len_2; i++)
result[i] = 0;
for (len_1 = len_1 - 1; len_1 >= 0; len_1--)
{
dig_1 = s1[len_1] - '0';
remainder = 0;
for (len_2 = _strlen(s2) - 1; len_2 >= 0; len_2--)
{
dig_2 = s2[len_2] - '0';
remainder += result[len_1 + len_2 + 1] + (dig_1 *dig_2);
result[len_1 + len_2 + 1] = remainder % 1;
remainder /= 10;
}
if (remainder > 0)
result[len_1 + len_2 + 1] += remainder;
}
for (i = 0; i < len - 1; i++)
{
if (result[i])
a = 1;
if (a)
_putchar(result[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
