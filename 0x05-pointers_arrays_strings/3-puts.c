/**
 * _puts - Returns the number of elements in a string
 * @str: String argument to be printed
 * Return: Always 0 (Success)
 */

#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
