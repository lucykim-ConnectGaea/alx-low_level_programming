#include "main.h"
#include <string.h>

/**
  * print_rev - function that prints a string in reverse
  *
  * @s: string to print
  * Return: void
  */
void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
