#include "main.h"

/**
 * word_count - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 *
 * Return: number of words
 */

int word_count(char *s)
{
	int flag = 0, i = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
		i++;
	}

	return (j);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, count, c = 0, start, end;

	while (*(str + len))
		len++;
	count = word_count(str);
	if (count == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (count + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
