#include "hash_tables.h"

/**
 * hash_table_print - Print in a dictionary the and the value
 * @ht: Struct Hash Table
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned int index = 0;
	char dict[1024] = "";
	int count = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (count != 0)
					strcat(dict, ", ");
				strcat(dict, "'");
				strcat(dict, tmp->key);
				strcat(dict, "': '");
				strcat(dict, tmp->value);
				strcat(dict, "'");
				tmp = tmp->next;
				count++;
			}
		}
		index++;
	}
	printf("{%s}\n", dict);
}
