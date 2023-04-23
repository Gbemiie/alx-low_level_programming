#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints the alphabet in lowercase, then a new line
 * Return: 0 (correct)
 */

int main(void)
{
	char alph, x, y;

	x = 'x';
	y = 'y';

	for (alph = 'a'; alph <= 'z'; alph++)
{
	if (alph != x && alph != y)
		putchar(alph);
}
putchar('\n');
return (0);
}

