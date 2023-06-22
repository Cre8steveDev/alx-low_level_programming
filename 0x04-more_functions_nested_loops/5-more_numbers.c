#include "main.h"
#include <unistd.h>

/**
 * more_numbers - entry point
 * _putc - print a character
 * @c: character
 * more_numbers - Function prints 0 to 14 with putchar
 * Return: Always 0 (Success)
*/

int _putc(char c);

void more_numbers(void)
{
int k = 0;
while (k < 10)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
		if (i >= 58)
		{
			i = 49;
			while (j < 53)
			{
				_putchar(i);
				_putchar(j);
				j++;
			}
			break;
		}
	}

	_putc('\n');
	k++;
	}
}

int _putc(char c)
{
return (write(1, &c, 1));
}
