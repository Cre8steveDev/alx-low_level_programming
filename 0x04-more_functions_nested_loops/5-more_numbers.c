#include "main.h"

/**
 * more_numbers - Function prints 0 to 14 with putchar
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
int k = 0;
while (k < 10)
{
	int i = 48;
	int j = 48;

	while (k < 10)
	{
	while (i < 58)
	{
		putchar(i);
		i++;
		if (i >= 58)
		{
			i = 49;
			while (j < 53)
			{
				putchar(i);
				putchar(j);
				j++;
			}
			break;
		}
	}

	_putchar(1, '\n', 1);
	}
}
}
