#include "lists.h"

/**
 * print_dlistint - displays every elements of a
 * dlistint_t list
 *
 * @k: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *k)
{
	int num;

	num = 0;

	if (k == NULL)
		return (num);

	while (k->prev != NULL)
		k = k->prev;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		num++;
		k = k->next;
	}

	return (num);
}
