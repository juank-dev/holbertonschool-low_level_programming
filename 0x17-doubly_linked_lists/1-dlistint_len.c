#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: input of a node.
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
