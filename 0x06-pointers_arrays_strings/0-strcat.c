#include "main.h"

/**
 * *strcat - function name
 *@dest: - first string
 *@src: second string
 * Return: always o
 */

char *_strcat(char *dest, char *src)
{
	char dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	dest_len++;

	for (i = 0; src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
