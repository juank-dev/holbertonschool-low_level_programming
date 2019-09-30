#include <stdio.h>

/**
 * main - Write a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded)
 * i: Integer
 * r: Result
 * Return: On success 1.
 *
 */
int main(void)
{
	int r = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			r = r + i;
		}
	}
	printf("%d\n", r);
	return (0);
}
