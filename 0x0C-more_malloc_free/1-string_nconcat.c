#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: s is a string.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string s1.
 * @s2: string s2.
 * @n: bytes of s2.
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l, t, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t = _strlen(s1);
	l = _strlen(s2);
	if (n < l)
		l = n;

	str = malloc(t + l + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < t; i++)
		*(str + i) = *(s1 + i);

	for (i = 0; i < l; i++)
		*(str + (i + t)) = *(s2 + i);
	*(str + (i + t)) = '\0';
	return (str);
}
