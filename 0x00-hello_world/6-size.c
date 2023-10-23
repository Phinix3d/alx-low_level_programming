#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: print the size of various types using sizeof
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %u bytes\n", sizeof(int));
	printf("Size of long int: %lu bytes\n", sizeof(long int));
	printf("Size of long long int: %u bytes\n", sizeof(long long int));
	printf("Size of float: %u bytes\n", sizeof(float));
	return (0);
}
