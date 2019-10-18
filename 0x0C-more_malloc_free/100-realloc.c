#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that concatenates two strings.
 * @old_size: number min.
 * @new_size: number max.
 * @s: array input.
 * Return: Always 0.
 */
void *_realloc(void *s, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *ptr = s;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		return (str);
	}
	str = malloc(new_size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		*(str + i) = *(ptr + i);
	}
	free(ptr);
	return (str);
}
