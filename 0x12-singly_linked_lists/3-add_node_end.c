#include "lists.h"

/**
 * _strlen - Calculates the length of a string
 * @str: Argument of a string
 * Return: length
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*(str++))
		len++;

	return (len);
}

/**
 * add_node_end - Add a node to the end of a list
 * @head: pointer to the head of the list
 * @str: String to be duplicated into the string member
 * Return: Returns a pointer to the new node/list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;

	if (!new_node)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		/*Find the item next to the last item with the loop*/
		/*Using a tempoary copy of the pointer to the list*/
		while (current->next != NULL)
		{
			current = current->next;
		}
		/*After the loop, the current->next will be on the last item*/
		/*Which is now then assigned the new node*/
		current->next = new_node;
	}

	return (new_node);
}
