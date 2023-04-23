#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, then a new line
 * Return: 0 (correct)
 */

int main(void)

{
	int i;
	char alph;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
