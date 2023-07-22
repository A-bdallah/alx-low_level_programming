#include "main.h"
#include<stdio.h>
/**
 * print_diagonal - print diagonal line
 * Return:lines (success)
 * @n : input number
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					putchar('\\');
				else if (y < x)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
