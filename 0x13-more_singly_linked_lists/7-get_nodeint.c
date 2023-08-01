#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unassigned int index)
{
	unassigned int count = 0;
	listint_t *curent = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		curent = current->next;
	}
	return (NULL)
}
