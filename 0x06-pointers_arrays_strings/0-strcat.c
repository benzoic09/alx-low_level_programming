#include "main.h"

/**
 * *strcat - function name
 *@dest: - first string
 *@src: second string
 * Return: always o
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	p++;
	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
