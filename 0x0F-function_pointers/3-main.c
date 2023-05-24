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
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
val1 = atoi(argv[1]);
op = argv[2];
val2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && val2 == 0) || (*op == '%' && val2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(val1, val2));
return (0);
}
