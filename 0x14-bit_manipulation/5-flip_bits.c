#include "main.h"

/**
 * flip_bits - sums up  value of bits to change
 * to get from one value to another
 * @n: first value
 * @m: second value
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f, sumbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (f = 63; f >= 0; f--)
	{
		current = exclusive >> f;
		if (current & 1)
			sumbit++;
	}
	return (sumbit);
}
