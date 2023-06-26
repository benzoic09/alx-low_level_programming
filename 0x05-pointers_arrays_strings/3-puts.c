#include "main.h"

/**
 *  * _puts - Prints a string followed by a new line
 *   * @str: The string to print
*/

void _puts(char *str)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
