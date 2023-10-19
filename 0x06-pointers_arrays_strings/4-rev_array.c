#include "main.h"

/**
 * reverse_array - reverse array
 * @a: input array
 * @n: Length of the arrey
 *
 * Return: Null
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	while (i < (n - 1) / 2)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
	}
}
