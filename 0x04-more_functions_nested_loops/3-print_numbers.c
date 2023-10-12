#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: Null
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
