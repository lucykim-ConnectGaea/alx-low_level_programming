#include "main.h"

/**
 * reverse_array - function name
 * @a: pointer integer
 * @n: second integer
 *
 * Description: function that reverses int
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
