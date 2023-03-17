#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Alphabets
 * Return:0
 */

int main(void)
{
	char c;

	for (c = 'a'; c = 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
