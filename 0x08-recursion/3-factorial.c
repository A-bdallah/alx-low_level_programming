#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * factorial - a function that returns a factorial of given number
 * @n : input value
 * Return: always 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	n = n * factorial(n - 1);
	return (n);
	}
}
