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
		while (n <= 98)/*while this condition is met*/
		{
			printf("%d", n); /*Prints as integer*/
			if (n != 98)/*prints comma if not equal to 98*/
			{
				printf(",");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
