#include "lists.h"

/**
 * get_nodeint_at_index - retreive a node from an index
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node retreived, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	for (; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

