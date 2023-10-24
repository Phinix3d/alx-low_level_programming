#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
