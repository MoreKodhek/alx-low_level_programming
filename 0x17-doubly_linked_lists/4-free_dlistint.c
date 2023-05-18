#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to the head
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode, *tmpNode;

	currentNode = head;

	while (currentNode != NULL)
	{
		tmpNode = currentNode;
		currentNode = currentNode->next;

		free(tmpNode);
	}
}
