#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function name
 * @str: input string
 * Description: Allocates memory for a new string
 *
 * Return: NUll if string is null and new allocated space if otherwise
 */

char *_strdup(char *str)
{
	char *a;
	int y, z;

	if (str == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y] != '\0'; y++)
	a = (char *) malloc(sizeof(char) * (y + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	z = 0;
	while (z <= y)
	{
		a[z] = str[z];
		z++;
	}
	a[y + 1] = '\0';
	return (a);
}
