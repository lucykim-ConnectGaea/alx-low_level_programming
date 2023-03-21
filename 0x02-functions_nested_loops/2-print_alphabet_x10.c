#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet x10, in lowercase followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int count;
	char b;

	for (count = 0; count <= 9 ; count++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
