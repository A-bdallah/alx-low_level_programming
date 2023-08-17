#include "variadic_functions.h"
#include <stdio.h>
#include<stdarg.h>
/**
 * print_strings - a function that print strings followed
 * by a new line
 * @separator : input value
 * @n : input value
 * description : if separator is NULL, it is not printed,
 * if one of the strings is NULL, (nil) is printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int i;

	va_start(strings, n);

for (i = 0; i < n; i++)
{
s = va_arg(strings, char *);
if
		   (s == NULL)

		   printf("(nil)");
else
			   printf("%s", s);
if
(i != (n - 1) && separator != NULL)
printf("%s", separator);
}
	   printf("\n");
	   va_end(strings);

}
