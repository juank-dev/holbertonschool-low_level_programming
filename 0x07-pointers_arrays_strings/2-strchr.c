#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - prints buffer in hexa
 * @s: buffer
 * @c: buffer2
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
		return (s);
}
