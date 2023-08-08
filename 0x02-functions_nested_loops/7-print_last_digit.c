#include "main.h"
/**
 * print_last_digit - print the last digit
 * Return: last digit (success)
 * @n : the input integer
*/
int print_last_digit(int n)
{
	int r;

	r = n % 10;
if (r < 0)
	{
_putchar(-r + 48);
return (-r);
	}
	else
	{
_putchar(r + 48);
return (r);
	}
}
