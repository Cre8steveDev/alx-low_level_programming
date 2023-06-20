#include "main.h"
/**
 * print_last_digit- prints last digit of a number
 * @n: The character to compare
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int m = n % 10;

		_putchar(m * -1);
		return (m * -1);
	}
	else
	{
		_putchar(n % 10);
		return (n % 10);
	}

}
