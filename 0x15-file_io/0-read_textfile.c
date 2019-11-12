#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int fd, j, n;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(letters * sizeof(char));
	if (!s)
	{
	       	free(s);
		return (0);
	}

	fd =open(filename, O_RDONLY);
	letters--;
	while (read(fd,&s,1) > 0)
	{
		s[j] =  
		if (!letters)
			break;
		j++, letters--;
	}
	write(1,&s, n);
	close(fd);
	free(s);
	return (n);
}
