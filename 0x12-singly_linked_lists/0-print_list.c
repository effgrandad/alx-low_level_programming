#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function that print elements of linked list
 * @h: a pointer to list_t list
 * Return: printed number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL ; i++)
	{
		if (h->str == NULL)
			printf( "[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
