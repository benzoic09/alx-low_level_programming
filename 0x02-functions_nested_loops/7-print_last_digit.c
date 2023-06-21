#include "main.h"

/**
 * print_last_digit - main block
 * @r: the number to be checked
 *  program that prints all possible different combinations of three digits.
 * Return: 0
 */

int print_last_digit(int r)
{
int last_digit;
last_digit = r % 10;
if (last_digit < 0)
last_digit *= -1;

_putchar('0' + last_digit);

return (last_digit);
}
