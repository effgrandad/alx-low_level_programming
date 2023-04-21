#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers, followed by new line
 * @separator: string printed amongst numbers
 * @n: number of arguments passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
		i++;
	}
	va_end(list);
	printf("\n");
}
