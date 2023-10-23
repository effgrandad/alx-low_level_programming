#include "lists.h"

/**
 * listint_len - returns quantity of elements in linked list
 * @h: a linked list of listint_t to travel through
 *
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t digit;

	for (digit = 0; h != NULL; digit++)
	{
		h = h->next;
	}
	return (digit);
}
