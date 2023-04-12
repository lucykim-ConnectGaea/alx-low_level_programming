#include <stdio.h>

/**
 * main -entry point
 * @void: Null value
 *
 * Description: Print double digits
 * return: 0
 */

int main(void)
{
	int a;
	int n;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar("%d%d\n", a, n)
	return (0);
}
