#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert at index
 * @h: Pointer to the head
 * @idx: Index to be added
 * @n: Number value
 * Return: New Node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *newNode = NULL;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = newNode;
		return (newNode);
	}

	while (curr != NULL)
	{
		if (i == idx)
		{
			curr->prev->next = newNode;
			newNode->prev = curr->prev;
			newNode->next = curr;

			return (newNode);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
