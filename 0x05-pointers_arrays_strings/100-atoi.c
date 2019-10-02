#include "holberton.h"

/**
 * _atoi - print reverse characters.
 * @s: Array
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if ((s[i] < '0' || s[i] > '9') && (s[i] == '-'))
		{
			sign = sign * -1;
		}
		else
		{
			num = num * 10 + (s[i]);
		}
		i++;
	}
		return (num * sign);
}
