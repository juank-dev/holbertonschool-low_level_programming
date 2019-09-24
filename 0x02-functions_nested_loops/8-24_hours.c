#include "holberton.h"

/**
 * jack_bauer - the function.
 *
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int A;
	int B;

	for (A = 00; A < 24; A++)
	{
		for (B = 00; B < 60; B++)
		{
			if (B < 60)
			{
				_putchar (A / 10 + '0');
				_putchar (A % 10 + '0');
				_putchar (':');
				_putchar (B / 10 + '0');
				_putchar (B % 10 + '0');
				_putchar ('\n');
			}
		}
	}
}
