#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
char *leet_chars = "AEOTL";
char *leet_nums = "43071";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j] || str[i] == leet_chars[j] + 32)
{
str[i] = leet_nums[j];
break;
}
}
}

return (str);
}
