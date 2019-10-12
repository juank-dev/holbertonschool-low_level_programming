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
	int j = 0, i = 1, coins = 0, change = 0;

	printf("%d ", argc);
	if (argc == 2)
	{
		for(j = 0; argv [i][j] != '\0'; j++)
		{
			if(!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return(1);
			}
		}
		coins = atoi(argv[i]);
		printf("%d,",coins);
		while(coins % 25 == 0)
		{
			coins -= 25;
			change++;
		}
		while(coins % 10 == 0)
		{
			coins -= 10;
			change++;
		}
		while(coins % 5 == 0)
		{
			coins -= 5;
			change++;
		}
		while(coins % 2 == 0)
		{
			coins -= 2;
			change++;
		}
		while(coins % 1 == 0)
		{
			coins -= 1;
			change++;
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
	return (0);
}
