#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: Always null
 */

void times_table(void)
{
	int i;
	int j;
	int ij;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			ij = i * j;
			_putchar(ij);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
