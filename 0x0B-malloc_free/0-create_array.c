#include "main.h"

/**
 * *create_array - function that creates an array of chars, and initializes it with a specific char.

 * 
 * return: array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0);
	return null;

	char *array = malloc(sizeof(char) *size)
		if (array == NULL)
		{
			return NULL;
		}
	for(unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
