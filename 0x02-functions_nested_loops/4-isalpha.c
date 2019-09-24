#include "holberton.h"

/**
 * _isalpha - Entry point
 *
 * @c: c is the variable for the program.
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{

	if (('z' > c && c > 'a') || ('Z' > c && c > 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
