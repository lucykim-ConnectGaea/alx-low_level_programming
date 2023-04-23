#include"main.h"
#include <stdio.h>

/**
 *  print_to_98 - entry point
 *  @n: Integer input
 *
 *  Description: Print natural numbers fron n to 98
 *  Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)/*checks if n is less than 98*/
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
		else
			for (; n > 98; n--)
			{
				printf("%d, ", n);
			}
		printf("98\n");
	}
}
