#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the linked list
 * @head: pointer to the 1st element in the list
 * @n: data to be added on the new element
 *
 * Return: pointer to the new node, if fails NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *temp;
	listint_t *new;

	(void) temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
