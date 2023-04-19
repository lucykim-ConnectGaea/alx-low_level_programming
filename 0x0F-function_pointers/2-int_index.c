#include "function_pointers.h"

/**
 * int_index - function
 * @array: array
 * @size: Size of array
 * @cmp: Pointer to array
 * Return: integer or -1 if otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	if (size <= 0)
	{
		return (-1);
	}

	return (-1);
}
