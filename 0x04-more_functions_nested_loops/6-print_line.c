#include "main.h"

/**
 * print_line - Function multiplies 2 numbers
 * @n: second operand
 * Return: Returns 1 if true 0 if false
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
	}
}
