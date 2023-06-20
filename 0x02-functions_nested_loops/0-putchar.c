#include <unistd.h>
/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter[] = "_putchar";
	char new[] = "\n";

	write(1, letter, 9);
	write(1, new, 2);

	return (0);
}

