#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initizliazes variable
 *
 * @d: Dog
 *
 * @name: Name of Dog
 *
 * @age: Age of Dog
 *
 * @owner: Owner of Dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
