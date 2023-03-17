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
	char f;

	for (f = 'a'; f = 'z'; f++)
		putchar(f);
	putchar('\n');
	return (0);
}
