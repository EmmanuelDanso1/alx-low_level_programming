#include "search_algos.h"
/**
 * linear_search - linear search for an array of int
 * @array:  pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i];
				if (array[i] == value)
				return (i);
	}
	return (-1);
}
