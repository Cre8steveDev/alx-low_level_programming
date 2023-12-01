/**
 * main - Entry point
 * Description: Prints single decimal digits 0 - 9
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d);
		d++;
	};

	putchar('\n');

	return (0);
}
