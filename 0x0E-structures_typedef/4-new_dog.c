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
		*s1 = *s2;
		s1++;
		s2++;
		i++;
	}

	s1[i] = '\0';
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
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	dog->owner = malloc(sizeof(char) * (len2 + 1));

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);

		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
