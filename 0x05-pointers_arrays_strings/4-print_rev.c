#include "holberton.h"

/**
 * print_rev - print reverse characters.
 * @s: validate the character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; s[i - 1] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
