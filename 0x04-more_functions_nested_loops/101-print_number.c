#include "holberton.h"

/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int z;

	int m, b;
	b = 10;

	if (n < 0)
	{
		n = n * -1;
		_putchar ('-');
	}
	z = n;

	while (z / b > 9)
	{
		b = b * 10;
	}
	while (b > 0)
	{
		m = z / b;
		z = z % b;
		_putchar (m + '0');
		b = b / 10;
	}
}
