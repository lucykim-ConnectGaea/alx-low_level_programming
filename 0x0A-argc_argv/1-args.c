#include <stdio.h>

/**
 i* main - function  prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument value
 * Return: o
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
