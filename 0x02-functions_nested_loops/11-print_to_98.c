#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  function that prints all natural numbers from n to 98,
 *		followed by a new line.
 * @n: The first number
 * Return: null
 */

void print_to_98(int n)
{
	int i;

	i = n;

	while (i != 98)
	{
		printf("%d, ", i);

		if (n < 98)
			i = i + 1;
		else if  (n > 98)
			i = i - 1;
	}
	printf("98\n");
}
