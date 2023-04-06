#include "main.h"

/**
 * binary_to_uint - convet a binary number
 * @binary: char string
 *
 * Return: converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int power = 0;

	if (!b)
		return (0);

	for (int i = 0; b[i]; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		power <<= 1;
		power |= 1;
	}

	while (power)
	{
		if (b[i] == '1')
			total += power;
		power >>= 1;
		i++;
	}

	return (total);
}
