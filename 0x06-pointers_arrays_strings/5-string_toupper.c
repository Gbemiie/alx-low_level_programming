#include "main.h"

/**
 * string_toupper - function changes all lowercase letter to uppercase
 * @str: String
 * Return: Pointer to the string
 */

char *string_toupper(char *str)
{
int x;
x = 0;
while (str[x] != '\0')
{
if (str[x] >= 'a' && str[x] <= 'z')
{
str[x] = str[x] - 32;
}
x++;
}
return (str);
}
