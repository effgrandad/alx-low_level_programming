#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments passed to the function
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);

}
