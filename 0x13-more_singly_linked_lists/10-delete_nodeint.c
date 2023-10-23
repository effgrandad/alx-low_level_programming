#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node of list at a particular index
 * @head: pointer at the beginning of list
 * @index: index of a node that is freed
 * Return: 1 if success, -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int h = 0;
	listint_t *temp = *head;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (h < index - 1)
	{
		if (!temp || !(temp->next))
		return (-1);
		temp = temp->next;
		h++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);

}
