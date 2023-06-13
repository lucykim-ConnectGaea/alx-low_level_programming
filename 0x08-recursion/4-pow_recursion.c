#include "main.h"
#include <math.h>

/**
 * _pow_recursion - function that calc power
 * @x: Input parameter 1
 * @y: Input parameter 2
 * Return: power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
