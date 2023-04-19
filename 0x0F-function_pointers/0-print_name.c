#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: char pointer
 * @f: function pointer named f that
 * Return: name or void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
