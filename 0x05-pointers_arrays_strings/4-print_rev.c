/**
 * print_rev - Returns the number of elements in a string
 * @s: String argument to be printed
 * _strlen - Calculate the length of string
 * @s: argument for strlen
 * Return: Always 0 (Success)
 */

#include "main.h"

int _strlen(char *s);

void print_rev(char *s)
{
	int i;
	int size = _strlen(s);

	for (i = size - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}

	return (length);
}
