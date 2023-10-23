#include "lists.h"

/**
 * insert_nodeint_at_index - new node in linked list added
 * at a given position
 * @head: pointer to the fist node
 * @idx: index where new nodes is inserted
 * @n: data to add in new node
 * Return: pointer to the new node, if fails NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int h = 0;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; temp && h < idx; h++)
	{
	if (h == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	else
		temp = temp->next;
	}
	return (NULL);
}
