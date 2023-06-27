/**
 * _strcpy - Returns the number of elements in a string
 * @dest: Destination
 * @src: Source
 * Return: dest (Success)
 */

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;
	int len = 0;

	for (j = 0; *(src + j) != '\0'; j++)
		len += 1;

	dest[len + 1];

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);

	/**/
}
