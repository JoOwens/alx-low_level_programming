#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	int a[] = {97, 101, 111, 116, 108};
	int b[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == a[j] || *(s + i) == b[j])
			{
				*(s + i) = n[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
