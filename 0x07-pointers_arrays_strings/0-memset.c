#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: pointer memory
 * @b: constant byte
 * @n: bytes
 * Return: 0 (correct)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
