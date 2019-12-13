#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position.
 * @h: input of a list.
 * @idx: index to insert node
 * @n: value of integer of node.
 * Return: the list insert node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (idx > i)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (tmp);
}
