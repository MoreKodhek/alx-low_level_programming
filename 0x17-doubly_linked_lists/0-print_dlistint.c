#include "lists.h"

/**
 * print_dlistint - prints the elements
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;

		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_count);
}
