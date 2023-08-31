#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer to the number whose bit we want to set
 * @index: the index of the bit to set
 * Return: 1 if okay and -1 if error
 */

int set_bit(unsigned long *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
