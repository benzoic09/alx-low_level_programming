#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{

c = 'A';
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar('0' + _isupper(c));
_putchar('\n');

c = 'a';
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar('0' + _isupper(c));
_putchar('\n');

return (0);
}
