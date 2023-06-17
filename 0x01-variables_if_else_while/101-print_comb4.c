#include <stdio.h>

/**
 * main - main block
 * program that prints all possible different combinations of three digits.
 * Return: 0
 *
 */

int main(void)
{
int i, j, k;
int count = 0;  /* Count the number of printed combinations */

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);

/* Print the separator if it's not the last combination */
if (++count < 120)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
