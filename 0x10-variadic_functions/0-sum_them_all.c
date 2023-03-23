#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: specifies the number of parameters
 *
 * Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	va_start(valist, n);

	for (i = 0; 1 < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
