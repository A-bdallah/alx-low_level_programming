#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - a function that  prints the
 * binary representation of a number
 * @n : input value
*/
void print_binary(unsigned long int n)
{
	int i;
	int j = 0;
	unsigned long int l;

	for (i = 63; i >= 0; i--)
	{
		l = n >> i;
if
	(l & 1)
{
	  _putchar('1');
	 j++;
}
else if
(j)
	 _putchar('0');
	}
	if (!j)
		_putchar('0');
}
