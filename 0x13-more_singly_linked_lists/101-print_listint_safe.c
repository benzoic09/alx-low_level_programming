#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head;
size_t node_count = 0, loop_node_count = 0, i = 0;
int loop_detected = 0;

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
node_count++;

if (slow == fast)
{
loop_node_count = 1;
loop_detected = 1;
slow = slow->next;
while (slow != fast)
{
loop_node_count++;
slow = slow->next;
}
break;
}
}

if (loop_detected)
{
printf("List contains a loop\n");
for (i = 0; i < loop_node_count; i++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
printf("Total number of nodes: %lu\n", node_count);
return (node_count);
}
else
{
while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("Total number of nodes: %lu\n", node_count);
return (node_count);
}
}

