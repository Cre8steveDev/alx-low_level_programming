#include "lists.h"

/**
 * pop_listint - Removes the first item on a list
 * @head: Pointer to head of list to be modified
 * Return: 0 if head is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *head_next;
	int current_val;

	if (*head == NULL)
		return (0);

	current_val = (*head)->n;
	head_next = (*head)->next;
	free(*head);

	(*head) = head_next;

	return (current_val);
}
