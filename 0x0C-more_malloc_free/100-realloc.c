#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcon - function that concatenates two strings.
 * @s: number min.
 * @p: number max.
 * @n: array input.
 * Return: Always 0.
 */
char *_strcon(char *s, char *p, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = *(p + i);
	}
	return (s);
}


/**
 * _realloc - function that concatenates two strings.
 * @old_size: number min.
 * @new_size: number max.
 * @ptr: array input.
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;

	ptr = malloc(old_size);

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
	_strcon(str, ptr, old_size);
	return (str);
}
