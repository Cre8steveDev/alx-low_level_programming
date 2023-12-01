#include "lists.h"

/**
 * print_list - Prints the details of a list
 * @h: List argument passed to function
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%u] %s\n", temp->len, temp->str);

		num_nodes++;
		temp = temp->next;
	}

	return (num_nodes);
}
