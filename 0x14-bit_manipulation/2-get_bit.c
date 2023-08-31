#include "main.h"

/**
 * get_bit - value of a bit at a given index.
 * @n: number to extract the bit fom
 * @index: The index of the bit to retrieve (starting from 0).
 * Return: The value of the bit at the given index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
