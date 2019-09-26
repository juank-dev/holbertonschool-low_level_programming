#include "holberton.h"

/**
 * mul -  checks for checks for a digit (0 through 9).
 * @a: a -  Variable
 * @b: b - variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, y;

	if ( n > 0)
	{
		for ( x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
        }
        else
	{
		_putchar('\n');
	}
}
