#include "dog.h"
/**
 * init_dog - a dog's basic info
 * @d: d
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
