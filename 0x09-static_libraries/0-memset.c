#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: unsidned int
 *
 * Description:fill memory with contant byte
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	{
		for (i = 0; i < n; i++)
		*(s + i) = b;/**sets the value of 'i'nth byte with constant byte b*/
	}
	return (s);
}
