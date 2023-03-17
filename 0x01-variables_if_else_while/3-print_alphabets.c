#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print alphabet lowercase
 * Return: Zero value
 */

int main(void)
{
	char c, f;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (f = 'A'; f <= 'Z'; f++)
		putchar(f);
	putchar('\n');
	return (0);
}
