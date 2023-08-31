#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int
 * @b : input value
 * Return:  the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int j;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		return (0);
		j = 2 * j + (b[a] - '0');
	}

	return (j);
}
