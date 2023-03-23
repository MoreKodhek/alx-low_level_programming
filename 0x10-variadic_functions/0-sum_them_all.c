#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters passed
 * @n: number of parameters
 * Return: sum of parameters
 */
{
	va_list args;
	unsigned int i, sum = 0;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
