#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of argument strings
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{

int i;
int j;
int total_length = 0;
char *result;
char *temp;
if (ac == 0 || av == NULL)
return (NULL);


for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}

result = malloc(sizeof(char) * total_length + 1);
if (result == NULL)
return (NULL);

temp = result;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*temp = av[i][j];
temp++;
}
*temp = '\n';
temp++;
}
*temp = '\0';

return (result);
}

