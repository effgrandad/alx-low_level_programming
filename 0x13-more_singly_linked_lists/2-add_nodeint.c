#include "lists.h"
/**
 * add_nodeint - adds a new node to a linked list's beginning
 * @head: pointer to the 1st node in the list
 * @n: data to insert in that new node
 * Return: pointer to new node, NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
}
