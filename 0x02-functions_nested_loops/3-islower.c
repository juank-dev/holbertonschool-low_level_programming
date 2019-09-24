#include "holberton.h"

/**
 * _islower - found the lowercase characters.
 *
 * @c: c is the variable for the program.
 *
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
