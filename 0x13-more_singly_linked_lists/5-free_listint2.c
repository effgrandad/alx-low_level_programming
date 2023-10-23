#include "lists.h"
/**
 * free_listint2 - set free a linked list
 * @head: pointer to the listint_t list freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
