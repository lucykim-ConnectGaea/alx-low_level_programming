#include "main.h"
#include <string.h>

/**
 * _strchr - loates character in string
 * @s: string
 * @c: character
 * Description:function to find char in str
 * Return:character i if present null is not
 */

char *_strchr(char *s, char c)
{
	char *b = s;

	while (*b != '\0')
	{
		if (*b == c)
		{
			return ((char *)b);
		}
		b++;
	}
	if (c == '\0')
	{
		return ((char *)b);
	}
	return (NULL);
}
