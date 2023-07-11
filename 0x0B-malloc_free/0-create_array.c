#include "main.h"
#include <stdlib.h>

/**
 * *create_array - array of chars, and initializes it with a specific char.
 * @size: - defines the size of the array
 * @c: character to be intialized with
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
	return (NULL);
	}

	array = malloc(sizeof(char) * size);
		if (array  == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
