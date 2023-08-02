#include "lists.h"

size_t looped_listint_z(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
  * looped_listint_z -  counts unique nodes
  * @head: head the node
  * Return: number of unique nodes
  */
size_t looped_listint_z(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				x++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				x++;
				slow = slow->next;
			}
			return (x);
		}
			slow = slow->next;
			fast = (fast->next)->next;
	}

	return (0);
}


/**
  * print_listint_safe - function that prints a listint_t linked list
  * @head: the head of the linked list
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, index = 0;

	x = looped_listint_z(head);

	if (x == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
	}
	else
	{
		while (index < x)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(98);
	}

	return (x);
}
