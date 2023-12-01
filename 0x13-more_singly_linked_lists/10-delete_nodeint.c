#include "lists.h"

/**
 * delete_nodeint_at_index - adds a new node at end of a list
 * @head: Pointer to a pointer to a node
 * @index: Index to insert new node
 * Return: 1 on success or NULL if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *temp;
	size_t len = listint_len(*head);
	unsigned int track = 0;

	if (*head == NULL || index > (unsigned int)len)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
		return (1);
	}

	while (track < (index - 1))
	{
		ptr = ptr->next;
		track++;
	}

	temp = ptr->next->next;
	free(ptr->next);
	ptr->next = temp;

	return (1);
}

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
