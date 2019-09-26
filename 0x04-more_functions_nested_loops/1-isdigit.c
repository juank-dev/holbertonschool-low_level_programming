#include "holberton.h"

/**
 * _isdigit -  checks for checks for a digit (0 through 9).
 * @c: c -  Variable
 * Return: Always 0.
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
