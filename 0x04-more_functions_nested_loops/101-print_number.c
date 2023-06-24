#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
if (n == INT_MIN)
{
_putchar('-');
_putchar('2');
n = 147483648;
}

if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
print_number(n / 10);

_putchar('0' + (n % 10));
}
