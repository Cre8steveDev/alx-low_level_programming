/**
 * main - Entry point
 * Description: Prints single decimal digits 0 - 9
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char d = '0';
	int i = 0;

	while (i < 10)
	{
		putchar(d + i);
		i++;
	};

	putchar('\n');

	return (0);
}
