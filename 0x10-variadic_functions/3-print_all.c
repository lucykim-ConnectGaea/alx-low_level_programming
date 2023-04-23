#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
/**
 * print_all - Function that prints anything
 *
 * @format: This is the format to print a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list var;
	char *string;
	int j;

	j = 0;
	va_start(var, format);
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'i':
				printf("%i", va_arg(var, int));
				break;
			case 'f':
				printf("%f", va_arg(var, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(var, int));
				break;
			case 's':
				string = va_arg(var, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f' ||
		format[j] == 's') && format[(j + 1)] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(var);
}
