#include "lists.h"
/**
 *
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
