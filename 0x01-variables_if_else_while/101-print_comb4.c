#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different combinations of three digits
 * Return: 0 (correct)
 */

int main(void)
{
int i, x, y;
for (i = '0'; i < '9'; i++)
{
for (x = i + 1; x <= '9'; x++)
{
for (y = x + 1; y <= '9'; y++)
{
if ((x != i) != y)
{
putchar(i);
putchar(x);
putchar(y);
if (i == '7' && x == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
