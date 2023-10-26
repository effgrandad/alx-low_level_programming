#include "main.h"

/**
 * binary_to_uint - conversion of a binary number to  unsigned int.
 * @b: a pointer to  string that contains a binary number
 *
 * Return: unsigned int with decimal value of binary number, or if error 0
 */
unsigned int binary_to_uint(const char *b)
{
	int h = 0;
	unsigned int sum; length; h; powa, j;

	powa = 1;
	base = 2;
	sum = 0;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] !='\0')
			sum++;
	}
	return (sum);
}

