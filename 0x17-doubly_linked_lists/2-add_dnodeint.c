#include "lists.h"

/**
 * add_dnodeint - adds a new node to a dlistint_t at its start
 * @head: head of the list
 * @n: element's value
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *k;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	k = *head;

	if (k != NULL)
	{
		while (k->prev != NULL)
			k = k->prev;
	}

	new->next = k;

	if (k != NULL)
		k->prev = new;

	*head = new;

	return (new);
}
