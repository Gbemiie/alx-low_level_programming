#include "main.h"

/**
 * rev_string - function reverse array
 * @n: int params
 * Return: 0 (correct)
 */

void rev_string(char *n)
{
int a = 0;
int b = 0;
char num;
while (*(n + a) != '\0')
{
a++;
}
a--;
for (b = 0; b < a; b++, a--)
{
num = *(n + b);
*(n + b) = *(n + a);
*(n + a) = num;
}
}

/**
 * infinite_add - function adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer calls function
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, a = 0, b = 0, digits = 0;
int val1 = 0, val2 = 0, num_tot = 0;
while (*(n1 + a) != '\0')
i++;
while (*(n2 + b) != '\0')
b++;
a--;
b--;
if (b >= size_r || a >= size_r)
return (0);
while (b >= 0 || a >= 0 || overflow == 1)
{
if (a < 0)
val1 = 0;
else
val1 = *(n1 + a) -'0';
if (b < 0)
val2 = 0;
else
val2 = *(n2 + b) -'0';
num_tot = val1 + val2 + overflow;
if (num_tot >= 10)
overflow = 1;
else
overflow = 0;
if (digits >= (size_r - 1))
return (0);
*(r + digits) = (num_tot % 10) + '0';
digits++;
b--;
a--;
}
if (digits == size_r)
return (0);
*(r + digits) = '\0';
rev_string(r);
return (r);
}
