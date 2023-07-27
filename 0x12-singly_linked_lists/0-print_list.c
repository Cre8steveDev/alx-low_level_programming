#include "lists.h"

/**
 * print_list - Prints the details of a list
 * @h: List argument passed to function
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;
	list_t temp;

	if (h == NULL || h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (temp)
		{
			printf("[%d] %s\n", h->len, h->str);
			num_nodes++;
			temp = h->next;
		}
	}

	return (num_nodes);
}
