#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * char *_strncpy - that copies a string
 * Return: dest
 * @dest : input string
 * @src : input string
 * @n : input integer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
