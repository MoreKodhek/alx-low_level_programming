#include "lists.h"

/**
 * add_nodeint -adds a new node
 *
 * @head: A pointer to the address of the head
 * @n: the integer for the new node
 *
 * Return: NULL or new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
