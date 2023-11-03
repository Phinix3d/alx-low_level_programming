#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * @argc: the number of arguments
 * @argv: arguments
 * Description: This program adds positive numbers provided as arguments
 * and prints the result.
 *
 * If no number is passed, it prints 0.
 * If any argument contains non-digit symbols,
 * it prints "Error" and returns 1.
 *
 * Return: 0 for success, 1 for an error.
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
