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
	int i, j, word_count = 0, len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (word_count++; str[i] != ' ' && str[i] != '\0'; len++)
				i++;
		}
	}
	if (word_count == 0)
		return (NULL);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < word_count; j++)
	{
		while (str[j] == ' ')
			j++;
		for (len = 0; str[j] != ' ' && str[j] != '\0'; j++)
			len++;
		words[i] = (char *)malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (i = 0; i < word_count; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		j -= len;
		for (len = 0; str[j] != ' ' && str[j] != '\0'; len++, j++)
			words[i][len] = str[j];
		words[i][len] = '\0';
		i++;
	}
	words[i] = NULL;
	return (words);
}
