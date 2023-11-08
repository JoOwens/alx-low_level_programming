#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: The index of the first element for which the cmp
 *		function does not return 0
 *		If no element matches - 1
 *		If size <= 0, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);

		i++;
	}

	return (-1);
}
