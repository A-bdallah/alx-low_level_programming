#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
char *Buffer_creation(char *f);
void close_file(int fd);

/**
 * Buffer_creation - a function that allocates byte for buffer
 * @f : input value
 * Return: pointer to the byte
*/
char *Buffer_creation(char *f)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error : Can't write to %s\n", f);
		exit(99);
	}
return (b);
}

/**
 * close_file - a function that close file descriptor
 * @fd : input value
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - a function  copies the file to another file
 * @argc : input value
 * @argv : input value
 * Return: 0 in Success
 */
int main(int argc, char *argv[])
{
	int from, r, w, to;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	b = Buffer_creation(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if
	(from == -1 || r == -1)
{
	 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	 free(b);
	 exit(98);
}
w = write(to, b, r);
if
(to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(b);
exit(99);
}
r = read(from, b, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(b);
close_file(from);
close_file(to);
return (0);
}
