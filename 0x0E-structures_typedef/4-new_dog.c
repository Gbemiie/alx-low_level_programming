#include <stdlib.h>
#include "dog.h"

/**
* _strlen - length of a string
* @s: string
* Return: 0 (correct)
*/

int _strlen(char *s)
{
int x;
x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}

/**
* *_strcpy - copies the string
* @dest: destination
* @src: source
* Return: 0 (correct)
*/

char *_strcpy(char *dest, char *src)
{
int val, x;
val = 0;
while (src[val] != '\0')
{
val++;
}
for (x = 0; x < val; x++)
{
dest[x] = src[x];
}
dest[x] = '\0';
return (dest);
}

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: 0 (correct)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int val1, val2;
val1 = _strlen(name);
val2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (val1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (val2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
