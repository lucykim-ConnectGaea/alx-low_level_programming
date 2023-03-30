#include "main.h"

/**
 * _strcat - function to combine two string
 * @dest:destination string
 * @src: source string
 *
 * Description:  function that concatenates two strings
 * Return: (j)
 */
char *_strcat(char *dest, char *src)
{
	char *j = dest;/**points to dest*/

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')/**copy drc to dest string**/
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';/** Add the terminating null byte**/
	return (j);
}
