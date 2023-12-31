#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _pow_recursion - a function that  returns x raised to the power of y
 * @x : input value
 * @y : input value
 * Return: always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x,  y - 1));
}
