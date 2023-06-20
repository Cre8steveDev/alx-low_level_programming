#include "main.h"
/**
 * _islower - Prints _putchar
 * @c: The character to compare
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
