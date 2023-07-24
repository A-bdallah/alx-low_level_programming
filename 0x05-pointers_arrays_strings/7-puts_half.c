#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * Return:always 0 (success)
 * @str: string
*/
void puts_half(char *str)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;
	b = (c / 2);
	if ((c % 2) == 1)
		b = ((c + 1) / 2);
for (a = b; str[a] != '\0'; a++)
putchar(str[a]);
putchar('\n');
}
