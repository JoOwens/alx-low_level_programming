#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 *
 * Return: Null.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	int j;
	char *str;
	char tmp;

	while (s[len] != '\0')
		len++;

	str = s;
	len--;

	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = tmp;
		}
	}
}
