#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  function that allocates memory
 * @b: int allocated
 * Return: 0 (correct)
 */
void *malloc_checked(unsigned int b)
{
void *t;
t = malloc(b);
if (t == NULL)
exit(98);
return (t);
}
