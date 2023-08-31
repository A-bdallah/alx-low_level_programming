#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * get_bit - a function that return the value of
 * a bit at a given index
 * @index : input value
 * @n : input value
 * Return: the value of the bit at index index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 64)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
