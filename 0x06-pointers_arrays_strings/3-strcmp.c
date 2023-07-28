#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *  _strcmp - compares two string values
 * @s1: input value
 * @s2: input value
 * Return: s1[j] - s2[j]
*/
int _strcmp(char *s1, char *s2)
{
int j, S;
j = 0;
S = 0;

while ((s1[j] != '\0') && (s2[j] != '\0'))
{
if (s1[j] != s2[j])
{
S = S + (s1[j] - s2[j]);
}
j++;
}
return (S);
}
