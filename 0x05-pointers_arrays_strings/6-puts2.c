#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: 0 (correct)
 */
void puts2(char *str)
{
int len = 0;
int c = 0;
char *v = str;
int u;
while (*v != '\0')
{
v++;
len++;
}
c = len - 1;
for (u = 0; u <= c ; u++)
{
if (u % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}
