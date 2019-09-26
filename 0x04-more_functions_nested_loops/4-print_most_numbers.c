#include "holberton.h"

/**
 * mul -  checks for checks for a digit (0 through 9).
 * @a: a -  Variable
 * @b: b - variable
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a;

	for ( a = 48; a < 58; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
			_putchar(a);
			}
		}
	}
	_putchar('\n');
}
