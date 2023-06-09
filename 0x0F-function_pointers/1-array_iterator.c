#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes function given as parameter
 * @array: array
 * @size: array size
 * @action: pointer to function
 * Return: 0 (correct)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array == NULL || action == NULL)
return;
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
