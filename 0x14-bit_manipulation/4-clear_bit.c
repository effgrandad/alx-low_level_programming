
#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - The func sets the value of a bit to 0.
 * @h: parameter
 * @indx: indx
 * Return: on success return 1, if fails -1
 */
int clear_bit(unsigned long int *h, unsigned int indx)
{
	if (indx > sizeof(h) * 8)
		return (-1);
	*h &= ~(1 << indx);
	return (1);
}

