#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 *
 * Return: Returns the number of bytes in the initial segment of s
 *		which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int n;
	unsigned int bytes;
	unsigned int count;

	bytes = 0;

	while (s[i] != '\0')
	{
		count = 0;
		n = 0;

		while (accept[n] != '\0')
		{
			if (accept[n] == s[i])
			{
				bytes++;
				count = 1;
			}
			n++;
		}
		if (count == 0)
		{
			return (bytes);
		}
		i++;
	}

	return (bytes);
}
