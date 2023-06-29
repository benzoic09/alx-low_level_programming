#include "main.h"

/**
 * reverse_array - main function
 * @a: content 1
 * @n: content 2
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
