#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 */

int mul(int num1, int num2)
{
	return num1 * num2;/**multiplication*/
}
void check_digits(char* num1, char* num2)/*checking if inputs are digits*/
{
       	int j;
	for (j = 0; j < strlen(num1); j++)
	{
		if (!isdigit(num1[j]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (j = 0; j < strlen(num2); j++)
	{
		if (!isdigit(num2[j]))
		{
			printf("Error\n");
			exit(98);
		}
	}
}
/**
 * main program entry point
 * expected number of command-line arguments is 3
 * nume1,num2 and the programitself
 */
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	char* num1 = argv[1];
	char* num2 = argv[2];
	check_digits(num1, num2);
	int result = multiply(atoi(num1), atoi(num2));/**ascii to int*/
	printf("%d\n", result);
	return (0);
}
