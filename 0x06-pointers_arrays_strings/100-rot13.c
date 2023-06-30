#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
char *ptr = s;

while (*s != '\0')
{
if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
*s += 13;
else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
*s -= 13;
s++;
}

return (ptr);
}
