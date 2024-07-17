#include "search_algos.h"
/**
 * linear_search - linear search for an array of int
 * @array:  pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;
	if (arrar == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value of arr[%ld] = [%d]\n", j, array[j];
				if (array[j] == value)
				return (j);
	}
	return (-1);
}

