#include <stdio.h>

/**
 * main - main block
 * program that prints all possible different combinations of three digits.
 * Return: 0
*/

int main(void)
{
int count = 0;
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
/* Print the first two-digit number */
putchar('0' + (i / 10));
putchar('0' + (i % 10));
/* Print the separator */
putchar(' ');
/* Print the second two-digit number */
putchar('0' + (j / 10));
putchar('0' + (j % 10));
/* Print the comma and space if it's not the last combination */
if (i != 98 || j !=98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
