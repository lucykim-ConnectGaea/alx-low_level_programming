#include <stdio.h>

/**
 * main - function entry point
 * Return: 0
 */

int main(void)
{
	int a;
	int j;

	for (a = 0; a <= 99; a++)
	{
		for (j = a; j <= 99; j++)
		{
			if (a == j)
			{
				continue;
			}
			/**if (a < 10) ddts with 0 at the bgn*/
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');

			putchar(' ');

			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (a != 99 || j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
