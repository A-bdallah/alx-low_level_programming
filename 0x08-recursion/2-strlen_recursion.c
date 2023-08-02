#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of string
 * @s : input value
 * Return: always 0 (success)
*/
int _strlen_recursion(char *s)
{
	int i = 0;

if (*s)
	{       i++;
		i = i + _strlen_recursion(s + 1);
	}
return (i);
}
