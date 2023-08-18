#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that copy memory area
 * @argc : number of arguments
 * @argv : array of arguments
 * Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	int bytes, i;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx\n", ar[i]);
	}
	return (0);
}
