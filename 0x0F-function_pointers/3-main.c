#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - fucntion
 * @argc: argument count
 * @argv: value
 * Return: error or result
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	char get_op;
	int op_result;

	if (argc != 4)
	{
		printf("Error\n");
		{
			return (98);
		}
	}

	num1 = atoi(argv[1]);
	get_op = argv[2][0];
	num2 = atoi(argv[3]);
	op_result = (get_op == '+') ? num1 + num2 :
		(get_op == '-') ? num1 - num2 :
		(get_op == '*') ? num1 * num2 :
		(get_op == '/' && num2 != 0) ? num1 / num2 :
		(get_op == '%' && num2 != 0) ? num1 % num2 :
		printf("Error\n") || 99;
	if (!(get_op == '+' ||
				get_op == '-' ||
				get_op == '*' ||
				(get_op == '/' && num2 != 0) ||
				(get_op == '%' && num2 != 0)))
	{
		printf("Error\n");
		return (99);
	}
	return (op_result);
}
