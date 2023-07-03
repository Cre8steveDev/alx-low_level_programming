/**
 * swap_int - Swaps the referenced value of two ints
 * @a: Pointer to first integer Parameter of the function
 * @b: Pointer to the second argument to the function
 * Return: Always 0 (Success void function)
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
