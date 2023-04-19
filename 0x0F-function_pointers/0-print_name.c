#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: char pointer
 * that contains the name to be printed
 * @f: function pointer named f that
 * takes a char pointer as an argument
 * Return:  returns void
 */

void print_name(char *name, void (*f)(char *))
{
	/**The print_name function calls*/
       /**the function pointed to by f,*/
	/**passing in the name argument*/
	f(name);
}
