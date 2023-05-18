#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to the head of the lisst
 * @data: element to be added
 *
 * Return: new element or NULl
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int data)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = data;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
