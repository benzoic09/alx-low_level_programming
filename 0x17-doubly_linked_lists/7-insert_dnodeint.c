#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n);


/**
 * insert_dnodeint_at_index - Inserts node at given point in dlistint_t list.
 * @h: Pointer to a pointer to the head of the linked list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Integer value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int current_index = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	while (current != NULL)
	{
		if (current_index == (idx - 1))
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}

		current = current->next;
		current_index++;
	}

	free(new_node);
	return (NULL);
}
