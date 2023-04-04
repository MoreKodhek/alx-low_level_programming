#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: a pointer to the list
 *
 * Return: to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = NULL;
	listint_t *next = NULL;

	curr = *head;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return (*head);
}
