/**
 * main - Entry point
 * Description: Using loops to print possible comb of 3 digits
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i = '0';

	for (; i <= '7'; i++)
	{
		int j = i + 1;

		for ( ; j <= '8'; j++)
		{
			int k = j + 1;

			for ( ; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '7')
				{
					putchar(44);
					putchar(32);
				};
			};
		};
	};
	putchar('\n');

	return (0);
}
