#include <stdio.h>
#include <stdlib.h>

/**
 * * main - function that multiplies two numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */
int mult(int x, int z)
{
	return x * z;
}
int main(int argc, char *argv[])
{
	int x;
	int z;
	int product;
	
	if (argc != 3)
	{
		printf("Error\n");
		{
			return (1);
		}
	}
	x = atoi(argv[1]);
	z = atoi(argv[2]);
	
	product = mult(x, z);
	{
		printf("%d\n", product);
	}
	return(0);
}
