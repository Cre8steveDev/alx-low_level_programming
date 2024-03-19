#include "search_algos.h"

/**
 * binary_search - Binary search implementation
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value being looked for
 * Return: Returns the index of found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
		{
			low = mid + 1;
		}

		if (value < array[mid])
		{
			high = mid - 1;
		}
	}

	return (-1);
}

/**
 * print_array - Print the array out
 * @array: Array to be printed
 * @start: Start of the array
 * @end: Ending of the array
 * Return: Void
 */

void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");

	while (start <= end)
	{
		if (start != end)
		{
			printf("%d, ", array[start]);
		}
		else
		{
			printf("%d\n", array[start]);
		}

		start++;
	}
}
