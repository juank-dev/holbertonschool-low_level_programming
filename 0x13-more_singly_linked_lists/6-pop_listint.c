#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Removing the first item of a list.
 *
 * @head: A pointer to the first node of the list
 *
 * Return: Value of a node delete.
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next_node;

	return (value);
}
