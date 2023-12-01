/**
 * print_rev - Returns the number of elements in a string
 * @s: String argument to be printed
 * Return: Always void (Success)
 */

#include "main.h"

void print_rev(char *s)
{
	int i;
	int length = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		length += 1;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
