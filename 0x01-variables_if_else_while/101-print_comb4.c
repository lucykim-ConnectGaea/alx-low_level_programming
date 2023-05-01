#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int a;
	int n;
	int k;

	for (a = 0; a < 8; a++)
	{
		for (n = a + 1; n < 9; n++)
		{
			for (k = n + 1; k < 10; k++)
			{
				putchar(a + '0');
				putchar(n + '0');
				putchar(k + '0');
				if (a != 7 || n != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
