#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function allocates grid
 * @width: int width
 * @height: int height
 * Return: 0 (correct)
 */
int **alloc_grid(int width, int height)
{
int a, b, c, d;
int **x;
if (width <= 0 || height <= 0)
return (NULL);
x = malloc(sizeof(int *) * height);
if (x == NULL)
{
free(x);
return (NULL);
}
for (a = 0; a < height; a++)
{
x[a] = malloc(sizeof(int) * width);
if (x[a] == NULL)
{
for (b = 1; b >= 0; b--)
{
free(x[b]);
}
free(x);
return (NULL);
}
}
for (c = 0; c < height; c++)
{
for (d = 0; d < width; d++)
{
x[c][d] = 0;
}
}
return (x);
}
