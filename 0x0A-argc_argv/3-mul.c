#include "holberton.h"
#include <stdio.h>

/**
 * main - prints buffer in hexa
 * @argc: he number of command line arguments
 * @argv: An array containing the program command line arguments.
 *
 * Return: Nothing.
 */
int main(int argc, int *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		if(count +1 == argc)
			printf("%s\n", argv[]);
	}
	return(0);
}
