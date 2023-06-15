#include"main.h"

/**
 *  _abs - entry point
 *  @num: input integer
 *
 *  Description: computes the absolute value of an integer
 *  Return: 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
