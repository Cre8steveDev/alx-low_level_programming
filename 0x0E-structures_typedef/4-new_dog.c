#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - computes the size of a string
 * @str: passed in string
 * Return: (len)
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcpy - copies string from s2 to s1
 * @s1: Destination string
 * @s2: Source string
 */
void _strcpy(char *s1, char *s2)
{
	int i = 0;

	while (*s2)
	{
		s1[i] = s2[i];
		s2++;
	}
}

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

	_dog->name = malloc(_strlen(name) + 1);
	_dog->owner = malloc(_strlen(owner) + 1);

	if (!_dog->name || !_dog->owner)
	{
		free(_dog->name);
		free(_dog->owner);
		free(_dog);
		return (NULL);
	}

	_strcpy(_dog->name, name);
	_strcpy(_dog->owner, owner);
}
