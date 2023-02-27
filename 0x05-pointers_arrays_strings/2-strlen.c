#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: length of sring s
 */

int _strlen(char *s)
{
	int str_len;

	for (str_len = 0; *s != '\0'; s++)
	{
		str_len++;
	}

	return (str_len);
}

