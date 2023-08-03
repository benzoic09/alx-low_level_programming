#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int shift = sizeof(n) * 8 - 1; /* Number of bits in unsigned long int */


	while (shift >= 0 && !(n & (1UL << shift)))
		shift--;

	if (shift < 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{

		_putchar((n & (1UL << shift)) ? '1' : '0');
		shift--;
	}
}
