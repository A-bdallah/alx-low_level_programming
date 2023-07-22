#include "main.h"
#include<stdio.h>
/**
 * print_line- print alphabet in lower case
 * Return:lines (success)
 * @n : input number
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
}

}
