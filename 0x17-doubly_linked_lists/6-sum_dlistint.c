#include "lists.h"

/**
 * sum_dlistint - yields the total of a doubly linked list's data (n)
 *
 * @head: head of the list
 * Return: the totality of data
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
