#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint2(listint_t **head)
{

	listint_t *current = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
