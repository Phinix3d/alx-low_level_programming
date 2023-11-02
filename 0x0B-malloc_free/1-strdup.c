#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Allocates memory for a duplicate of the provided string.
 * @str: The source string to duplicate.
 *
 * Return: Returns a pointer to the duplicated string,
 *or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';

	return (duplicate);
}
