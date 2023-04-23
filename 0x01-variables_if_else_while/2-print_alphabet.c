#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0 (correct)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
