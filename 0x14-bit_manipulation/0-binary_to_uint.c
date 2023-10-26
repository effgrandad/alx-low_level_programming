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
	unsigned int sum;

	sum = 0;
	if (!b)
		return (0);
	for (; b[h] != '\0'; h++)
	{
		if (b[h] != '0' && b[h] != '1')
			return (0);
	}
	for (; b[h] != '\0'; h++)
	{
		sum <<= 1;
		if (b[h] == '1')
			sum++;
	}
	return (sum);
}

