#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - functio to print str len
 * @s: input parameter
 *
 * Description: returns the length of a string.
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 +  _strlen_recursion(s + 1));
}
