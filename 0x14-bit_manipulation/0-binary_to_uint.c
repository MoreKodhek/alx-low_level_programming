#include "main.h"

/**
 * binary_to_unit - converts binary number
 * @b: a string
 *
 * return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digi = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			digi = (digi << 1) | 1;
		else if (*b == '0')
			digi <<= 1;
		else
			return (0);
		b++;
	}

	return (digi);
}
