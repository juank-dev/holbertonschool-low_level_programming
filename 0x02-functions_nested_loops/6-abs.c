#include "holberton.h"

/**
 * _abs - Valor absolute
 *
 * @n: int is the variable for the program.
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);

}
