#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
