:wq#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and then concate together for size
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concatenate of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int j, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
j = k = 0;
while (s1[j] != '\0')
j++;
while (s2[k] != '\0')
k++;
concat = malloc(sizeof(char) * (j + k + 1));
if (concat == NULL)
return (NULL);
j = k = 0;
while (s1[j] != '\0')
{
conct[j] = s1[j];
j++;
}
while (s2[k] != '\0')
{
conct[j] = s2[k];
j++, k++;
}
conct[j] = '\0';
return (conct);
}
