#include "dog.h"

/**
 * free_dog - functioni that frees dogs.
 * @d: element
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
