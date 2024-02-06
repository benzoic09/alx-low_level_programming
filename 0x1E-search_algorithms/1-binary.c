#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search
 *  Return: If the value is not present or the array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t left = 0;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= righti)
	{
		mid = left + (right - left) / 2;

		printf("Searching subarray [%lu:%lu]: ", (
					unsigned long)left, (unsigned long)right);
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
