/**
 * main - Entry point
 * Description: Using loops to print possible comb of 3 digits
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		int firstTens = i / 10;
		int firstUnits = i % 10;
		int j;

		for (j = i; j <= 99; j++)
		{
			int secondTens = j / 10;
			int secondUnits = j % 10;

			if (i != j)
			{
				putchar(firstTens + '0');
				putchar(firstUnits + '0');
				putchar(' ');
				putchar(secondTens + '0');
				putchar(secondUnits + '0');

				if (firstTens != 9 && firstUnits != 9 && secondTens != 9 && secondUnits != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
}
	putchar('\n');

	return (0);
}
