#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: argument types
 * Return: 0 (correct)
 */
void print_all(const char * const format, ...)
{
int x = 0;
char *str, *gap = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[x])
{
switch (format[x])
{
case 'c':
printf("%s%c", gap, va_arg(list, int));
break;
case 'i':
printf("%s%d", gap, va_arg(list, int));
break;
case 'f':
printf("%s%f", gap, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", gap, str);
break;
default:
x++;
continue;
}
gap = ",";
x++;
}
}
printf("\n");
va_end(list);
}
