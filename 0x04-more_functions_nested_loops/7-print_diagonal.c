#include "main.h"

/**
 * print_diagonal - Function multiplies 2 numbers
 * @n: operand
 * Return: Returns 1 if true 0 if false
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(98);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
