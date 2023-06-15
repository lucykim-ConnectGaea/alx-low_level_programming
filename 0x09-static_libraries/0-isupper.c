#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: single letter input
 *
 * Description: A function that checks for upper case
 * Return: 1 if int c is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
