#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: input of a list.
 * Return: the sum of the list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *p = NULL;
	dlistint_t *delete = NULL;
	unsigned int i = 1;


	while (index > i)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return(-1);
	if (tmp == *head)
	{
		delete = tmp;
		tmp = tmp->next;
		*head = tmp;
		if (tmp != NULL)
			tmp->prev = NULL;
	}
	else if (tmp->next->next == NULL)
	{
		tmp->next->prev = NULL;
		delete = tmp->next;
		tmp->next = NULL;

	}
	else
	{
		delete = tmp->next;
		p = tmp->next->next;
		tmp->next->next = NULL;
		tmp->next->prev = NULL;
		tmp->next = p;
		p->prev = tmp;
	}
	free(delete);
	return(1);
}
