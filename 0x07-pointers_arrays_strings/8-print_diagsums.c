#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals
 * @a: int
 * @size: int size
 * Return: 0 (correct)
 */
void print_diagsums(int *a, int size)
{
int b, x, val1 = 0, val2 = 0;
for (b = 0; b <= (size * size); b = b + size + 1)
val1 = val1 + a[b];
for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
val2 = val2 + a[x];
printf("%d, %d\n", val1, val2);
}
