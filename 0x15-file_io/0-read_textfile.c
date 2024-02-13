#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * read_textfile - a function that  reads a text file and
 * prints it to the POSIX standard output
 * @filename : input value
 * @letters : input value
 * Return: the actual number of letters
 * it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t o;
	ssize_t w;
	ssize_t r;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	r = read(o, c, letters);
	w = write(STDOUT_FILENO, c, r);

	free(c);
	close(o);
	return (w);
}
