#include "main.h"
/**
 * _isupper - check if alphabet uppercase
 * Return:always 0 (success)
 * @c : the character ASCII code
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
