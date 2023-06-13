#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function
 * @size: allocated size
 * @c: Input character
 *
 * Return: array and null if size is 0 and array is null.
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(sizeof(char) *  size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
