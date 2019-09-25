#include "holberton.h"

/**
 * print_times_table - prints the n times table starting with 0 between 0-15
 * @n: Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	int n, i, j, k;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != 0)
				{
					putchar (',');
					putchar (' ');
				if (k >= 10 && k < 100)
				{
					putchar (' ');
					putchar (k / 10 + '0');
					putchar (k % 10 + '0');
				}
				else if (k < 10)
				{
					putchar (' ');
					putchar (' ');
					putchar (k + '0');
				}
				else
				{
					putchar (k / 100 + '0');
					putchar ((k / 10) % 10 + '0');
					putchar (k % 10 + '0');
				}
			}
			else
			{
				putchar (k  + '0');
			}
		}
		putchar('\n');
		}
}
