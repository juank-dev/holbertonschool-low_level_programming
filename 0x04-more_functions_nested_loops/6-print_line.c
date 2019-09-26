#include "holberton.h"

/**
 * mul -  checks for checks for a digit (0 through 9).
 * @a: a -  Variable
 * @b: b - variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for ( x = 1; x < n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
