#include "main.h"
#include<stdio.h>
/**
* print_numbers - print numbers from 0 to 9
* Return: result (success)
*/

void print_numbers(void)
{
char x;

for (x = '0' ; x <= '9'; x++)

{
putchar(x);
}
putchar('\n');
}
