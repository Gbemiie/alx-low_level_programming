#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: string printed btw strings
 * @..: variable unsigned
 * @n: no of ints
 * Return: 0 (correct)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int x;
va_start(strings, n);
for (x = 0; x < n; x++)
{
str = va_arg(strings, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
