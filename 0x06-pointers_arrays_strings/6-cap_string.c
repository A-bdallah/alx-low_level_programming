#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*cap_string - capitalizes all words of a string
*@str : the string to be capitalized
*Return: a pointer to the changed string
*/
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 97) && (str[index] <= 122))
		


		if (str[index - 1] == ' ' ||
		   str[index - 1] == '\t' ||
		   str[index - 1] == '\n' ||
		   str[index - 1] == ',' ||
		   str[index - 1] == ';' ||
		   str[index - 1] == '.' ||
		   str[index - 1] == '!' ||
		   str[index - 1] == '?' ||
		   str[index - 1] == '"' ||
		   str[index - 1] == '(' ||
		   str[index - 1] == ')' ||
		   str[index - 1] == '{' ||
		   str[index - 1] == '}')

		   str[index] -= 32;
		
		index++;
	
	}
return (str);
}
