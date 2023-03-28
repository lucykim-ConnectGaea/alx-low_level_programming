#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: string to be copied
 * Description: Function that copies string
 * Return: the pointer to dest i
 */

char *_strcpy(char *dest, char *src)
{
	char *i = "dest";

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return i;
}
