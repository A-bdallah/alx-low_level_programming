#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts- print string
 * Return:always 0 (success)
 * @str : the input string
*/

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
