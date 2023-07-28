#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*string_toupper - change all lowcaser letter to uppercase
*Return: n
*@n : pointer
*/
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
