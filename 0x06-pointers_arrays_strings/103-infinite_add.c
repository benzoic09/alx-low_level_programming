#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0;
int len1 = 0;
int len2 = 0;
int sum;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return 0;

len1--;
len2--;
r[size_r - 1] = '\0';

while (len1 >= 0 || len2 >= 0)
{
sum = carry;

if (len1 >= 0)
sum += n1[len1] - '0';
if (len2 >= 0)
Sum += n2[len2] - '0';

carry = sum / 10;
r[size_r - i - 2] = (sum % 10) + '0';

i++;
len1--;
 len2--;
    }

if (carry != 0)
{
if (size_r - i - 2 <= 0)
return 0;

 r[size_r - i - 2] = carry + '0';
 i++;
 }

return &r[size_r - i - 1];
}
