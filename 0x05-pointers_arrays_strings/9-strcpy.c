#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: Array
 * @src: - Number of array
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);

}
