#include "main.h"
/**
 * print_alphabet - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letr = 'a';

	while (letr < 'z')
	{
		_putchar(letr);
		letr++;
	}
	_putchar('\n');

}

