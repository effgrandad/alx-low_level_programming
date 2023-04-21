#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_string - prints string, followed by new line
 * @separator: a separator in between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
		i++;
	}
	printf("\n");
	va_end(list);
}
