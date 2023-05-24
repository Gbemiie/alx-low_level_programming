#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3.calc.h"
/**
 * main - result of simple operations
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0 (correct)
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
int val1, val2;
char *wrk;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
val1 = atoi(argv[1]);
wrk = argv[2];
val2 = atoi(argv[3]);
if (get_wrk_func(wrk) == NULL || wrk[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*wrk == '/' && val2 == 0) || (*wrk == '%' && val2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_wrk_func(wrk)(val1, val2));
return (0);
}
