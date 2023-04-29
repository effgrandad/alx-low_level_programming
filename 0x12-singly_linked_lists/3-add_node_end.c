#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function adding new node at the end of linked list
 * @head: a double pointer to list_t list
 * @str: a string to place in a new node
 * Return: a new element address, or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp = *head;
	list_t *new;

	for (len = 0; str[len]; len++)

		new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);

}
