#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 * @n: Int
 * @i: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Desc singly linked list node structure
 */
typedef struct listint_s
{
		int n;
		size_t i;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Int
 * @i: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Desc: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
				int n;
				size_t i;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
#endif
