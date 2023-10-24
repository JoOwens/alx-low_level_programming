#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: Viod.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int n = 0;

	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			n = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - n]);

		i++;
	}
	_putchar('\n');
}
