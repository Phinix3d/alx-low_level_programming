#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value (included)
 * @max: the maximum value (included)
 *
 * Return: a pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
