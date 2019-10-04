#include "holberton.h"

/**
 * rot13 - Function that reverses the content of an array of integers.
 *
 * @str: s is the array
 *
 * Return: Always 0.
 */
char *rot13(char *str)
{
	int i = 0, k;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 51; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
