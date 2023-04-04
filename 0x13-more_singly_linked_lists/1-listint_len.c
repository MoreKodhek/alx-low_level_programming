#include "lists.h"

/**
 * listint_len - Prints all the elements of a linked list of integers
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return count;
}
