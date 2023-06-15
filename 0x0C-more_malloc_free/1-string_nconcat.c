#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to another
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, len_1 = 0, len_2 = 0;
while (s1 && s1[len_1])
len_1++;
while (s2 && s2[len_2])
len_2++;
if (n < len_2)
s = malloc(sizeof(char) * (len_1 + n + 1));
else
s = malloc(sizeof(char) * (len_1 + len_2 + 1));
if (!s)
return (NULL);
while (i < len_1)
{
s[i] = s1[i];
i++;
}
while (n < len_2 && i < (len_1 + n))
s[i++] = s2[j++];
while (n >= len_2 && i < (len_1 + len_2))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
