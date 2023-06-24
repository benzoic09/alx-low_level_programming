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

print_number(n / 10);
_putchar('0' - (n % 10));
}
else if (n < 0)
{
_putchar('-');
n = -n;
}
else if (n == 0)
{
_putchar('0');
return;
}

if (n / 10)
print_number(n / 10);

_putchar('0' + (n % 10));
}

