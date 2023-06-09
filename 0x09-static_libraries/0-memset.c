#include "main.h"
/**
 *_memset - fill up a block of memory witj a specific value
*@s:begins address of memory to be filled
*@b: the required value
*@n:number of bytes to be charged
*Return:metamorphosized array with new values of n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (; n > 0; j++)
{
s[j] = b;
n--;
}
return (s);
}
