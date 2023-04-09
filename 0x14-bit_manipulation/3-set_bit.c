#include "main.h"

/**
 * set_bit - sets value to 1
 * @n: decimal number to pointer
 * @index: position to change
 *
 * Return: 1 if correct -1 if wrong
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ak;

	if (index > 64)
		return (-1);

	for (ak = 1; index > 0;
			index--, ak *= 2);

	*n += ak;

	return (1);
}
