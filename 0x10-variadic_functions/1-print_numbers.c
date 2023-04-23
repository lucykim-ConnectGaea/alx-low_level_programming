#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));
		if (j < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
