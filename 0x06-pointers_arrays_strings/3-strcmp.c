#include "main.h"

/**
 * _strncpy - Copies a string with a specified maximum number of characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: Pointer to the resulting string dest
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2)) 
{
s1++;
s2++;
}

return *(unsigned char*)s1 - *(unsigned char*)s2;
}
