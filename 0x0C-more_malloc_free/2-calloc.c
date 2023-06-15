#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc -  function allocates memory
 * @nmemb: array parameter
 * @size:  size of nmemb elements
 * Return: Null or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t arr_size;
	void *ptr;

	/**Check if nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/**Calculate the total size of the memory block to allocate*/
	arr_size = nmemb * size;
	/**Allocate memory using malloc*/
	ptr = malloc(arr_size);
	/**Check if malloc fails*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	/**Set the allocated memory block to zero*/
	memset(ptr, 0, arr_size);
	return (ptr);
}
