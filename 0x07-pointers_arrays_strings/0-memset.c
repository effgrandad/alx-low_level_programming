#include "main.h"

/**
 * _memset - function that fill with a constant value
 * @s: address of memory to be filled
 * @b: value that is desired
 * @n: number of byte changed
 * Return: changed array with new n byte value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

