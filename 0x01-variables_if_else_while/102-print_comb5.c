#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * Return: 0 (correct)
 */

int main(void)
{
int x = 0;
int y_c;
int i_c;

int x2;
int y_c2;
int i_c2;

while (x <= 98)
{
y_c = (x / 10 + '0');
i_c = (x % 10 + '0');
x2 = 0;
while (x2 <= 99)
{
y_c2 = (x2 / 10 + '0');
i_c2 = (x2 % 10 + '0');

if (x < x2)
		{
putchar(y_c);
putchar(i_c);
putchar(' ');
putchar(y_c2);
putchar(i_c2);

if (x != 98)
{
putchar(',');
putchar(' ');
}
}
x2++;
}
x++;
}
putchar('\n');
return (0);
}

