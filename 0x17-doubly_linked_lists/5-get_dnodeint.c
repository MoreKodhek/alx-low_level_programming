#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to the head
 * @index: index of the node
 *
 * Return: null if there is no node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (head != NULL)
		return (head);
	else
		return (NULL);
}
