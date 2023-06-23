#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function
 * @array: pointer to integer array
 * @size: size of array
 * @action: Pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);/** here the function takes an array its size and apointer as arguments*/
	}
}
