#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - a function that reallocates a memory block
 * @ptr : input value
 * @old_size : input value
 * @new_size : input value
 * Return: a pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
	return (malloc(new_size));
	p = malloc(new_size);
	}
	if (!p)
	{		return (NULL);
	old_p = ptr;
	}
if (new_size > old_size)
	{
	for (i = 0; i < old_size; i++)
	{
	p[i] = old_p[i];
	}
	}
	free(ptr);
	return (p);
	}
