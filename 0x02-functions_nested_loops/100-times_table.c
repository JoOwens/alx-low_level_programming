#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 *@n: The Stating point of the times table
 * Return: Always null
 */

void print_times_table(int n)
{
	int i;
	int j;
	int ij;

	if (n > 15 || n < 0)
		return;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			ij = i * j;
			if (ij < 10)
			{
				_putchar(ij + '0');
			}
			else if (ij < 100)
			{
				_putchar(ij / 10 + '0');
				_putchar(ij % 10 + '0');
			}
			else
			{
				_putchar(ij / 100 + '0');
				_putchar((((ij - (ij / 100) * 100)) / 10) + '0');
				_putchar(ij % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (((j + 1) * i) < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (((j + 1) * i) < 10)
				{
					_putchar(' ')
				}
			}
		}
		_putchar('\n');
	}
}
