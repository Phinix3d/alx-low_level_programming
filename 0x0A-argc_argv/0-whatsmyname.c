#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * @argc: The number of command line arguments
 * @argv: command line arguments
 * Description: This program prints its name, regardless of what it's called.
 * If you rename the program, it will print the new name without recompilation.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		return (1);
	}
}
