/**
 * print_array - Returns the number of elements in a string
 * @a: Array
 * @n: Number of elements in the array
 * Return: Always 0 (Success)
 */

#include "main.h"

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");

	/**/
}
