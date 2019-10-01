#include "holberton.h"
#include "stdio.h"

/**
 * print_array - print reverse characters.
 * @a: Array
 * @n: Number of array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int c;

	while (a[n] != '\0')
	{
		n++;
	}
	n--;
	c = n - 1;
	n = 0;

	while (c > 0)
	{
		printf("%d, ", a[n]);
		n++;
		c--;
	}
	printf("%d", a[n]);
	printf("\n");
}
