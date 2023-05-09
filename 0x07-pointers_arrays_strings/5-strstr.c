#include <stdio.h>
#include "main.h"

/**
 * _strstr - function locates substring
 * @haystack: string
 * @needle: 1st occuring substring
 * Return: 0 (correct)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *a = haystack;
char *b = needle;
while (*a == *b && *b != '\0')
{
a++;
b++;
}
if (*b == '\0')
return (haystack);
}
return (NULL);
}
