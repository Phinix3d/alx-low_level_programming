#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
