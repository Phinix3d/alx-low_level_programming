#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Array of integers to search in.
 * @size: Size of the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which the cmp
 * function does not return 0. If no elements match,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}

