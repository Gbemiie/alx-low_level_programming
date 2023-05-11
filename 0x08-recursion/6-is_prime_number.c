#include "main.h"
#include <stdio.h>

int check_prime(int n, int x);
/**
 * is_prime_number -  returns 1 if input int is  prime num, then return 0
 * @n: int
 * Return: 0 (correct)
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - To see if it is prime number
 * @n: int
 * @x: iteration
 * Return: 0 (correct)
 */
int check_prime(int n, int x)
{
if (n <= 1)
return (0);
if (n % x == 0 && x > 1)
return (0);
if ((n / x) < x)
return (1);
return (check_prime(n, x + 1));
}
