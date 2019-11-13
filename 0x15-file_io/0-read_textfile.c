#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - function reads a text file and prints it to standard output
 * @filename: file
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_size;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(letters * sizeof(char) + 1);
	if (!s)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	n_size = read(fd, s, letters);
	if (n_size == -1)
	{
		free(s);
		return (0);
	}
	write(1, s, n_size);
	close(fd);
	free(s);
	return (n_size);
}
