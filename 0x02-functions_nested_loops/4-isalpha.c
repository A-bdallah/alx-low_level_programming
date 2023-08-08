#include "main.h"
/**
 * _isalpha - check if alphabet uppercase or lower
 * Return:always 0 (success)
 * @c : the character ASCII code
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 96))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
