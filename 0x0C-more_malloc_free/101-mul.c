#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks if string is digit
 * @s: string
 * Return: 0 (correct)
 */
int is_digit(char *s)
{
int x = 0;
while (s[x])
{
if (s[x] < '0' || s[x] > '9')
return (0);
x++;
}
return (1);
}

/**
 * _strlen - length of a string
 * @s: string
 * Return: 0 (correct
 */
int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}

/**
 * errors - incorrect arguments
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument counts
 * @argv: arguments vector
 * Return: 0 (correct)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int val1, val2, val, x, chars, num1, num2, *output, y = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
val1 = _strlen(s1);
val2 = _strlen(s2);
val = val1 + val2 + 1;
output = malloc(sizeof(int) * val);
if (!output)
return (1);
for (x = 0; x <= val1 + val2; x++)
output[x] = 0;
for (val1 = val1 - 1; val1 >= 0; val1--)
{
num1 = s1[val1] - '0';
chars = 0;
for (val2 = _strlen(s2) - 1; val2 >= 0; val2--)
{
num2 = s2[val2] - '0';
chars += output[val1 + val2 + 1] + (num1 *num2);
output[val1 + val2 + 1] = chars % 10;
chars /= 10;
}
if (chars > 0)
output[val1 + val2 + 1] += chars;
}
for (x = 0; x < val - 1; x++)
{
if (output[x])
y = 1;
if (y)
_putchar(output[x] + '0');
}
if (!y)
_putchar('0');
_putchar('\n');
free(output);
return (0);
}
