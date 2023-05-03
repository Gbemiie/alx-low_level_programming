#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: 0 (correct)
 */

int _atoi(char *s)
{
int a, b, c, len, d, numb;
a = 0;
b = 0;
c = 0;
len = 0;
d = 0;
numb = 0;
while (s[len] != '\0')
len++;
while (a < len && d == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
numb = s[a] - '0';
if (b % 2)
numb = -numb;
c = c * 10 + numb;
d = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
d = 0;
}
a++;
}
if (d == 0)
return (0);
return (c);
}

