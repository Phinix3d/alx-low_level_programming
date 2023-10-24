#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
