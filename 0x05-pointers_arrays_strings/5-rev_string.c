/**
 * rev_string - Returns the number of elements in a string
 * @s: String argument to be printed
 * Return: Always void (Success)
 */

#include "main.h"

void rev_string(char *s)
{
	int i, j, length = 0;
	char *start, *end, temp;

	start = s;
	end = s;

	for (j = 0; s[j] != '\0'; j++)
		length += 1;

	for (i = 0; i < length - 1; i++)
		end++;

	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end++;
	}
	/**/
}
