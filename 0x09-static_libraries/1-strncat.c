#include "main.h"

/**
 * _strncat - function to combine two string
 * @dest:destination string
 * @src: source string
 * @n: maximum number of characters to copy from the source string
 *
 * Description:  function that concatenates two strings
 * Return: (j)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *j = dest;/**points to dest*/

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)/**copy drc to dest string**/
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';/** Add the terminating null byte**/
	return (j);
}
