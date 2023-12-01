#include "lists.h"

/**
 * free_listint - frees the allocated memory of list members
 * @head: Pointer to list to be freed
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
