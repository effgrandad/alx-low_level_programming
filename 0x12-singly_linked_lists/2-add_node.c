#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds new node at start of linked list
 * @head: a double pointer to the linked list
 * @str: a new string added on the node
 * Return: a location of a new element, NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
		list_t *new;
	unsigned int len;

	for (len = 0; str[len]; len++)

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);

}
