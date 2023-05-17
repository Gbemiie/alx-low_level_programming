#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - length of words
 * @str: String
 * Return: 0 (correct)
 */
int word_len(char *str)
{
int arr = 0, val = 0;
while (*(str + arr) && *(str + arr) != ' ')
{
val++;
arr++;
}
return (val);
}

/**
 * count_words - counts numbers of words
 * @str: string
 * Return: 0 (correct)
 */
int count_words(char *str)
{
int arr = 0, chars = 0, val = 0;
for (arr = 0; *(str + arr); arr++)
val++;
for (arr = 0; arr < val; arr++)
{
if (*(str + arr) != ' ')
{
chars++;
arr += word_len(str + arr);
}
}
return (chars);
}

/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: 0 (correct)
 */
char **strtow(char *str)
{
char **strings;
int arr = 0, chars, x, wrds, y;
if (str == NULL || str[0] == '\0')
return (NULL);
chars = count_words(str);
if (chars == 0)
return (NULL);
strings = malloc(sizeof(char *) * (chars + 1));
if (strings == NULL)
return (NULL);
for (x = 0; x < chars; x++)
{
while (str[arr] == ' ')
arr++;
wrds = word_len(str + arr);
strings[x] = malloc(sizeof(char) * (wrds + 1));
if (strings[x] == NULL)
{
for (; x >= 0; x--)
free(strings[x]);
free(strings);
return (NULL);
}
for (y = 0; y < wrds; y++)
strings[x][y] = str[arr++];
strings[x][y] = '\0';
}
strings[x] = NULL;
return (strings);
}
