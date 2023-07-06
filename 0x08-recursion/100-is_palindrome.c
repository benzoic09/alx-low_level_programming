#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * @length: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_helper(char *s, int length);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}

int length = _strlen_recursion(s);
return (is_palindrome_helper(s, length));
}

/**
 * is_palindrome_helper - Helper function for is_palindrome.
 * @s: The string to check.
 * @length: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_helper(char *s, int length)
{
if (length <= 1)
{
return (1);
}

if (*s != s[length - 1])
{
return (0);
}

return (is_palindrome_helper(s + 1, length - 2));
}

/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}
