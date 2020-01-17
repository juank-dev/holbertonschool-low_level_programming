#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 *
 * @size: The size of the array
 * Return: the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	return (new_table);
}
