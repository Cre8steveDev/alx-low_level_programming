/**
 * main - Entry point
 * Description: Prints ascii lowercase a - z
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
