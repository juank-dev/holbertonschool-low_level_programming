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
	int mul = 1;

	if (argc == 3)
	{
		mul *= atoi(argv[argc - 2]);
		mul *= atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);

}
