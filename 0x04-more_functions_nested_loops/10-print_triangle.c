#include "main.h"

/**
 * print_triangle - Function multiplies 2 numbers
 * @size: operand
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			/*First triangle decreasing*/
			for (j = i; j < size; j++)
			{
				_putchar(32);
			}
			/*Second triangle increasing*/
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		/*printf("Helllooo");*/
	}
}
