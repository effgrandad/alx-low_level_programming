#include "lists.h"
/**
 * print_listint - print all element data in a singly linked list
 * @h: the quantity of the nodes
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t digit;

	if (h == NULL)
		return (0);
	for (digit = 0; h != NULL; digit++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (digit);
}
