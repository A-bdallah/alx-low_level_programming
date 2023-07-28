#include "main.h"
#include<stdio.h>
/**
* rot13 - encoder rot 13
* @s: pointer to string params
* Return: *s
*/
char *rot13(char *s)
{
	int a;
	int b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "KLMNOPQRSTUVWXYZABCDEFGHIJeftshjklmnpoxztyacdbnslmop";


	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
				break;
			}
		}
	}
		return (s);
}
