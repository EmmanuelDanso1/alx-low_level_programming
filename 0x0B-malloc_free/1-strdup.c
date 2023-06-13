#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
size_t len = strlen(str);
char *duplicate = malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
