#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_rev - print string in reverse
 * Return:always 0 (success)
 * @s: string
*/

void print_rev(char *s)
{
int a = 0;
int b;

while (*s != '\0')
{
	a++;
	s++;
}
s--;
for (b = a; b > 0; b--)
{
	putchar(*s);
	s--;
}

putchar('\n');
}
