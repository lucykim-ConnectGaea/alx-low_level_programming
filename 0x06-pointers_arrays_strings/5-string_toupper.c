#include "main.h"
#include <ctype.h>

/**
 * string_toupper - prototype
 * Description: function to change string to uppercase
 * @str : input array
 * Return: str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
