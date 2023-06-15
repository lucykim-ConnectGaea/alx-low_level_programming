#include "main.h"
#include <math.h>

/**
 * is_prime_number- loks for prime numbers
 * @n:input parameter
 * Return: 1 if prime and 0 is otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n ==2 || n == 3)
	{
		return (1);
	}
	if (n %2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
