/**
 * malloc_checked - Function that returns a void address of b bytes
 * Returns NULL if memory allocation fails
 * @b: Given number of bytes
 * Return: Either NULL or newptr
 */

void *malloc_checked(unsigned int b)
{
	void *newptr = malloc(b);

	if (!newptr)
		exit(98);

	return (newptr);
}
