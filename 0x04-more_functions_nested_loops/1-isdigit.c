#include "main.h"

/**
 * _isdigit - check if its a digit
 * @c: Input integer
 * Description: checks for a digit
 * Return: 1 if true and 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
