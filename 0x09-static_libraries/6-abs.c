#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * Return:always integer (success)
 * @i : the character ASCII code
*/
int _abs(int i)
{
	if (i >= 0)
{
	return (i);
}
	else
{
		return (i * -1);
}
_putchar('\n');
}
