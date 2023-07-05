#include "main.h"

/**
 * _print_rev_recursion - Prints a string recursively
 * @s: string argument of the function
 * Return: Void always
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
