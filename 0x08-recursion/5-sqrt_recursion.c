#include "main.h"
#include <math.h>

/**
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
