#include "main.h"

/**
 * _puts_recursion - prints a string, then a new line.
 * @s: String
 * Return: 0 (correct)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
