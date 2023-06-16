/**
 * main - Entry point
 * Description: Prints ascii lower and upper case
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char i = 'a';
	char j = 'A'

	while (i <= 'z')
	{
		putchar(i);
		i++;
	};

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	};

	putchar('\n');

	return (0);
}
