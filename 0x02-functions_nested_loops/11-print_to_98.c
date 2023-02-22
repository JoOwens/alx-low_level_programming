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

	for (i = n ; i == 98 ;)
	printf("%d, \n", n);

	if (n < 98)
		i++;
	else
		i--;
}
