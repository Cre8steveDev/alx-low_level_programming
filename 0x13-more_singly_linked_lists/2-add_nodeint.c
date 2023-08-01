#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a list
 * @head: Pointer to a pointer to a node lol
 * @n: Value of the new_node's int to be added to list
 * Return: Node of listint_t on success or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

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
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
