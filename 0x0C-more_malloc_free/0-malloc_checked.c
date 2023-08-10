#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory
 * @b : input value
 * Return: a pointer to allocate memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
		return (p);
}
