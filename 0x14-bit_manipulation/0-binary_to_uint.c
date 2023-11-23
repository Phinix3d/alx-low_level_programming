#include "main.h"
#include <stdio.h>
/**
 * _strlen - calculate the length of string
 * @b: pointer to string
 * Return: the length of string
 */
unsigned int _strlen(const char *b)
{
	unsigned int i = 0;

	while (*b)
	{
		b++;
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string of 0 and 1
 * Return: the converted number, or 0
 * if one or more char diff than 0 or 1 , or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			n += ((*b - '0') << i);
		}
		else
			return (0);
		i--;
		b++;
	}
	return (n);
}
