#include <stdio.h>

/**
 * main - main block
 * program that prints all possible combinations of two two-digit numbers.
 * Return: 0
*/

int main(void)
{
int i, j;

for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
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
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
