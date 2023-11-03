#include "hash_tables.h"

/**
 * hash_djb2 - Hash a string using the djb2 algorithm.
 * @str: The input string to be hashed.
 * Return: The calculated hash value as an unsigned long integer.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;

	unsigned long int hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
