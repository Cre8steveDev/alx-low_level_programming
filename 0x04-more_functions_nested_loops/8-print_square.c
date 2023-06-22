#include "main.h"

/**
 * print_square - Function multiplies 2 numbers
 * @size: first operand
 * Return: void
 */

int print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i;
		int j = 0;

		while (j < size)
		{
			for (i = 0; i < size; i++)
			{
				putchar(35);
			}
			putchar('\n');
			j++;
		}
	}
}
