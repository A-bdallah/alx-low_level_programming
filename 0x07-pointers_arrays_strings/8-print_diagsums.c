#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @a : input
 * @size : input
 * Return: always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	putchar(sum1);
	putchar(sum2);
}
