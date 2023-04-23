#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all single digit numbers of base 10 from 0, then a new line
 * Return: 0 (correct)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	printf("\n");

	return (0);
}
