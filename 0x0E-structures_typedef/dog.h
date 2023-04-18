#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure
 * @name:element 1
 * @age: element 2
 * @owner:element 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_pup(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
