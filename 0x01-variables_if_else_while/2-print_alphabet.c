/**
 * main - Entry point
 * Description: Prints ascii lowercase a - z
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
