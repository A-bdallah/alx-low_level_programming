#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*reverse_array - reverse array of integer
*Return: void
*@a : array
*@n : number of elements in array
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
