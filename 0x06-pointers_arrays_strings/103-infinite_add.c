#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum = 0, carry = 0;
	int i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r - 2 || len2 > size_r - 2)
		return (0);

	i = len1 - 1;
	j = len2 - 1;

	r[size_r - 1] = '\0';
	for (; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[i > j ? i + 1 : j + 1] = (sum % 10) + '0';
	}

	if (carry)
		r[0] = carry + '0';
	else
		r++;

	return (r);
}
