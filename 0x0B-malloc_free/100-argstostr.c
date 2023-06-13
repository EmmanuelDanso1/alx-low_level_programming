#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry point
 * @ac: integer input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i, a, b = 0, c = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (b = 0; av[i][a]; a++)
c++;
}
c += ac;
str = malloc(sizeof(char) * c + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (a = 0; av[i][a]; a++)
{
str[b] = av[i][a];
b++;
}
if (str[b] == '\0')
{
str[b++] = '\n';
}
}
return (str);
}
