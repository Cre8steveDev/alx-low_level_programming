#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog = malloc(sizeof(dog_t));

	if (!(_dog))
		return (NULL);

	_dog->age = age;
	_dog->name = name;
	_dog->owner = owner;

	return (_dog);
}
