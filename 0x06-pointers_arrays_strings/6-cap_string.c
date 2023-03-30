#include "main.h"
#include <ctype.h>

/**
 * cap_string - entry point
 * @str: input string
 *
 * Description: function that capitalises wac word
 * Return: (str)
 */
char *cap_string(char *str)
{
	int i = 0;
	int word = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == '\"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			word = 1;
		}
		else if (word)
		{
			str[i] = toupper(str[i]);
			word = 0;
		}
		i++;
	}
	return (str);
}
