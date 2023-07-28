#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: The string to be added as the content of the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{

list_t *current = *head;
while (current != NULL)
{

if (strcmp(current->str, str) == 0)
return (NULL);
current = current->next;
}

list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}

return (new_node);
}

