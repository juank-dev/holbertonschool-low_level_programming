#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node in the index list.
 *
 * @head: A pointer to the first node of the list
 * @index: index of the list.
 * Return: Value of a node index.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *delete_node = NULL;
	listint_t *index_node;
	listint_t *h = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		delete_node = (*head)->next;
		free(*head);
		*head = delete_node;
		return (1);
	}

	while (i < index)
	{
		index_node = (*head)->next;
		*head = index_node;
		++i;
	}

	delete_node = (*head)->next->next;
	free((*head)->next);
	(*head)->next = delete_node;
	*head = h;
	return (1);
}
