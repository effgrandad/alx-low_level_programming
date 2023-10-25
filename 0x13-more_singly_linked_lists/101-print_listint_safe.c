#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - sum up the number of different nodes
 * in a looped listint_t linked list.
 * @head: A pointer pointing to the head of the listint_t
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoize, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	tortoize = head->next;
	hare = (head->next)->next;

	while (hare)
	{
	if (tortoize == hare)
	{
	tortoize = head;
	while (tortoize != hare)
	{
		nodes++;
		tortoize = tortoize->next;
		hare = hare->next;
	}

	tortoize = tortoize->next;
	while (tortoize != hare)
	{
		nodes++;
		tortoize = tortoize->next;
	}
	return (nodes);
	}
		tortoize = tortoize->next;
		hare = (hare->next)->next;
	}

	return (0);
	}

/**
 * print_listint_safe - cautionly Print a listint_t list.
 * @head: A pointer pointing to head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (nodes = 0; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	}
	else
	{
	for (idx = 0; idx < nodes; idx++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

