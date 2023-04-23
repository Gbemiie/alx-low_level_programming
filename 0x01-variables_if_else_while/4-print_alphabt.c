#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints the alphabet in lowercase, then a new line
 * Return: 0 (correct)
 */

int main(void)
{
	char alph, e, q;

	e = 'e';
	q = 'q';

	for (alph = 'a'; alph <= 'z'; alph++)
{
	if (alph != e && alph != q)
		putchar(alph);
}
putchar('\n');
return (0);
}

