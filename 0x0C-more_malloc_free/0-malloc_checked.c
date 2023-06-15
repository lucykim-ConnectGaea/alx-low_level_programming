#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that  allocates memory
 * @b: Unsigned int
 * Return: Pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
