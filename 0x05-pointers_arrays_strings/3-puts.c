#include "main.h"

/**
 * _puts - function that prints a string,then a new line
 * @str: string to be printed
 * Return: 0 (correct)
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
