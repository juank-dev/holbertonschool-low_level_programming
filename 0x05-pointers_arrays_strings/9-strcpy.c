#include "holberton.h"

/**
 * _strcpy - print reverse characters.
 * @dest: Array
 * @src: - Number of array
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 98;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
