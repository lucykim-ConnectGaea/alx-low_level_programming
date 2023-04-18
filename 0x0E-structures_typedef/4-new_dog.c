#include "dog.h"

/**
 * new_dog - functio
 * @name: element 1
 * @age: element 2
 * @owner: alement 3
 * Return: new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int d;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		/**failed to allocate mem*/
		return (NULL);
	}
	new_dog->name = malloc(sizeof(name) + 1);
	new_dog->owner = malloc(sizeof(owner) + 1);
	new_dog->age = age;
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (d = 0; name[d]; d++)
		new_dog->name[d] = name[d];
	new_dog->name[d] = '\0';
	new_dog->age = age;
	for (d = 0; owner[d]; d++)
		new_dog->owner[d] = owner[d];
	new_dog->owner[d] = '\0';
	return (new_dog);
}
