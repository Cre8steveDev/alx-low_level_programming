/**
 * main - Entry point
 * Description: Prints ascii lower alphabets ! q and e
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	};

	putchar('\n');

	return (0);
}
