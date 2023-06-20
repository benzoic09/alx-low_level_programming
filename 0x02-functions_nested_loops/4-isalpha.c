#include "main.h"

/**
 * _isalpha - main block
 * @c: The character to check.
 *  function that checks for lowercase character..
 * Return: always 1
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
