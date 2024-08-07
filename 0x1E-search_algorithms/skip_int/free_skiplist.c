#include <stdlib.h>
#include "../search_algos.h"
/**
 * free_skiplist_list - Deallocates a singly linked list
 * @list: Pointer to the linked list to be freed
 */
void free_skiplist_list(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist_list(node);
	}
}
