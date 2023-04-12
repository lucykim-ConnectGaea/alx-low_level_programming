#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - function to concatenates two strings
 * @s1: String one
 * @s2: string two
 * Return: NULL if strings are null or new allocated mem
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i;
	int j;
	/**if NULL is passed, treat it as an empty string*/

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	a = (char *) malloc(((i + j) + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[j] = s2[j];
		j++;
	}
	return (a);
}
