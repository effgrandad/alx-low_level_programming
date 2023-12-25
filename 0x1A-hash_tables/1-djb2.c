#include "hash_tables.h"

/**
 * hash_djb2 - function using djb2 to compute the hash of "str"
 * @str: string to hash
 *
 * Return: value of 64 bits hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int f;

	hash = 5381;
	while ((f = *str++))
	{
		hash = ((hash << 5) + hash) + f;
	}
	return (hash);
}

