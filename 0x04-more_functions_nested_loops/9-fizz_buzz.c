#include "main.h"

/**
 * main - FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}

	putchar('\n');
	return (0);
}
