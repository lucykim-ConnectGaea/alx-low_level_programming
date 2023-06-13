#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - this function returns the natural square
 * @n: input integer
 * Description: Square recursion
 * Return: 0 or square
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
