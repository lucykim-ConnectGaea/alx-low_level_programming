#include <stdio.h>

/**
 * main - function that prints all arguments it receive
 * @argc: argument count
 * @argv: argument value
 * Return: o
 */

int main(int argc, char *argv[])
{
	int y;

	for (y = 1; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
