#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 0 to 9 separated by comma and space
 * Return: Zero value
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
