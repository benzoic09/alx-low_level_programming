#include "main.h"

/**
 *  function that prints 10 times the alphabet, in lowercase.
 * Return: always 0
 */

void print_alphabet_x10(void)
{
char alp;
int count = 0;
while (count++ <= 9)
{
for (alp = 'a'; alp <= 'z'; alp++)
_putchar(alp);
_putchar('\n');
}
}
