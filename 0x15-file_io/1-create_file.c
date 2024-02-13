#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename : input value
 * @text_content : input value
 * Return: 1 on success, -1 on failure (file can not be
 *created, file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	for (c = 0; text_content[c];)
		c++;
	}
a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(a, text_content, c);

if (a == -1 || b == -1)
{
	return (-1);
}
close(a);

return (1);
}
