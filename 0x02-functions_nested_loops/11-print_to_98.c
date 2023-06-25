#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main block
 *  @n: number input by user
 * Return: always 1
 */

void print_to_98(int n)
{
int i;

for (i = n; i <= 98; i++)
{
printf("%d", i);

if (i != 98)
{
printf(", ");
}
}
_putchar('\n');
}
