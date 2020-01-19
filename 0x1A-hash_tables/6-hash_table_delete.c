#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: Struct Hash Table
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *tmp;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			free_list(tmp);
			ht->array[index] = NULL;
		}
		index++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */

void free_list(hash_node_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}
