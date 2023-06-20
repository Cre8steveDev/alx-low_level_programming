#include "main.h"
/**
 * print_alphabet - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	for (i = 0; i < 10; i++)
	{
		char letr = 'a';
		int i;

		while (letr < 'z' + 1)
		{
			_putchar(letr);
			letr++;
		}

		_putchar('\n');

	}
}
