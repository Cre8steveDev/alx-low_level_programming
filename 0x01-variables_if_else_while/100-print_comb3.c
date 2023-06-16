/**
 * main - Entry point
 * Description: Using loops to print possible comb of 2 digits
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		int j = i + 1;

		for ( ; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		};
	};
	putchar('\n');

	return (0);
}
