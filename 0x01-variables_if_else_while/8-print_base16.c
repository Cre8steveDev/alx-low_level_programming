/**
 * main - Entry point
 * Description: Print the hex digits 0-9a-f
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char i = 'a';
	char j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	};

	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
