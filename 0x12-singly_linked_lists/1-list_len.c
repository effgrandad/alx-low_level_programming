#include "main.h"
#include <stdlib.h>

/**
 * list_len - function returning number of elements in  linked list
 * @h: a pointer to the list_t list
 *
 * Return: the elements number in h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}

