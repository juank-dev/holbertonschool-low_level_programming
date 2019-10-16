#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: array
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *string;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	string = malloc(i + 1);

	if (string == 0)
	{
		return (0);
	}

	for (j = 0; j < i; j++)
	{
		*(string + j) = *(str + j);
	}
	return (string);
}
