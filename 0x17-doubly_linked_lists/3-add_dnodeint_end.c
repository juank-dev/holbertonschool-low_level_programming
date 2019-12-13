#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list.
 * @head: input of a list.
 * @n: data of the node.
 * Return: the new node at the beginning
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (tmp == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		tmp = new;
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
		new->next = NULL;
		new->n = n;
	}
	return (new);
}
