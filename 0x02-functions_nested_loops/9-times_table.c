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
			if (ij < 10)
			{
				_putchar(ij + '0');
			}
			else
			{
				_putchar(ij / 10 + '0');
				_putchar(ij % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (((j + 1) * i) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
