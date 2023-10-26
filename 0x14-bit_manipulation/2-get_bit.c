#include"main.h"

/**
 * get_bit - func that runs the value of a bit at a particular index.
 * @h: value to check bits in
 * @indx: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int h, unsigned int indx)
{
	unsigned long int divisor, check;

	if (indx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << indx;
	check = h & divisor;
	if (check == divisor)
		return (1);
	return (0);
}

