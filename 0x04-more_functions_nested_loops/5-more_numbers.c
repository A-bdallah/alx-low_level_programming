#include "main.h"
#include<stdio.h>
/**
 * more_numbers - print numbers from 0 to 14 10 times
 * Return: result (success)
*/
void more_numbers(void)


{int i;
int j;

for (j = 1; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
	if (i >= 10)
	{
		putchar('1');
		putchar(i % 10 + '0');
	}
}
putchar('\n');
}
}
