#include "main.h"

/**
 * print_chessboard - function prints chessboard
 * @a: array
 * Return: 0 (correct)
 */
void print_chessboard(char (*a)[8])
{
int b, x;
for (b = 0; b < 8; b++)
{
for (x = 0; x < 8; x++)
_putchar(a[b][x]);
_putchar('\n');
}
}
