#include "lists.h"

/**
 * print_listint_safe - prints safe version
 * @head: head of the list
 *
 * Return: unique number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *previous;
	unsigned int count = 0;

	current = head;
	if (current == 0)
		return (0);

	while (current)
	{
		previous = current;
		current = current->next;

		count++;

		printf("[%p] %d\n", (void *)previous, previous->n);

		if (previous <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
