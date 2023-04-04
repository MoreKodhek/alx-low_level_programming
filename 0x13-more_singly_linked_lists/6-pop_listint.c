#include "lists.h"

/**
 * pop_listint - removes the first node
 * @head: pointer to the head
 *
 * Return: value of the node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *next_node;
	listint_t *temp_node;

	if (*head == NULL)
		return (0);

	temp_node = *head;
	value = temp_node->n;

	next_node = temp_node->next;
	free(temp_node);

	*head = next_node;

	return (value);
}
