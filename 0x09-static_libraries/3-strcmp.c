#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string one
 * @s2: string two
 *
 * Description: comparison oftwo strings
 * Return: s1[i] == '\0'
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
