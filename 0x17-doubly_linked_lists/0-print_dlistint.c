#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: input of a node.
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
