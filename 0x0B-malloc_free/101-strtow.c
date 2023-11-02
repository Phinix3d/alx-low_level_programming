#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words). Returns NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; *str != '\0'; i++)
	{
		if (*str != ' ')
		{
			j = 0;
			while (str[j] != ' ' && str[j] != '\0')
				j++;

			words[i] = (char *)malloc((j + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				while (i >= 0)
					free(words[i--]);
				free(words);
				return (NULL);
			}
			for (j = 0; *str != ' ' && *str != '\0'; j++)
				words[i][j] = *str++;
			words[i][j] = '\0';
		}
		else
		{
			str++;
		}
	}
	words[i] = NULL;
	return (words);
}
