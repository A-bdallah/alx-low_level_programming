#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strlen - returns the length of string
 *  @s : string to evaluate
 * Return: a pointer (SUCCESS), NULL fail
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy string in string pointed to
 * by src including the terminating
 * null byte (\0)
 * to the buffer pointed by the dest
 *  @dest :  pointer to the buffer in which the string exists
 *  @src : string to be copied
 * Return: the pointer to dest
*/
char *_strcpy(char *src, char *dest)
{
int  j;

for (j = 0; src[j]; j++)

	dest[j] = src[j];

dest[j] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name : name of the dog
 * @age : age of th dog
 * @owner : owner of the dog
 * Return: a pointer (SUCCESS), NULL fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;


if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);

}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog->owner == NULL)
{
	free(dog);
	free(dog->name);
	return (NULL);
}
dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);
		return (dog);
}
