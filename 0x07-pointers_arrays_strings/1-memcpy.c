#include "holberton.h"

/**
 * _memcpy - prints buffer in hexa
 * @src: buffer
 * @dest: buffer2
 * @n: size
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
