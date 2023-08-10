#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _memset - fils memory with a constant byte
 * @s: memory area to be filled
 * @b :char to copy
 * @n :number of times to copy b
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - a function that allocates memory
 * @nmemb : input value
 * @size : input value
 * Return: memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
	return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{	return (NULL);
}
_memset(ptr, 0, nmemb * size);
return (ptr);
}
