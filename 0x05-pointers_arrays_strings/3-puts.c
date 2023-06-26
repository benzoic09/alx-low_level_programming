#include "main.h"

/**
 *  * _puts - Prints a string followed by a new line
 *   * @str: The string to print
*/

void _puts(char *str)
{
while (*str != '\0')

{
puts(*str);
str++;
}
_putchar('\n');
}
