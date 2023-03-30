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
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] < s2[i]) ? -1 : 1);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	return ((s1[i] == '\0') ? -1 : 1);
}
