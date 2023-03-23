#include "main.h"

/**
 * more_numbers - prints tens times the numbers
 * @void: Null value
 *
 * Description: prints 10 times the numbers
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	
	for (i = 0; i < 14; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
	}
	_putchar (i);
}
