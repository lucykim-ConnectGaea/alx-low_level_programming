#include "dog.h"

/**
 * init_dog - fuction
 * @d: new dog entry
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 * Return: Null if entry iis null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		return;
	}
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
