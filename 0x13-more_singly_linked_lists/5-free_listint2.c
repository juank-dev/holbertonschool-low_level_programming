#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
