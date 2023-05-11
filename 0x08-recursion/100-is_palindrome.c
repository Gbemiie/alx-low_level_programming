#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: String
 * Return: 0 (correct)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares string char
 * @s: String
 * @x: 1st string
 * @y: 2nd string
 * Return: 0 (correct)
 */
int comparator(char *s, int x, int y)
{
if (*(s + x) == *(s + y))
{
if (x == y || x == y + 1)
return (1);
return (0 + comparator(s, x + 1, y - 1));
}
return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: String
 * Return: 0 (correct)
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
