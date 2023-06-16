/**
 * main - Entry point
 * Description: Prints single decimal digits 0 - 9
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	};

	putchar('\n');

	return (0);
}
