#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: 0 (correct)
 */

int main(void)

{
int i, x;

for (i = '0'; i < '9'; i++)
{
for (x = i + 1; x <= '9'; x++)
{
if (x != i)
{
putchar(i);
putchar(x);
if (i == '8' && x == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
