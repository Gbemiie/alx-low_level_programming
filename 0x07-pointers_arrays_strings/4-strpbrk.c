#include "main.h"
/**
 * _strpbrk - function searches string for any set of bytes
 * @s: String
 * @accept: bytes in string
 * Return: 0 (correct)
 */
char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
