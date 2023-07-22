#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if digit
 * Return: 0 or 1 (success)
 * @c : the input integer
*/
int _isdigit(int c)
{
if (isdigit(c) == 0)
{
return (0);
}
else
return (1);
}
