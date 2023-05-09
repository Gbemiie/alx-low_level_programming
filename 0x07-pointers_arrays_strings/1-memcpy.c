#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: Destination
 * @src: Source
 * @n: bytes
 * Return: 0 (correct)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
