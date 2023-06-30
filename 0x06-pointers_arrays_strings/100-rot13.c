#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
int i;
char *ptr = s;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*s != '\0')
{
for (i = 0; i < 52; i++)
{
if (*s == alphabet[i])
{
*s = rot13[i];
break;
}
}

s++;
}

return (ptr);
}

