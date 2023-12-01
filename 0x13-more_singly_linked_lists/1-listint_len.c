#include "lists.h"

/**
 * listint_len - Counts the number of nodes in list
 * @h: Argument pointer to a list
 * Return: 0 if NULL or len if atleast 1 node
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	listint_t *ptr = (listint_t *)h;

	if (h == NULL)
		return (0);

	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}

	return (len);
}
