#include "lists.h"

/**
 * add_dnodeint_end - adds  new node to the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: element's value
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	k = *head;

	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = k;

	return (new);
}
