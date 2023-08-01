#include "lists.h"

/**
 * free_listint2 - frees the allocated memory of list members
 * and assigns the head to NULL
 * @head: Pointer to list to be freed
 * Return: Void return function
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
