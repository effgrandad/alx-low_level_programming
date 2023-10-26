#include "main.h"

/**
 * set_bit - func that runs the number of a bit to 1 at a particular index.
 * @h: number to run
 * @indx: index at which to run bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *h, unsigned int indx)
{
	unsigned long int setbit;

	if (indx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << indx;
	*h = *h | setbit;
	return (1);
}

