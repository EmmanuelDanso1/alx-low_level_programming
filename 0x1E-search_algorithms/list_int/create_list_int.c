#include <stdlib.h>
#include "../search_algos.h"

void free_list_int(listint_t *list);

/**
 * create_list_int - Creates a single linked list
 * @array: Pointer to the array to use to fill the list
 * @size: Size of the array
 * Return: A pointer to the head of the created list (NULL on failure)
 */
listint_t *create_list_int(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list_int(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
