#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * Whose size is between the given min and max value
 * @min: Number of array members
 * @max: Size of bytes for each elements
 * Return: Either NULL or intptr
 */

int *array_range(int min, int max)
{
	int j = 0, size = 0, i = min;
	int *intptr;

	if (min > max)
		return (NULL);

	while (i <= max)
	{
		size++;
		i++;
	}

	intptr = malloc(size * sizeof(int));
	if (!intptr)
		return (NULL);

	for (j = 0; min <= max; j++)
	{
		intptr[j] = min;
		min++;
	}

	return (intptr);
}
