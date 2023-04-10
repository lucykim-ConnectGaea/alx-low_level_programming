#include "main.h"
#include <string.h>

/**
 * _strpbrk - Returns pointer to the first occurrence
 * of a character in a string that
 * matches any character in another string
 * @s: string 1
 * @accept: string 2
 *
 * Description: function that returns first occurece of str1 in str2
 * Return: accept if present and Null if otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	char *tmp;
	/**incase both strings are storing null this prevents crushing*/
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		tmp = accept;/**set tmp to point to first chr in accept and loop*/
		while (*tmp != '\0')
		{
			if (*s == *tmp)
			{
				return ((char *)s);
			}
			tmp++;
		}
		s++;
	}
	return (NULL);
}
