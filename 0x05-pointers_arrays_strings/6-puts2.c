#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: 0 (correct)
 */
void puts2(char *str)
{
int len = 0;
int t = 0;
char *v = str;
int o;
while (*v != '\0')
{
v++;
len++;
}
t = len - 1;
for (o = 0; o <= t ; o++)
{
if (o % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}
