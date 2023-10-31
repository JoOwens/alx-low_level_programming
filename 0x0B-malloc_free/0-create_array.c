#include "main.h"

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: Array size.
 * @c: Innitializing character.
 *
 * Return: NULL if array size =0 or the function fails, else.
 *         a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = 0;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
