#include "dog.h"
/**
 * init_dog - A function that initializes a new struct variable
 * @d: Pointer to Struct argument
 * @name: Name for the dog member
 * @age: Age for the dog member
 * @owner: Owner of the dog member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!(d))
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
