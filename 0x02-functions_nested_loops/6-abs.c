#include "main.h"
/**
 * _abs - prints absolute value
 * @n: The character to compare
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	return (n = n * ((2 * n + 1) % 2));
}
