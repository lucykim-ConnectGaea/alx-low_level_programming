#include "main.h"
#include <stdio.h>

/**
 * print_array- funtion to print array
 * @a: pointer
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	for (b = 1; b < n; b++)
	{
		printf(", ");
	}
	printf("\n");
}
