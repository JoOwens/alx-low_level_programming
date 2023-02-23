#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: Null
 */

void print_square(int size)
{
	int l;
	int w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
			for (w = 2; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
