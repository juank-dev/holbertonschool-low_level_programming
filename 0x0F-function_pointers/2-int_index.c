#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer.
 * @array: array elements -> cmp.
 * @size: size of an array.
 * @cmp: pointer to the functio to be used to compare values
 * Return: i(index of array)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
