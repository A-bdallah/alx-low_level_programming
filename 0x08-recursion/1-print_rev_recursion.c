#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: input value
 * Return: always 0 (success)
*/
void _print_rev_recursion(char *s)
{
if
(*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
