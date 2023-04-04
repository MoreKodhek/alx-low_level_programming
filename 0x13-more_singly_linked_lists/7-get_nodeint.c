#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of a list
 * @head: a pointer to the list
 * @index: index of the returned node
 *
 * Return: Null or node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
