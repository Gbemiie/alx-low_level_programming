#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees two dimensional grid
 * @grid: int grid
 * @height: int height
 * Return: 0 (correct)
 */
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
