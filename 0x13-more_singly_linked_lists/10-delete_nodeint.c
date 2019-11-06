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
	unsigned int i = 0;
	listint_t *tmp_node = *head;
	listint_t *after_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp_node = (*head)->next;
		free(*head);
		*head = tmp_node;
		return (1);
	}

	while (i < index - 1)
	{
		tmp_node = tmp_node->next;
		++i;
		if (!tmp_node)
			return (-1);
	}
	after_node = tmp_node->next->next;
	free(tmp_node->next);
	tmp_node->next = after_node;
	return (1);
}
