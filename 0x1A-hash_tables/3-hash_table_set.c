#include "hash_tables.h"

/**
 * hash_table_set - function put the key and value in the index
 * @ht: Struct Hash Table
 * @value: value of the key
 * @key: is a data or name.
 * Return: the new hash table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned int idx;
	hash_node_t *node;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			ht->array[idx]->value = strdup(value);
			return (1);
		}
	}

	if (ht->array[idx] == NULL)
	{
		node = malloc(sizeof(hash_node_t *));
		if (node == NULL)
			return (0);
		node->next = NULL;
		node->key = strdup(key);
		node->value = strdup(value);
		ht->array[idx] = node;
	}
	else
	{
		node = malloc(sizeof(hash_node_t *));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[idx];
		ht->array[idx]  = node;
	}

	return (1);
}
