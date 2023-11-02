#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string containing the concatenated arguments.
 *         Returns NULL on failure or if ac is 0.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			len++;
		}
		total_len += len + 1;
	}

	str = (char *)malloc(total_len * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[total_len++] = av[i][len];
			len++;
		}
		str[total_len++] = '\n';
	}

	return (str);
}
