#include <stddef.h>
/**
 * array_iterator - Iterates through a given array
 * @array: Array to be iterated
 * @size: Given size of the original array
 * @action: Callback function to act on each iteration
 * Return: Always Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !size || !action)
		return;

	for (; i < size; i++)
		action(array[i]);
}
