#include "main.h"
#include <string.h>

/**
 * _strstr - fuction that locate tring in another string
 * @haystack: string 1
 * @needle: string 2
 *
 * Description: Fucntion
 * Return: string if present and Null if otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int len_haystack = strlen(haystack);
	int len_needle = strlen(needle);

	for (i = 0; i < len_haystack; i++)
	{
		for (j = 0; j < len_needle; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == len_needle)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
