#include "main.h"

/**
 * print_last_digit - main block
 *  program that prints all possible different combinations of three digits.
 * Return: 0
 */

int print_last_digit(int num)
{
	int last = num % 10;

	_putchar(last);
	return (last);
}
