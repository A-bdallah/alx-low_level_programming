#include <stdio.h>
#include <string.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum of two numbers
 * @a : input value
 * @b : input value
 * Return: the sum of two numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers
 * @a : input value
 * @b : input value
 * Return: the difference of two numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two numbers
 * @a : input value
 * @b : input value
 * Return: the multiplication of two numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a : input value
 * @b : input value
 * Return: the division of two numbers
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers
 * @a : input value
 * @b : input value
 * Return: remainder of the division of two numbers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
