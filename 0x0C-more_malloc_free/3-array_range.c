#include <stdlib.h>
#include "main.h"

/**
 * array_range -  function that creates an array of integers.
 * @min: min int
 * @max: max int
 * Return: array or NULL
 */

int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	/**Check if min is greater than max*/
	if (min > max)
	{
		return (NULL);
	}
	/**Calculate the size of the array*/
	size = max - min + 1;
	/**Allocate memory for the array*/
	arr = (int *)malloc(size * sizeof(int));
	/**Check if malloc fails*/
	if (arr == NULL)
	{
		return (NULL);
	}
	/**Fill the array with values from min to max*/
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
