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

	for (; *b; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		digi = (digi << 1) | (*b - '0');
	}

	return (digi);
}
