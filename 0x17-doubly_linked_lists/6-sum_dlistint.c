#include "lists.h"
/**
 * sum_dlistint - returns the sum
 * @head: pointer to the head
 *
 * Return: 0 if it is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int totalSum = 0;

	while (head != NULL)
	{
		totalSum += head->n;
		head = head->next;
	}

	return (totalSum);
}
