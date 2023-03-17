#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Alphabets
 * Return: Zero value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
