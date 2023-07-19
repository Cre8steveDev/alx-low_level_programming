/**
 * int_index - Searches for the index of a match
 * @array: Array argument
 * @size: Size of the array
 * @cmp: Comparator function
 * Return: index (int)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
