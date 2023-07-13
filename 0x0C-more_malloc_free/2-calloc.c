#include <stdlib.h>

/**
 * _calloc - assigns memory and initializes the bytes to 0
 * @nmemb: Number of array members
 * @size: Size of bytes for each elements
 * Return: Either NULL or newptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *retptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	retptr = malloc(nmemb * size);

	if (retptr == NULL)
		return (NULL);

	/*Using loop to initialize the whole bytes in the memory*/
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)retptr + i) = 0;
	}

	return (retptr);
}
