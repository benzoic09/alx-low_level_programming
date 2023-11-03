#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key from a hash table.
 * @ht: The hash table to search.
 * @key: The key to search for.
 *
 * Return: value associated with the key & NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}
