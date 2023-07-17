#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - copies content to a struct
 * @name: First argument member
 * @age: Second argument member
 * @owner: Third argument member
 * Return: _dog pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog = malloc(sizeof(dog_t));

	if (!(_dog))
		return (NULL);

	_dog->name = malloc(sizeof(name));
	_dog->owner = malloc(sizeof(owner));

	if (!(_dog->name))
		return NULL;

	if (!(_dog->owner))
		return NULL;

	_dog->age = age;
	_dog->name = name;
	_dog->owner = owner;

	return (_dog);
}
