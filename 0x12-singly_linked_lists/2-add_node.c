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
 * add_node - Add a node to the beginning of a list
 * @head: pointer to the head of the list
 * @str: String to be duplicated into the string member
 * Return: Returns a pointer to the new node/list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = strdup(str);

	/**
	 * Store the current head as the next pointer of the new node
	 * Before reassigning the head to the new node
	 *
	 */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
