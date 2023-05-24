#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - sums two numbers.
* @a: 1st integer
* @b: 2nd integer
* Return: 0 (correct)
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - subtract two numbers.
* @a: 1st integer
* @b: 2nd integer
* Return: 0 (correct)
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - multiplies two numbers.
* @a: 1st integer
* @b: 2nd integer
* Return: 0 (correct)
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - divides two numbers.
* @a: 1st integer
* @b: 2nd integer
* Return: 0 (correct)
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - remainder of the division of two numbers.
* @a: 1st integer
* @b: 2nd integer
* Return: 0 (correct)
*/
int op_mod(int a, int b)
{
return (a % b);
}
