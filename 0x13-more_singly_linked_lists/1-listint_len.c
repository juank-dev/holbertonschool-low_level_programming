#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{

	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}
