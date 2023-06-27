/**
 * puts_half - Returns the number of elements in a string
 * @str: String argument to be printed
 * Return: Always 0 (Success)
 */

#include "main.h"

void puts_half(char *str)
{
	int hnum, i;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length += 1;
	}

	if (length % 2 == 0)
	{
		hnum = (length / 2);

		for (i = hnum; *(str + i) != '\0'; i++)
			_putchar(*(str + i));
	}
	else
	{
		hnum = (length - 1) / 2;

		for (i = hnum + 2; *(str + i) != '\0'; i++)
			_putchar(*(str + i));
	}

	_putchar('\n');

	/**/
}
