#include "main.h"

/**
 * array_range - main function
 * @min: - lower range
 * @max: - upper range
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
int *arr, size, i;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}

return (arr);
}
