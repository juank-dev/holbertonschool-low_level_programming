#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: input of a list.
 * Return: the sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
