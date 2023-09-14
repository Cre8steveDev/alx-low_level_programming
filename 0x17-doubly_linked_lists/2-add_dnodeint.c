#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning
 * of a  doubly linked list
 * @h: Double pointer to the head node
 * @n: New member value
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return NULL;

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = *head;
		newNode->prev = NULL;
		*head = newNode;

		return (newNode);
	}

	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
