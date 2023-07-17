#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *newptr;
    unsigned int i;

    if (new_size == old_size)
        return (ptr);

    newptr = malloc(new_size);

    if (!ptr)
    {
        return ((void *)newptr);
    }

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    if (new_size > old_size)
    {
        for (i = 0; i < old_size; i++)
        {
            newptr[i] = *((char *)(ptr) + i);
        }
        return ((void *)newptr);
    }
    /* If new_size is less than old size*/
    if (new_size < old_size)
    {
        for (i = 0; i < new_size; i++)
        {
            newptr[i] = *((char *)(ptr) + i);
        }
        return ((void *)newptr);
    }
    /* Add a return statement here to handle the case when new_size <= old_size*/
    return (ptr);
}