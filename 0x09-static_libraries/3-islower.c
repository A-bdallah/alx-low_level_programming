#include "main.h"
/**
 * _islower - print alphabet in lower case
 * Return: 1 for lowaer cases character. 0 for the rest (success)
 * @c : the character in ASCII code
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{return (0); }
_putchar('\n');
}
