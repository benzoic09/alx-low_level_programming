#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
/* If the current character is the first character or follows a separator */

if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
str[i] = toupper(str[i]);
}
i++;
}

return (str);
}
