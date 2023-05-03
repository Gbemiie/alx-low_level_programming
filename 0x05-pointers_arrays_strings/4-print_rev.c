#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,then a new line
 * @s: string
 * Return: 0 (correct)
 */
void print_rev(char *s)
{
int len = 0;
int u;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (u = len; u > 0; u--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
