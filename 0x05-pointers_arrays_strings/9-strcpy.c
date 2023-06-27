/**
 * _strcpy - Returns the number of elements in a string
 * @dest: Destination
 * @src: Source
 * Return: dest (Success)
 */

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*dest = src + i;
		dest + i;

		i++;
	}

	*(dest + i) = '\0';

	return (dest);

	/**/
}
