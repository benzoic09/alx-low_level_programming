#include "main.h"

/**
 *  *malloc_checked - nain functions
 *  @b: interger 
 *  Return: returns ptr
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL) 
{
fprintf(stderr, "Memory allocation failed\n");
exit(98);
}

return ptr;
}
