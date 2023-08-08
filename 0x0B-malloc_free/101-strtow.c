#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * count_word - a function that counts words
 * @s : input value
 * Return: number of words
*/

int count_word(char *s)
{
	int x, y, z;

	x = 0;
	z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
		x = 0;
		else if (x == 0)
		{
			x = 1;
			z++;
		}
	}
	return (z);
}
/**
 * strtow - a function that splits a string into words
 * @str : input value
 * Return: words
*/
char **strtow(char *str)
{
char **a;
char *b;
int i, k = 0, l = 0, m, c = 0, start, end;

while (*(str + l))
	l++;
m = count_word(str);
if (m == 0)
	return (NULL);
a = (char **) malloc(sizeof(char *) * (m + 1));
if (a == NULL)
	return (NULL);
for (i = 0; i <= l; i++)
{
	if (str[i] == ' ' || str[i] == '\0')
	{
		if (c)
		{
			end = i;
			b = (char *) malloc(sizeof(char) * (c + 1));
			if (b == NULL)
				return (NULL);
			while (start < end)
			{
				*b++ = str[start++];
				*b = '\0';
			a[k] = b - c;
			}
			k++;
			c = 0;
		}
	}
	else if (c++ == 0)
		start = i;
}
a[k] = NULL;
return (a);
}
