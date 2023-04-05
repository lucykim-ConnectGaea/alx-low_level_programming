#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - calculates the length (in bytes)
 * of the initial segment of s which consists
 * entirely of bytes in accept
 *
 * @s: string 1
 * @accept: string 2
 * Description:gets the length of a prefix substring
 * Return: 0 if lenth does not match
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;

	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int i;
	unsigned int j;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				initial_length++;
				break;
			}
			else if (j == len2 - 1)
				return (initial_length);
		}
	}
	return (initial_length);
}
