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
		while (n > 0)
		{
		while (n > 0)
		{
			_putchar(32);
			n--;
		}
		_putchar(92);
		_putchar('\n');
		}
	}
}
