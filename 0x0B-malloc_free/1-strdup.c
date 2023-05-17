#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function duplicates string
 * @str: String
 * Return: 0 (correct)
 */
char *_strdup(char *str)
{
int x = 0, y = 1;
char *z;
if (str == NULL)
return (NULL);
while (str[y])
{
y++;
}
z = malloc((sizeof(char) * y) +1);
if (z == NULL)
return (NULL);
while (x < y)
{
z[x] = str[x];
x++;
}
z[x] = '\0';
return (z);
}
