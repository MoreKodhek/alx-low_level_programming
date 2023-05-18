#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: a pointer
 * @idx: index of the list wher ethe node will be added
 * @n: the element
 *
 * Return: address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int x = 0;

	neewNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = newNode;
		newNode->next = *h;
		*h = newNode;
	}

	while (x < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		x++;
	}

	if (temp == NULL)
		return (NULL);

	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = newNode;

	return (newNode);
}
