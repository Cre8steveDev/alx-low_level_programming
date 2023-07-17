#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Print details of struct passed into it
 * @d: Struct dog variable
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *namestr;
	char *ownerstr;

	if (!d)
		return;

	namestr = d->name ? d->name : "(nil)";
	ownerstr = d->owner ? d->owner : "(nil)";

	printf("Name: %s\n", namestr);

	if (!(d->age))
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	printf("Owner: %s\n", ownerstr);
}
