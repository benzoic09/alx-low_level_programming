#include "main.h"

/**
 * jack_bauer - prints the last digit of a number
 * the number to check
 *
 * Return: the value of the last digit
 */

void jack_bauer(void)
{
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
putchar('0' + (hour / 10));
putchar('0' + (hour % 10));
putchar(':');
putchar('0' + (minute / 10));
putchar('0' + (minute % 10));
putchar('\n');
}
}
}
