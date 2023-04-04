#include "lists.h"

/**
 * sum_listint - returns the sum of elements
 * @head: pointer to the list
 *
 * Return: total of all the emelemts
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
