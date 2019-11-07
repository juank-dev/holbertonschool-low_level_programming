#include <stdio.h>
#include "holberton.h"


/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * -> there is one or more chars in the string b that is not 0 or 1
 * -> b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 1, count, value = 0;

	if (b == NULL)
		return (0);
	count = _strlen(b);
	while (count)
	{
		if (!(b[count - 1] == 48 || b[count - 1] == 49))
			return (0);
		if (b[count - 1] == 49)
		{
			value += bin;
		}
		bin *= 2;
		--count;
	}
	return (value);
}
