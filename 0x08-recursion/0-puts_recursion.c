#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s : input value
 * Return: always 0 (success)
 */
void _puts_recursion(char *s)
{
if (*s)
{	putchar(*s);
	_puts_recursion(s + 1);
}
else
putchar('\n');
}
