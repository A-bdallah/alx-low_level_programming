#include "main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * puts2 - prints every other character of a string
 * Return:always 0 (success)
 * @str : string
*/
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *c = str;
	int d;

while (*c != '\0')
{
	c++;
	a++;
}
b = a - 1;
for (d = 0; d <= b; d++)
{
	if (d % 2 ==  0)
	{
		putchar(str[d]);
	}
}
putchar('\n');
}
