#include "main.h"

/**
 * string_toupper - function changes all lowercase letter to uppercase
 * @n: Pointer
 * return: n
 */

char *string_toupper(char *n)
{
int x;
x = 0;
while (n[x] != '\0')
{
if (n[x] >= 'a' && n[x] <= 'z')
{
n[x] = n[x] - 32;
}
x++;
}
return (n);
}
