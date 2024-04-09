#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - Deallocates a singly linked list
 *
 * @list: Pointer pointing to the linked list to set free
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
