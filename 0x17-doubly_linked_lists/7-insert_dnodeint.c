#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a specific position
 *
 * @k: head of the list
 * @idx: index of the new node
 * @n: value of a new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **k, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int j;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(k, n);
	else
	{
		head = *k;
		j = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (j == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(k, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			j += 1;
		}
	}

	return (new);
}
