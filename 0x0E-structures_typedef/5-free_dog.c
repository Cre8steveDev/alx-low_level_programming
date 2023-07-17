#include "dog.h"
/**
 * free_dog - Frees memory of DMA struct passed into it
 * @d: dog_t struct pointer to be freed
 * Return: void;
 */

void free_dog(dog_t *d)
{
    free(d);
}