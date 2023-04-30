#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function that print elements of linked list
 * @h: a pointer to list_t list
 * Return: printed number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf( "[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
