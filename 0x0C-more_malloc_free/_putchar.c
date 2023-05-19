#include <unistd.h>

/**
 * _putchar - puts character
 * @c: character
 * Return: 0 (correct)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
