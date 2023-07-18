#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a dog's basic info
 * @d: First member
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d->name == NULL)
	{
		name = "(nil)";
	}
	else
	{
		name = d->name;
	}
	if (d->age == 0)
	{
		age = 0;
	}
	else
	{
		age = d->age;
	}
	if (d->owner == NULL)
	{
		owner = "(nil)";
	}
	else
	{
		owner = d->owner;
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
