#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: string to search
 * @c: character to locate
 *
 * Return: A pointer to the first occurence if found.
 *         else NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);

		i++;
	}

	return (NULL);
}
