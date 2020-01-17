#include "hash_tables.h"

/**
 * key_index - function that evaluate the number of the index
 *
 * @size: The size of the array
 * @key: hash function implementing the djb2 algorithm.
 * Return: the new hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int num;

	num = hash_djb2((unsigned char *)key);

		return (num % size);
}
