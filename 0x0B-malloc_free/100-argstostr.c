#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - arguement stores string
 * @ac: arguement count
 * @av: arguement vector
 * Return: 0 (correct)
 */
char *argstostr(int ac, char **av)
{
int val = 0, a = 0, b = 0, c = 0;
char *x;
if (ac == 0 || av == NULL)
return (NULL);
while (a < ac)
{
while (av[a][b])
{
val++;
b++;
}
b = 0;
a++;
}
x = malloc((sizeof(char) * val) +ac + 1);
a = 0;
while (av[a])
{
while (av[a][b])
{
x[c] = av[a][b];
c++;
b++;
}
x[c] = '\n';
b = 0;
c++;
a++;
}
c++;
x[c] = '\0';
return (x);
}
