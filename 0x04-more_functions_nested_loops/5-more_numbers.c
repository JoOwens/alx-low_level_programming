#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 *
 * Return: Null
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');

			j++;
		}
		_putchar('\n');

		i++;
	}
}
