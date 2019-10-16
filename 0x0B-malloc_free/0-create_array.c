#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: size of array
 * @c: character
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (0);
	}
	str = malloc(size);

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	*(str + i) = '\0';

	return (str);
}
