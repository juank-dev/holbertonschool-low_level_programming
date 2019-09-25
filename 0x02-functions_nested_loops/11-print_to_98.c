#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @A: Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int A)
{

	while (A != 98)
	{
		printf("%i, ", A);
		if (A > 98)
		{
			A--;
		}
		else if (A < 98)
		{
			A++;
		}
	}
	printf("%i\n", 98);
}
