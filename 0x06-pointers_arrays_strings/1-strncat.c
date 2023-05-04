#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: Value number
 * Return: 0 (correct)
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
