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
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i = 0, j = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	len1--;
	len2--;
	r[size_r - 1] = '\0';

	for (; len1 >= 0 || len2 >= 0 || carry; len1--, len2--, i++)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';

		carry = sum / 10;
		r[size_r - 2 - i] = (sum % 10) + '0';
	}

	if (i > size_r)
		return (0);

	for (; j < i; j++)
		r[j] = r[size_r - i + j - 1];

	return (r);
}

