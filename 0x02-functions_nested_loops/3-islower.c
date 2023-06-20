#include "main.h"

/**
 * _islower - main block
 * @c: The character to check.
 *  function that checks for lowercase character..
 * Return: always 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
