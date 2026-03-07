#include "dog.h"
#include <stdio.h>

/**
 * free_dog - Frees Dogs
 *
 * @d: Dog
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
