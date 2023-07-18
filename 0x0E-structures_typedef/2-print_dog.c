#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a dog's basic info
 * @d: First member
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			name = "(nil)";
		}
		else
		{
			name = d->name;
		}
		if (d->owner == NULL)
		{
			owner = "(nil)";
		}
		else
		{
			owner = d->owner;
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
