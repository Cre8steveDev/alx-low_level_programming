#include "lists.h"
/**
 * free_list - frees the list passed in as argument
 * @head: Pointer to the first item on the list
 * Return: Void always
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	if (!(head))
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
