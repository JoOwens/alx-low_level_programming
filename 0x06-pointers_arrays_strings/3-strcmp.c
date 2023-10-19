#include "main.h"
/**
 * _strcmp - compare 2 string
 * @s1: string input
 * @s2: strmp input
 *
 * Return: 1 if two strings are the same else 0
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
