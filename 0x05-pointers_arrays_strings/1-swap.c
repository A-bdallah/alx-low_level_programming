#include <stdio.h>

#include "main.h"
/**
 * swap_int- swap values
 * Return:always 0 (success)
 * @a : the input integer
 * @b : the input integer
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
