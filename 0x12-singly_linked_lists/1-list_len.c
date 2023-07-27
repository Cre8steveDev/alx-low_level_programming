#include "lists.h"

/**
 * list_len - A function that returns the lenght of a list
 * @h: pointer to a list
 * Return: len
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
