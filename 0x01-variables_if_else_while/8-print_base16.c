#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers of base 16
 * Return: Zero value
 */

int main(void)
{
	char e;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (e = 'a'; e <= 'f'; e++)
		putchar(e);
	putchar('\n');
	return (0);
}
