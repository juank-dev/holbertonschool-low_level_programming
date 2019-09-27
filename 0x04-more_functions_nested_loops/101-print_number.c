#include "holberton.h"

/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_number(int n)
{
	int b, c, dig;

	b = 10;
	dig = 8;
	if(n != -2147483648)
	{
		if (n < 0)

		{
			n = n * -1;
			_putchar('-');
		}
	}
	else
	{
		while (n / b != 0)
		{
			if (dig != 0)
			{
				b = b * 10;
				dig--;
			}
			else
			{
				_putchar(n / 1000000000 + '0');
				break;
			}
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
	{
}
