#include <stdio.h>

/**
 * main - Entry point
 *assign a random number to the variable n each time it is executed
 * Return: Exit
 */
int main(void)
{
int n;
n = rand();
if(n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);
return (0);
}
