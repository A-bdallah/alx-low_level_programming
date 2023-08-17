#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of parametrs
 * @n: input value
 * Return:  sum of all parametrs
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
int sum = 0;

	va_start(ap, n);
if (n == 0)
{
	return (0);
}
va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
