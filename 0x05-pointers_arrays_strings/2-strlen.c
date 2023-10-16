#include "main.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: String Input
 * Description: this will return the length of a string
 * Return: Length of the string (i)
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
