#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * char *_strncat - concatenates two strings
 * Return: dest
 * @dest : input string
 * @src : input string
 * @n : input integer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
