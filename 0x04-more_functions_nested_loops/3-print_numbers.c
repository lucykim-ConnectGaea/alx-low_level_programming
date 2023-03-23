#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_numbers - entry point
 * @void: Null value
 *
 * Description: Prints numbers from 0 to 9
 * Return: 0 when sucessful
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
