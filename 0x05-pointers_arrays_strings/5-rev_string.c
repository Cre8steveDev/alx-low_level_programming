/**
 * rev_string - Returns the number of elements in a string
 * @s: String argument to be printed
 * Return: Always void (Success)
 */

#include "main.h"

void rev_string(char *s)
{
	int len = 0;

	for (j = 0; *(s + j) != '\0'; j++)
		len += 1;

	int i;
	char *start, *end, temp;

	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	/**/
}
