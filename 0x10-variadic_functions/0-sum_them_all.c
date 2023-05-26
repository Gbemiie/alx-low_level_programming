#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer
 * @..: variable unsigned
 * Return: 0 (correct)
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int x, sum = 0;
va_start(ap, n);
for (x = 0; x < n; x++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
