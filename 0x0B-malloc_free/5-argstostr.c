#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 *
 * @ac: ARGC
 * @av: ARGV
 *
 * Return: Pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, longitud = 0, l, k;
	char *string;

	if (ac == 0 || av == '\0')
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		longitud  +=  j + 1;
	}
	string = malloc(sizeof(char) * (longitud + 1));

	if (string == NULL)
	{
		return (NULL);
	}
	longitud = 0;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			*(string + longitud) = av[k][l];
			longitud++;
		}
		*(string + longitud) = '\n';
		longitud++;
	}

	return (string);
}
