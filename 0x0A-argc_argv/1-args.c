#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments passed
 * into it
 * @argc: number of argument
 * @argv: array of argument
 * Return:always 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
