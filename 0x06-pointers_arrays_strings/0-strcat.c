#include "main.h"

/**
 * _strcat - concatinates 2 string
 * @dest: char input
 * @src: char input
 *
 * Return: Concatinated string
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
