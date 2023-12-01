#include "lists.h"

/**
 * sum_listint - Sums the value of all list items
 * @head: Head pointer to the first item
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (sum);

	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
