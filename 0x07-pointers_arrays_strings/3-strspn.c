#include "main.h"

/**
 * _strspn - function gets length of a prefix substring
 * @s: segment
 * @accept: consist bytes
 * Return: 0 (correct)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
a++;
break;
}
else if (accept[x + 1] == '\0')
return (a);
}
s++;
}
return (a);
}
