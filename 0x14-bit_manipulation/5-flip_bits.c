#include "main.h"

/**
 * flip_bits - converts a number to another
 * @n: number
 * @m: another number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ak = n ^ m;
	int ma = 0;

	while (ak)
	{
		ma++;
		ak &= (ak - 1);
	}

	return (ma);
}
