#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: The string to be added as the content of the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));

new_node->str = strdup(str);


new_node->next = NULL;
new_node->len = len;

if (*head == NULL)
{
*head = new_node;
}

else
{
list_t *current = *head;
while (current->next != NULL)

{
current = current->next;
}

current->next = new_node;
}

return (new_node);
}
