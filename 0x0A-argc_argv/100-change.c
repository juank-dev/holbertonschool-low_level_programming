#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints buffer in hexa
 * @argc: he number of command line arguments
 * @argv: An array containing the program command line arguments.
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int j = 0, i = 1, coins, change = 0, a;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] == '-')
			{
				printf("0\n");
				return (0);
			}
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		coins = atoi(argv[i]);
		for (a = 0; a < 5; a++)
		{

			while (coins >= cents[a])
			{
				coins -= cents[a];
				change += 1;
			}
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
