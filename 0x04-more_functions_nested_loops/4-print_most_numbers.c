#include "main.h"

/**
 * print_most_numbers - prints 1-9 without 2&4
 *  number to be inputed
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}

_putchar('\n');
}
