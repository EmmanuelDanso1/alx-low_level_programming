#include <stdio.h>
#include "../search_algos.h"

/**
 * print_list_int - Prints the content of a listint_t
 *
 * @list: Pointer to the head of the list
 */
void print_list_int(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
