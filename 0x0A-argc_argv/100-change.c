#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * @argc: the number of arguments
 * @argv: arguments
 * Description: This program calculates the minimum number of coins needed
 * to make change for a given amount of money in cents.
 * If the number of arguments is not exactly 1,
 * it prints "Error" and returns 1.
 * If the argument is negative, it prints 0.
 *
 * Return: 0 for success, 1 for an error.
 */
int main(int argc, char *argv[])
{
	int cents, coins, i, num, num_coins;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	num_coins = sizeof(values) / sizeof(values[0]);

	for (i = 0; i < num_coins; i++)
	{
		num = cents / values[i];
		coins += num;
		cents %= values[i];
	}
	printf("%d\n", coins);
	return (0);
}
