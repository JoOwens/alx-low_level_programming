#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: Input String
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0, a = 0, rev_str;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		rev_str = s[i];
		s[i--] = s[a];
		s[a++] = rev_str;
	}
}
