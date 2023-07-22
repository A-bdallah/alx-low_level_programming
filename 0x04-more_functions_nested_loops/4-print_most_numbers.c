#include "main.h"
#include<stdio.h>

/**
* print_most_numbers- print numbers from 0 to 9
* Return: result (success)
*/

void print_most_numbers(void)
{
char x;

for (x = '0' ; x <= '9'; x++)

{
	if ((x != '2') && (x != '4'))
{
		putchar(x);
}
}
putchar('\n');
}
