#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *f;
	int m;

	m = 1;
	f = (char *)&m;
	return (*f);
}

