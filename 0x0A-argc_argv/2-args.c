#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * @argc: the number of arguments
 * @argv: arguments
 * Description: This program prints each argument on a new line.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
