#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * char *_strcpy - copies the string pointed to by src
 * Return:string
 * @dest : copy to
 * @src : copy from
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = 0;

while (src[l] != '\0')
{
	l++;
}
for (i = 0 ; i < l; i++)
{
	dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
