#include "main.h"

/**
 * clear bit - sets the value to 0
 *
 * @index: given index
 * Return 1 if correct -1 if wrong
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mak = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mak <<= index;

	if ((*n & mak) == mak)
		*n ^= mak;

	return (1);
}
