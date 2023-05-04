#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string
 * @x: pointer
 * Return: *x
 */
char *rot13(char *x)
{
int a;
int b;
char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0; x[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (x[a] == data1[b])
{
x[a] = datarot[b];
break;
}
}
}
return (x);
}
