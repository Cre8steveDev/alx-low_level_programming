#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of a list
 * @head: Pointer to a pointer to a node
 * @n: Value of the new_node's int to be added to list
 * Return: Node of listint_t on success or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		while (ptr->next)
			ptr = ptr->next;

		new_node->next = NULL;
		ptr->next = new_node;
	}

	return (new_node);
}
