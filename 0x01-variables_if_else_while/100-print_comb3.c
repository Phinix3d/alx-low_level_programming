#include <stdio.h>

/**
 * main -Entry point
 *
 * Description:prints all possible different combinations of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 8; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
