#include"main.h"

/**
 * print_last_digit - entry point
 * @num: integer input
 *
 * Description: prints the last digit
 * Return: 0
 */

int print_last_digit(int num)
{
	int lastdgt;

	lastdgt = (num % 10);

	if (lastdgt < 0)
	{
		lastdgt = (-1 * lastdgt);
	}
	_putchar(lastdgt + '0');
	return (lastdgt);
}
