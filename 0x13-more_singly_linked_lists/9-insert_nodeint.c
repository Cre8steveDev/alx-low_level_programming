#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at end of a list
 * @head: Pointer to a pointer to a node
 * @idx: Index to insert new node
 * @n: Value of the new_node's int to be added to list
 * Return: Node of listint_t on success or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new_node = malloc(sizeof(listint_t));
	size_t len = listint_len(*head);
	unsigned int track = 0;

	if (*head == NULL || new_node == NULL || idx > (unsigned int)len)
		return (NULL);

	ptr = *head;
	new_node->n = n;
	/* Should have added that if *head is null, then new_node
	 *be assigned to it
	 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (track < (idx - 1))
	{
		ptr = ptr->next;
		track++;
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
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
