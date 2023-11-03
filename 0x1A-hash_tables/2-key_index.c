#include "hash_tables.h"

/**
 * key_index - Get the index for a key in a hash table.
 * @key: The key to hash.
 * @size: The size of the hash table's array.
 * Return: The calculated hash value as an unsigned long integer.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}
