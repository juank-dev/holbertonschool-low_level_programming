#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: input array elements
 * @size: the size of array
 * @value: is the value that algorithm to search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
			if (value == array[i])
				return (i);
	}
	return (-1);
}
