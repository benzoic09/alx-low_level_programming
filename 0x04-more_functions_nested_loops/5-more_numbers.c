#include "main.h"

/**
 * more_numbers - print 10 times 1-10
 *
 * Return: always 0
 */

void more_numbers(void)
{
int i, j, k;

int l = 0;
while (l <= 9)
{
for (i = 0; i < 15; i++)
{
j = i / 10;
k = i % 10;
if (j > 0)
{
_putchar(j + '0');
}
_putchar(k + '0');
if (j == 1 && k == 4)
{
continue;
}
}
l++;
_putchar('\n');
}
}
