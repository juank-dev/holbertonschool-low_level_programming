#include "hash_tables.h"

/**
 * hash_table_get - Get the value of the key
 * @ht: Struct Hash Table
 * @key: is a data or name.
 * Return: the value of the keay otherwise return NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned int index = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (strcmp(key, tmp->key) == 0)
					return (tmp->value);
				tmp = tmp->next;
			}
		}
		index++;
	}
	return (NULL);
}
