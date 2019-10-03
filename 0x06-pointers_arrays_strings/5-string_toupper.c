#include "holberton.h"

/**
 * string_toupper - Function that reverses the content of an array of integers.
 *
 * @s: s is the array
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	i++;
	}
	return (s);
}
