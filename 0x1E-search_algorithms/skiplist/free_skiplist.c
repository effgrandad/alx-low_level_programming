#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - Deallocates a singly linked list
 * @list: Pointer pointing to linked list to set free
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
