#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first apearance c in the string s,
 *         or NULL if the char not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
