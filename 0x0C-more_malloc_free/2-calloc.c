#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for array, with malloc
 * @nmemb: array
 * @size: bytes size
 * Return: 0 (correct)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int a = 0, b = 0;
char *x;
if (nmemb == 0 || size == 0)
return (NULL);
b = nmemb * size;
x = malloc(b);
if (x == NULL)
return (NULL);
while (a < b)
{
x[a] = 0;
a++;
}
return (x);
}
