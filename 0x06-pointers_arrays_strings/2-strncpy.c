#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: Destination
 * @src: Source
 * @n: Value of number
 * Return: 0 (correct)
 */
char *_strncpy(char *dest, char *src, int n)
{
int b;
b = 0;
while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}
return (dest);
}
