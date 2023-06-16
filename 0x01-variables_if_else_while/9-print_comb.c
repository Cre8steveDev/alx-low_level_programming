/**
 * main - Entry point
 * Description: Print possible single digits combination
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		};
	};
	putchar('\n');

	return (0);
}
