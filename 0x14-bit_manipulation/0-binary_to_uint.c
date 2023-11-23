#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string of 0 and 1
 * Return: the converted number, or 0
 * if one or more char diff than 0 or 1 , or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = strlen(b) - 1;

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
