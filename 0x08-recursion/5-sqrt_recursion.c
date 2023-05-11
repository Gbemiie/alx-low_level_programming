#include "main.h"
#include <stdio.h>

int _sqrt(int n, int x);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: 0 (correct)
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - prints natural square root of a number
 * @n: int
 * @x: iteration
 * Return: 0 (correct)
 */
int _sqrt(int n, int x)
{
int sqrt = x * x;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (x);
return (_sqrt(n, x + 1));
}
