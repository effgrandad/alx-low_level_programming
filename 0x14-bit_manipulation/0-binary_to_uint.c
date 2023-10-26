#include "main.h"

/**
 * binary_to_uint - conversion of a binary number to  unsigned int.
 * @b: a pointer to  string that contains a binary number
 *
 * Return: unsigned int with decimal value of binary number, or if error 0
 */
unsigned int binary_to_uint(const char *b)
{
	size_t h = 0;
	unsigned int length;
	size_t j = 0;
	size_t powa = 1;
	size_t sum = 0;
	int base = 2;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)

	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);

	for (; b[h] != '\0'; h++)
	{
		if (b[h] != '0' && b[h] != '1')
		{
			return (0);
		}

		for (j = length - 1; j > 0; j--)
		powa = powa * base;
		sum = sum + (powa * (b[h] - 48));
		length--;
		powa = 1;
	}
	return (sum);
}

