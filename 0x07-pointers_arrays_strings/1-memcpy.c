#include "main.h"
#include <string.h>

/**
 * _memcpy- function that copies memory area.
 * @dest: destination
 * @src: constant byte
 * @n: unsidned int
 *
 * Description:copies memory area
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	{
		for (i = 0; i < n; i++)
		*(char *)(dest + i) = *(char *)(src + i);/**'inth' src to 'inth'byte dest*/
	}
	return (dest);
}
