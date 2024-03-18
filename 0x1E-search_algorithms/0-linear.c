#include "search_algos.h"

/**
 * linear_search - Implementation of linear search
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to be searched
 * Return: Index of the value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
