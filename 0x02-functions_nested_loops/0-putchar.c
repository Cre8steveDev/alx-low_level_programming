#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter[] = "_putchar";
	int i = 0;

	while (letter[i] != '\0')
	{
		_putchar(letter[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

