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
	int a = 1, b = 2, r = 0, p = 2;

	while (r < 4000000)
		{
		r = a + b;
		a = b;
		b = r;

		if (r % 2 == 0)
			{
			p = r + p;
			}
		}
	printf("%d\n", p);
	return (0);
}
