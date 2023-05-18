#include "lists.h"
/**
 * add_dnodeint_end - adds a new node
 * @head: pointer to the head of the list
 * @n: Element to be added
 *
 * Return: address of the element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = newNode;
		newNode->prev = tmp;
	}

	return (newNode);
}
