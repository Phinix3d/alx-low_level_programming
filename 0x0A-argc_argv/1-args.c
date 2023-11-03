#include <stdio.h>

/**
 * main - Entry point of the program
 *@argc: the number of arguments
 *
 * @argv: arguments
 * Description: This program prints the number of arguments passed into it.
 * It counts the arguments provided on the cmd line, excluding program name.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
