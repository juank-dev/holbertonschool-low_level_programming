#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @grid: height array
 * @height: width array
 *
 * Return: Pointer
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(*(grid + k));
	}
	free(grid);
}
