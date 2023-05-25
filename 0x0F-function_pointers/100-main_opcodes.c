#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes
* @argc: arguments count
* @argv: arguments vector
* Return: 0 (correct)
*/

int main(int argc, char *argv[])
{
int digit, x;
char *val;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
digit = atoi(argv[1]);
if (digit < 0)
{
printf("Error\n");
exit(2);
}
val = (char *)main;
for (x = 0; x < digit; x++)
{
if (x == digit - 1)
{
printf("%02hhx\n", val[x]);
break;
}
printf("%02hhx ", val[x]);
}
return (0);
}
