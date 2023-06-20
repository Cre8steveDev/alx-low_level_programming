#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Adds two integers todether and returns the result
 * @n: first operand
 *
 * Return: Always int (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 99)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n++
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
	else
		print("%d", n);
}
