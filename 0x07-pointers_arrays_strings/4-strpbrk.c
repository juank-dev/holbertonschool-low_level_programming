#include "holberton.h"

/**
 * _strpbrk - prints buffer in hexa
 * @s: buffer
 * @accept: buffer2
 *
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
