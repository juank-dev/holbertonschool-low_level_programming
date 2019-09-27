#include "holberton.h"

/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_number(int n)
{
	int b, c;

	b = 10;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	{
		while (n / b != 0)
		{
			b = b * 10;
		}

		b = b / 10;

		while (b >= 1)
		{
			c = n / b;
			c = c % 10;
			_putchar (c + '0');
			b = b / 10;
		}
	}
}
