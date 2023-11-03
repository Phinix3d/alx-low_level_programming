#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * @argc: the number of arguments
 * @argv: arguments
 * Description: This program multiplies two numbers and prints the result.
 * If the program does not receive two arguments,
 * it prints "Error" and returns 1.
 *
 * Return: 0 for success, 1 for an error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
