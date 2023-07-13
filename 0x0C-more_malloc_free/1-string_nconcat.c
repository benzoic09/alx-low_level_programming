#include "main.h"

/**
 * string_nconcat - main function
 * @s1: first string
 * @s2: second string
 * @n: interger value
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, concat_len;
char *concat;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

concat_len = len1 + n;

concat = malloc(sizeof(char) * (concat_len + 1));
if (concat == NULL)
return (NULL);

strncpy(concat, s1, len1);
strncpy(concat + len1, s2, n);

concat[concat_len] = '\0';

return (concat);
}
