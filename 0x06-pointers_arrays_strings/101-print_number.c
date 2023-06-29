#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
int digit;
int is_negative = 0;

if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
is_negative = 1;
n = -n;
}

if (n / 10 != 0)
print_number(n / 10);

digit = n % 10;

if (is_negative)
_putchar('-');

_putchar('0' + digit);
}
