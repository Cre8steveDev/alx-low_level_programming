#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * get_nodeint_at_index - Gets node at given index
 * @head: Head of the list
 * @index: Given index to be returned from list
 * Return: Found index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	listint_t *node_index = malloc(sizeof(listint_t));
	size_t len = listint_len(head);
	unsigned int track = 0;

	if (head == NULL || index > (unsigned int)len)
		return (NULL);

	ptr = head;

	while (track < index)
	{
		ptr = ptr->next;
		track++;
	}

	node_index = ptr;

	return (node_index);
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
