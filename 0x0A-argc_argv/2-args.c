#include "holberton.h"
#include <stdio.h>

/**
 * main - prints buffer in hexa
 * @argc: he number of command line arguments
 * @argv: An array containing the program command line arguments.
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
