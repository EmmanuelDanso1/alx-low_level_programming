#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list_int - Deallocates a singly linked list
 *
 * @list: Pointer to the linked list to be freed
 */
void free_list_int(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	
	}
}
