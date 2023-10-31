#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 * @str: the input string
 *
 * Return: A pointer to the duplicated string or NULL if if str = NULL.
 */

char *_strdup(char *str)
{
	char *cpy;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	cpy = (char *)malloc((sizeof(char) * len) + 1);
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	cpy[len] = '\0';

	return (cpy);
}
