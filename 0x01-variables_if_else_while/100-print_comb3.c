#include <stdio.h>

/**
 * main -entry point
 * @void: Null value
 *
 * Description: Print double digits
 * Return: 0
 */

int main(void)
{
	int a;
	int n;

	for (a = 0; a <= 9; a++)
	{
		for (n = a + 1; n <= 9; n++)
		{
			putchar(a + '0');
			putchar(n + '0');
			if (a != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
