#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*program will assign a random number to the variable n */

int main(void)
{
int n:;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, m);
else if (m == 0)
printf("Last digit of %i is %i and is 0\n", n, m);
else
printf("Last digit of %i is %i and is less than 6 and not 0\n," n, m)i;
return (0);
}
