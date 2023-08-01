#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int ftr, s1 = 0, s2 = 0;

	for (ftr = 0; ftr < size; ftr++)
	{
		s1 += a[ftr];
		s2 += a[size - ftr - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
