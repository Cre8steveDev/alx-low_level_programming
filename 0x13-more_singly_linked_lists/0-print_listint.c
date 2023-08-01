#include "lists.h"

/**
 * print_listint - Prints the integer member of a list
 * @h: Pointer to the head of a node in a list
 * Return: Returns 0 if no node or num_node if atleast 1 node
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;
	listint_t *ptr = (listint_t *)h;

	if (h == NULL)
		return (0);

	while (ptr)
	{
		printf("%d\n", ptr->n);
		num_node++;
		ptr = ptr->next;
	}

	return (num_node);
}
